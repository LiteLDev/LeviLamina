//Extra Part For ArmorStand.hpp
#ifdef EXTRA_INCLUDE_PART_ARMORSTAND
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct Pose {
    Pose() = delete;
    Pose(Pose const&) = delete;
    Pose(Pose const&&) = delete;
};

#endif
