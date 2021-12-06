//Extra Part For VanillaWorldSystems.hpp
#ifdef EXTRA_INCLUDE_PART_VANILLAWORLDSYSTEMS
// Include Headers or Declare Types Here

#else
// Add Member There
class Impl {
public:
    Impl() = delete;
    Impl(Impl const&) = delete;
    Impl(Impl const&&) = delete;
};

#endif
