//Extra Part For MobEventCommand.hpp
#ifdef EXTRA_INCLUDE_PART_MOBEVENTCOMMAND
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct InitProxy {
    InitProxy() = delete;
    InitProxy(InitProxy const&) = delete;
    InitProxy(InitProxy const&&) = delete;
};

#endif
