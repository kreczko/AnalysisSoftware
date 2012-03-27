/*
 * BasicAnalyser.cpp
 *
 *  Created on: 3 Jul 2011
 *      Author: kreczko
 */

#include "../../interface/Analysers/BasicAnalyser.h"

namespace BAT {
BasicAnalyser::BasicAnalyser(HistogramManagerPtr histMan, std::string histogramFolder):
        histMan_(histMan),
        histogramFolder_(histogramFolder){

}

BasicAnalyser::~BasicAnalyser(){

}
}
