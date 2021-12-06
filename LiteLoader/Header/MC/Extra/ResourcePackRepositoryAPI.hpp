//Extra Part For ResourcePackRepository.hpp
#ifdef EXTRA_INCLUDE_PART_RESOURCEPACKREPOSITORY
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct KnownPackContainer {
    KnownPackContainer() = delete;
    KnownPackContainer(KnownPackContainer const&) = delete;
    KnownPackContainer(KnownPackContainer const&&) = delete;
};

#endif
