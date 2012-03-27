/*
 * QCDAnalyser.h
 *
 *  Created on: Jun 28, 2011
 *      Author: lkreczko
 */

#ifndef QCDANALYSER_H_
#define QCDANALYSER_H_
#include <boost/shared_ptr.hpp>
#include "../../interface/TopPairEventCandidate.h"
#include "BasicAnalyser.h"
#include "../../interface/HistHelpers/HistogramManager.h"

namespace BAT {

class QCDAnalyser: public BasicAnalyser {
public:
	QCDAnalyser(HistogramManagerPtr histMan, std::string histogramFolder = "QCDStudy");
	~QCDAnalyser();

	void analyse(const EventPtr);
	void createHistograms();

private:
//	boost::shared_ptr<HistogramManager> histMan;

	void ABCDMethod(const TopPairEventCandidatePtr);
	bool passesSelectionWithoutIsolationOrConversionVeto(const TopPairEventCandidatePtr);
};

}

#endif /* QCDANALYSER_H_ */
