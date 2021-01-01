#ifndef __HELPER_H_
#define __HELPER_H_




struct DataFrame
{
    std::vector<std::string> regions;
    std::vector<unsigned> population;
    // cases[i] is a vector containing
    // daily cases observed in regions[i]
    // for multiple days.
    std::vector<std::vector<unsigned>> cases;
};

void write_to_csv (std::vector<unsigned int>& global_cases, std::string filename = "./global_cases.csv");
void populate_vector( std::vector<unsigned int>& global_cases);
std::ostream& operator<<(std::ostream& os, std::vector<unsigned> vec)
std::ostream& operator<<(std::ostream& os, std::vector<double> vec)
std::unique_ptr<DataFrame> read_from_csv( std::string filename="../data/ecdc_cases_june.csv")

