//Extra Part For ChunkLocalNoiseCache.hpp
#ifdef EXTRA_INCLUDE_PART_CHUNKLOCALNOISECACHE
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct CacheEntry {
    CacheEntry() = delete;
    CacheEntry(CacheEntry const&) = delete;
    CacheEntry(CacheEntry const&&) = delete;
};

#endif
