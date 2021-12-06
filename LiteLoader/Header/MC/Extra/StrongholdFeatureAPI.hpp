//Extra Part For StrongholdFeature.hpp
#ifdef EXTRA_INCLUDE_PART_STRONGHOLDFEATURE
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct StrongholdResult {
    StrongholdResult() = delete;
    StrongholdResult(StrongholdResult const&) = delete;
    StrongholdResult(StrongholdResult const&&) = delete;
};

#endif
