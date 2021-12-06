//Extra Part For PostprocessingManager.hpp
#ifdef EXTRA_INCLUDE_PART_POSTPROCESSINGMANAGER
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct LockedChunk {
    LockedChunk() = delete;
    LockedChunk(LockedChunk const&) = delete;
    LockedChunk(LockedChunk const&&) = delete;
};

#endif
