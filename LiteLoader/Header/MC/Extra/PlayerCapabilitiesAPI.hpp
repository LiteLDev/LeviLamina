//Extra Part For PlayerCapabilities.hpp
#ifdef EXTRA_INCLUDE_PART_PLAYERCAPABILITIES
// Include Headers or Declare Types Here

#else
// Add Member There
struct ISharedController {
    ISharedController() = delete;
    ISharedController(ISharedController const&) = delete;
    ISharedController(ISharedController const&&) = delete;
};

#endif
