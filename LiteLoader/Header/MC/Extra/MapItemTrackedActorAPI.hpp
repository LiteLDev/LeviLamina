//Extra Part For MapItemTrackedActor.hpp
#ifdef EXTRA_INCLUDE_PART_MAPITEMTRACKEDACTOR
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct UniqueId {
    UniqueId() = delete;
    UniqueId(UniqueId const&) = delete;
    UniqueId(UniqueId const&&) = delete;
};

#endif
