//Extra Part For Aquifer.hpp
#ifdef EXTRA_INCLUDE_PART_AQUIFER
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct FluidSample {
    FluidSample() = delete;
    FluidSample(FluidSample const&) = delete;
    FluidSample(FluidSample const&&) = delete;
};

#endif
