//Extra Part For ItemStackRequestActionHandler.hpp
#ifdef EXTRA_INCLUDE_PART_ITEMSTACKREQUESTACTIONHANDLER
// Include Headers or Declare Types Here

#else
// Add Member There
public:
enum RemoveType;
struct RequestSlotIdAssignment {
    RequestSlotIdAssignment() = delete;
    RequestSlotIdAssignment(RequestSlotIdAssignment const&) = delete;
    RequestSlotIdAssignment(RequestSlotIdAssignment const&&) = delete;
};
struct ScreenData {
    ScreenData() = delete;
    ScreenData(ScreenData const&) = delete;
    ScreenData(ScreenData const&&) = delete;
};

#endif
