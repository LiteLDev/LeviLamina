//Extra Part For VanillaStates.hpp
#ifdef EXTRA_INCLUDE_PART_VANILLASTATES
// Include Headers or Declare Types Here

#else
// Add Member There
struct CachedItemStateMapPtr {
    CachedItemStateMapPtr() = delete;
    CachedItemStateMapPtr(CachedItemStateMapPtr const&) = delete;
    CachedItemStateMapPtr(CachedItemStateMapPtr const&&) = delete;
};

#endif
