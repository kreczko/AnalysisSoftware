#ifndef BAT_reco_TTbarDecayReco_h_
#define BAT_reco_TTbarDecayReco_h_
#include <vector>

#include "Event.h"
#include "TTbarSolution.h"


namespace BAT {
namespace reco {
class TTbarDecayReco {
public:
	TTbarDecayReco();
	virtual ~TTbarDecayReco();

	virtual void reconstruct(const EventPtr event);


private:
	// something like that, but correct solutions use different particles (jets, met, etc)
	// so in the end, solutions should collapse
	void reconstructLeptonicTops(const EventPtr event);
	void reconstructHadronicTops(const EventPtr event);


	std::vector<TtbarHypothesisPointer> solutions_;
};

}

}
#endif
