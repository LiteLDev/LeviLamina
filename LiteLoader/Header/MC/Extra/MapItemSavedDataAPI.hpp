//Extra Part For MapItemSavedData.hpp
#ifdef EXTRA_INCLUDE_PART_MAPITEMSAVEDDATA
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct ChunkBounds {
    ChunkBounds() = delete;
    ChunkBounds(ChunkBounds const&) = delete;
    ChunkBounds(ChunkBounds const&&) = delete;
};

#endif
