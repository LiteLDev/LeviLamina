//Extra Part For FeedItem.hpp
#ifdef EXTRA_INCLUDE_PART_FEEDITEM
// Include Headers or Declare Types Here

#else
// Add Member There
struct Effect {
    Effect() = delete;
    Effect(Effect const&) = delete;
    Effect(Effect const&&) = delete;
};

#endif
