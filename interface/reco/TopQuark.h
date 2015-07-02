#ifndef BAT_reco_TopQuark_h_
#define BAT_reco_TopQuark_h_
#include "../RecoObjects/MCParticle.h"

namespace BAT {
namespace reco {
class TopQuark: public MCParticle {
public:
	TopQuark();
	virtual ~TopQuark();

private:
	// a top quark decays into a W and a quark (mostly b)
	ParticlePointer w_boson_;
	ParticlePointer quark_;
};

typedef boost::shared_ptr<TopQuark> TopQuarkPtr;

}

}
#endif
