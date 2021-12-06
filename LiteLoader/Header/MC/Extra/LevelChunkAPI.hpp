//Extra Part For LevelChunk.hpp
#ifdef EXTRA_INCLUDE_PART_LEVELCHUNK
// Include Headers or Declare Types Here

#else
// Add Member There
public:
enum Finalization;
class Neighbors {
public:
    Neighbors() = delete;
    Neighbors(Neighbors const&) = delete;
    Neighbors(Neighbors const&&) = delete;
};
struct HardcodedSpawningArea {
    HardcodedSpawningArea() = delete;
    HardcodedSpawningArea(HardcodedSpawningArea const&) = delete;
    HardcodedSpawningArea(HardcodedSpawningArea const&&) = delete;
};

#endif
