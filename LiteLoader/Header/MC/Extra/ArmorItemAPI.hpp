//Extra Part For ArmorItem.hpp
#ifdef EXTRA_INCLUDE_PART_ARMORITEM
// Include Headers or Declare Types Here

#else
// Add Member There
public:
class ArmorMaterial {
public:
    ArmorMaterial() = delete;
    ArmorMaterial(ArmorMaterial const&) = delete;
    ArmorMaterial(ArmorMaterial const&&) = delete;
};

#endif
