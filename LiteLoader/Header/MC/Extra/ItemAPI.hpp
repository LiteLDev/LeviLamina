//Extra Part For Item.hpp
#ifdef EXTRA_INCLUDE_PART_ITEM
// Include Headers or Declare Types Here

#else
// Add Member There
public:
class Tier {
public:
    Tier() = delete;
    Tier(Tier const&) = delete;
    Tier(Tier const&&) = delete;
};

#endif
