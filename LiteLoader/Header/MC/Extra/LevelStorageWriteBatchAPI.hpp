//Extra Part For LevelStorageWriteBatch.hpp
#ifdef EXTRA_INCLUDE_PART_LEVELSTORAGEWRITEBATCH
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct BatchEntry {
    BatchEntry() = delete;
    BatchEntry(BatchEntry const&) = delete;
    BatchEntry(BatchEntry const&&) = delete;
};

#endif
