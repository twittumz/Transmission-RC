#pragma once
#include<iostream>
#include<vector>
#include<boost/property_tree/ptree.hpp>
#include<boost/property_tree/json_parser.hpp>
#include<boost/foreach.hpp>
#include"TransmissionRC.h"
namespace TransmissionRC{


std::vector<TransmissionRC::rcTorrent> & getTorrents();



}
