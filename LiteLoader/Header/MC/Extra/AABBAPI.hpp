//Extra Part For AABB.hpp
#ifdef EXTRA_INCLUDE_PART_AABB
// Include Headers or Declare Types Here

#else
// Add Member There
public:
    Vec3 pointA {};
    Vec3 pointB {};

    AABB(class Vec3 pointA, class Vec3 pointB)
        :pointA(pointA), pointB(pointB)
    { }
#endif
