//Extra Part For LevelChunkBlendingAttenuator.hpp
#ifdef EXTRA_INCLUDE_PART_LEVELCHUNKBLENDINGATTENUATOR
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct HeightAttenuationData {
    HeightAttenuationData() = delete;
    HeightAttenuationData(HeightAttenuationData const&) = delete;
    HeightAttenuationData(HeightAttenuationData const&&) = delete;
};
struct CornerDepthData {
    CornerDepthData() = delete;
    CornerDepthData(CornerDepthData const&) = delete;
    CornerDepthData(CornerDepthData const&&) = delete;
};

#endif
