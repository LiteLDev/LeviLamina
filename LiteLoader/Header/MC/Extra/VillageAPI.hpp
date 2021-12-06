//Extra Part For Village.hpp
#ifdef EXTRA_INCLUDE_PART_VILLAGE
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct DwellerData {
    DwellerData() = delete;
    DwellerData(DwellerData const&) = delete;
    DwellerData(DwellerData const&&) = delete;
};

#endif
