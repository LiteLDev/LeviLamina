//Extra Part For AABB.hpp
#ifdef EXTRA_INCLUDE_PART_AABB
// Include Headers or Declare Types Here

#else
// Add Member There
public:
    Vec3 p1{};
    Vec3 p2{};

    AABB(class Vec3 _p1, class Vec3 _p2) {
        p1 = _p1;
        p2 = _p2;
    }
#endif
