#include <iostream>
#include<cmath>

using namespace std;

// DECLARED FUNCTIONS //
double * read_poly(size_t &n); // Reads polynomial requests
void print_poly(double *c, size_t n); // Prints polynomial
double calculator(const double *const c, size_t n, double x); // Evaluates a polynomial for a specific x value given
int find_degree(const double *const c, size_t n); // Calculates the degree of a polynomial being pointed to
double *sum(const double *const c1, size_t size1, const double *const c2, size_t size2, size_t &degree); // Sums two polynomials
double *multiply(const double *const c1, size_t size1, const double *const c2, size_t size2, size_t &degree); // Multiplies two polynomials


int main()
{
  double *c1;
  size_t size1;
  double *c2;
  size_t size2;

  // Create polynomials
  cout << "----------------------------------------\n\n" << "For the First Polynomial ..." << endl;
  c1=read_poly(size1);
  print_poly(c1,size1);
  cout << "\n\n----------------------------------------\n\n";
  cout << "For the Second Polynomial ..." << endl;
  c2=read_poly(size2);
  print_poly(c2,size2);
  cout << "\n\n----------------------------------------\n\n";

  // Q1: Plug-in an x to calculate the polynomial value at that particular x
  double x {};
  cout << "What x value would you like to plug into the first polynomial? ";
  cin >> x;
  cout<< "The polynomial value at " << x << " is " << calculator(c1, size1, x) << endl;
  cout << "\n\n----------------------------------------\n\n";

  cout << "What x value would you like to plug into the second polynomial? ";
  cin >> x;
  cout<< "The polynomial value at " << x << " is " << calculator(c2, size2, x) << endl;
  cout << "\n\n----------------------------------------\n\n";

  // Q2: Sum of the two polynomials
  size_t degree_sum {};
  double * sum_poly_c {nullptr};
  sum_poly_c = sum(c1, size1, c2, size2, degree_sum);
  cout << "The degree of the sum polynomial is " << degree_sum << endl;
  cout << "The sum of the two polynomials is " << endl;
  print_poly(sum_poly_c, degree_sum+1);
  delete [] sum_poly_c;
  sum_poly_c = nullptr;
  cout << "\n\n=========================================\n\n";

  // Q3: Multiply two polynomials
  size_t degree_product {};
  double *prod_poly_ptr {nullptr};
  prod_poly_ptr = multiply(c1, size1, c2, size2, degree_product);
  cout << "The degree of the product polynomial is " << degree_product << endl;
  cout << "The product of the two polynomials is " << endl;
  print_poly(prod_poly_ptr, degree_product + 1);
  delete [] prod_poly_ptr;
  prod_poly_ptr = nullptr;
  delete [] c1;
  c1 = nullptr;
  delete [] c2;
  c2 = nullptr;


  delete[] c1;
  return 0;
}



// DEFINED FUNCIONS //
//reads and takes in the degree of the desired polynomial and its coefficients
double * read_poly(size_t &n)
{
  cout << "Enter the degree of the polynomial: ";
  cin >> n;
  double * c=new double[n+1];
  for(int i=0;i<=n;i++){
    cout << "Coefficient of degree " << i << ": ";
    cin >> c[i];
  }
  return c;
}

// Prints the polynomial
void print_poly(double *c, size_t n)
{
  int i;
  cout << c[0];
  if(n>0)
    cout << " + ";
  for(i=1;i<n;i++)
    cout << c[i] << "*x^" << i << " + ";
  if(n>0)
    cout << c[n] << "*x^" << i;
  cout << endl;
}

// Plug-in an x value to calculate the polynomial value at x
double calculator(const double *const c, size_t n, double x)
{
    double sum {};
    double degree_of_x = {1};
    for(int i=0;i<=n;i++)
    {
        sum += c[i] * degree_of_x;
        degree_of_x *= x;
    }
    return sum;
}

// Returns the degree of the polynomial whose coefficients are stored in the array to which c1 points to
int find_degree(const double *const c, size_t n)
{
    size_t highest_degree_idx {n};
    do {
        highest_degree_idx--;
    } while (c[highest_degree_idx] == 0 && highest_degree_idx > 0);
    return highest_degree_idx;
}

// A function that sums two polynomials
double *sum(const double *const c1, size_t size1, const double *const c2, size_t size2, size_t &degree)
{
    size_t max_size {};
    size_t min_size {};
    const double *long_array {nullptr};
    if (size1 > size2) {
        max_size = size1;
        min_size = size2;
        long_array = c1;
    }
    else {
        max_size = size2;
        min_size = size1;
        long_array = c2;
    }

    double *result {nullptr};
    result = new double[max_size] {};
    for (size_t i{}; i < min_size; i++)
        result[i] = c1[i] + c2[i];
    for (size_t i{}; i < max_size; i++)
        result[i] = long_array[i];
    degree = find_degree(result, max_size);
    return result;
}

// A function that mutiplies two polynomials
double *multiply(const double *const c1, size_t size1, const double *const c2, size_t size2, size_t &degree)
{
    size_t degree1 {}, degree2 {};
    degree1 = find_degree(c1, size1);
    degree2 = find_degree(c2, size2);
    degree = degree1 + degree2;

    size_t product_array_size {degree + 1};
    double *result {nullptr};
    result = new double[product_array_size] {};
    for (size_t i{}; i<=degree1; i++) {
        if (c1[i] != 0) {   // Saving (degree2 + 1) unnecessary calculations
            for (size_t j{}; j<=degree2; j++)
                result[i + j] += c1[i] * c2[j];
        }
    }
    return result;
}

// I know the code is very close to working properly but it seems to be cutting off the last element of the polynomial; I have tried to find the issue but I have not been successful :(