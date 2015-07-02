#ifndef BAT_reco_Benchmark_h_
#define BAT_reco_Benchmark_h_

namespace BAT {
namespace reco {

/**
 * Class to measure the performance of different top
 * decay reconstruction methods.
 *
 * It will fill a tree with benchmark information for each
 * configured reconstruction.
 */
class Benchmark {
public:
	Benchmark(std::string name);

	void addReconstruction(TopPairReconstruction reco);
	void reconstruct(const EventPtr event);

private:
	std::string name_;
	std::vector<TopPairReconstruction> reco_modules_;
	// number of solutions per reco module
	std::vector<int> n_solutions_;
	// number of miliseconds spent on reco
	std::vector<double> timings_;
	// counter
};
} //reco
} // BAT
#endif
