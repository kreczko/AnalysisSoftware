#ifndef BAT_reco_TTbarSolution_h_
#define BAT_reco_TTbarSolution_h_

#include "TopQuark.h"


namespace BAT {
namespace reco {
class TTbarSolution {
public:
	TTbarSolution();
	virtual ~TTbarSolution();

private:
	std::vector<TopQuarkPtr> tops_;
};

}

}
#endif
