//Extra Part For DripstoneUtils.hpp
#ifdef EXTRA_INCLUDE_PART_DRIPSTONEUTILS
// Include Headers or Declare Types Here

#else
// Add Member There
struct PointedDripstoneBasePos {
    PointedDripstoneBasePos() = delete;
    PointedDripstoneBasePos(PointedDripstoneBasePos const&) = delete;
    PointedDripstoneBasePos(PointedDripstoneBasePos const&&) = delete;
};

#endif
