//Extra Part For BlockSerializationUtils.hpp
#ifdef EXTRA_INCLUDE_PART_BLOCKSERIALIZATIONUTILS
// Include Headers or Declare Types Here

#else
// Add Member There
struct NbtToBlockCache {
    NbtToBlockCache() = delete;
    NbtToBlockCache(NbtToBlockCache const&) = delete;
    NbtToBlockCache(NbtToBlockCache const&&) = delete;
};
enum NBTState;

#endif
