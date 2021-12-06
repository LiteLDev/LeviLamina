//Extra Part For DenyList.hpp
#ifdef EXTRA_INCLUDE_PART_DENYLIST
// Include Headers or Declare Types Here

#else
// Add Member There
public:
enum Duration;
struct Entry {
    Entry() = delete;
    Entry(Entry const&) = delete;
    Entry(Entry const&&) = delete;
};

#endif
