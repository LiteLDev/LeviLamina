//Extra Part For TerrainShaper.hpp
#ifdef EXTRA_INCLUDE_PART_TERRAINSHAPER
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct Point {
    Point() = delete;
    Point(Point const&) = delete;
    Point(Point const&&) = delete;
};

#endif
