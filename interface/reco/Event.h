#ifndef BAT_reco_Event_h_
#define BAT_reco_Event_h_
// system includes
#include <vector>
// BOOST
#include <boost/shared_ptr.hpp>
// BAT
#include "../RecoObjects/Lepton.h"
#include "../RecoObjects/Jet.h"
#include "../RecoObjects/MET.h"

namespace BAT {
namespace reco {
class Event {
public:
	Event();
	virtual ~Event();

	const LeptonCollection getLeptons();
	const JetCollection getJets();
	const METPointer getMET();

private:
	LeptonCollection leptons_;
	JetCollection jets_;
	METPointer met_;
};

typedef boost::shared_ptr<Event> EventPtr;

}

}
#endif
