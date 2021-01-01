#include<iostream>
#include<sstream>
#include<cassert>
#include<fstream>
#include<vector>
#include<array>
#include<random>
#include<string>
#include<memory>
#include<algorithm>
#include<map>
#include<tuple>

void write_to_csv (std::vector<unsigned int>& global_cases, std::string filename = "./data/global_cases.csv");
void populate_vector( std::vector<unsigned int>& global_cases);

std::ostream& operator<<(std::ostream& os, std::vector<unsigned> vec);
std::ostream& operator<<(std::ostream& os, std::vector<double> vec);
std::unique_ptr<DataFrame> read_from_csv( std::string filename="ecdc_cases_june.csv");

std::map<std::string, std::vector<double>> normalize_per_capita(std::unique_ptr<DataFrame>& data_frame);

struct DataFrame
{
    std::vector<std::string> regions;
    std::vector<unsigned> population;
    // cases[i] is a vector containing
    // daily cases observed in regions[i]
    // for multiple days.
    std::vector<std::vector<unsigned>> cases;
};


