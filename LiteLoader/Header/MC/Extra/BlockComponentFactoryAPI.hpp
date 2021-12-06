//Extra Part For BlockComponentFactory.hpp
#ifdef EXTRA_INCLUDE_PART_BLOCKCOMPONENTFACTORY
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct Constructor {
    Constructor() = delete;
    Constructor(Constructor const&) = delete;
    Constructor(Constructor const&&) = delete;
};

#endif
