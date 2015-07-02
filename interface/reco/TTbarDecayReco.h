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
	std::vector<TtbarHypothesisPointer> solutions_;
};

}

}
#endif
