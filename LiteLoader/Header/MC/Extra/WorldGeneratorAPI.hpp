//Extra Part For WorldGenerator.hpp
#ifdef EXTRA_INCLUDE_PART_WORLDGENERATOR
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct BlockVolumeDimensions {
    BlockVolumeDimensions() = delete;
    BlockVolumeDimensions(BlockVolumeDimensions const&) = delete;
    BlockVolumeDimensions(BlockVolumeDimensions const&&) = delete;
};

#endif
