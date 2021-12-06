//Extra Part For BlockVolume.hpp
#ifdef EXTRA_INCLUDE_PART_BLOCKVOLUME
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct BlockVolumeIter {
    BlockVolumeIter() = delete;
    BlockVolumeIter(BlockVolumeIter const&) = delete;
    BlockVolumeIter(BlockVolumeIter const&&) = delete;
};

#endif
