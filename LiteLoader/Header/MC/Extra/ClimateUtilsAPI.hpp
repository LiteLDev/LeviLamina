//Extra Part For ClimateUtils.hpp
#ifdef EXTRA_INCLUDE_PART_CLIMATEUTILS
// Include Headers or Declare Types Here

#else
// Add Member There
struct TargetSpace {
    TargetSpace() = delete;
    TargetSpace(TargetSpace const&) = delete;
    TargetSpace(TargetSpace const&&) = delete;
};
struct Parameter {
    Parameter() = delete;
    Parameter(Parameter const&) = delete;
    Parameter(Parameter const&&) = delete;
};

#endif
