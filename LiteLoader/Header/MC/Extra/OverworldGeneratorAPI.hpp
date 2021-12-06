//Extra Part For OverworldGenerator.hpp
#ifdef EXTRA_INCLUDE_PART_OVERWORLDGENERATOR
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct ThreadData {
    ThreadData() = delete;
    ThreadData(ThreadData const&) = delete;
    ThreadData(ThreadData const&&) = delete;
};

#endif
