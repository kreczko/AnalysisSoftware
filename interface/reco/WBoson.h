#ifndef BAT_reco_WBoson_h_
#define BAT_reco_WBoson_h_
#include "../RecoObjects/MCParticle.h"

namespace BAT {
namespace reco {
class WBoson: public MCParticle {
public:
	WBoson();
	WBoson(double energy, double px, double py, double pz);
	virtual ~WBoson();

private:
	// a top quark decays into a W and a quark (mostly b)
	ParticlePointer p1_;
	ParticlePointer p2_;
};

}

}
#endif
