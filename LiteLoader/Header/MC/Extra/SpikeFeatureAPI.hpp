//Extra Part For SpikeFeature.hpp
#ifdef EXTRA_INCLUDE_PART_SPIKEFEATURE
// Include Headers or Declare Types Here

#else
// Add Member There
public:
class EndSpike {
public:
    EndSpike() = delete;
    EndSpike(EndSpike const&) = delete;
    EndSpike(EndSpike const&&) = delete;
};

#endif
