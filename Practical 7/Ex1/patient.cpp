#include "blood.cpp" //includes blood file, which includes date file
#include <vector>

class Patient
{
  protected:
    string name;
    std::vector<int> vectsys;
    std::vector<int> vectdias;
    std::vector<int> vectday;
    std::vector<int> vectmonth;
    std::vector<int> vectyear;
  public:
    Patient(string n)
    {
      name = n;
    }
    void addRecord(Blood b) //function to add new records
    {
      vectsys.push_back(b.sys);
      vectdias.push_back(b.dias);
      vectday.push_back(b.day);
      vectmonth.push_back(b.month);
      vectyear.push_back(b.year);
    }
    void printReport() //print report of a patient
    {
      cout << "Patient " << name << "'s Report\n";
      for (int i = 0;i<vectsys.size();i++)
        {
          cout << "On the following date: "
          << vectday[i] << "/" << vectmonth[i] << "/" << vectyear[i] << "\n"<< "The Systolic Value was: " << vectsys[i] << " and the Dialostic Value was: " << vectdias[i] << endl;
        }
                // identifying the max element and evaluating the blood pressure value
                cout << "\n";
                int max_index;
                int max_value;
                int max_pressure_index;
                int max_pressure_value;
                bool flag;
                float average;
                max_index = 0;
                max_value = vectsys[0];
                max_pressure_index = 0;
                max_pressure_value = vectsys[0] + vectdias[0];
                average = 0;
                flag = false;
                for (int i = 0;i<vectsys.size();i++)
                {
                    // computing the max value
                    if (vectsys[i]>max_value)
                    {
                        max_value = vectsys[i];
                        max_index = i;
                    }
                    // checking if all measurement are high
                    if (vectsys[i]>140)
                    {
                        flag = true;
                    }
                    // computing the average dialostic pressure
                    average += vectdias[i];

                    // computing the maximal pressure records
                    if (vectsys[i] + vectdias[i]>max_pressure_value)
                    {
                        max_pressure_value = vectsys[i] + vectdias[i];
                        max_pressure_index = i;
                    }

                }          
                cout << "The highest abnormal systolic blood pressures is " << vectsys[max_index]
                << " it's diastolic value is " << vectdias[max_index] << " it's date is "
                << vectday[max_index] << "/" << vectmonth[max_index] << "/" << vectyear[max_index] << "\n";

                // looking at all the values
                if (flag == false)
                {
                    cout << "No measurement was too high!" << "\n";
                }
                // printing the average dialostic value
                average = average/vectdias.size();
                cout << "The average diastolic blood pressure is " << average << "\n";

      cout << "The max blood pressures has a systolic blood pressure of " << vectsys[max_pressure_index ]
      << " and it's diastolic value is " << vectdias[max_pressure_index ] << "\n";          


    }
};
