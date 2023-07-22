/**
 * @file  Enchant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Enchant.
 *
 */
class Enchant {

#define AFTER_EXTRA
// Add Member There
public:
enum class Frequency
{
    VeryRare = 1,
    Rare = 3,
    Uncommon = 10,
    Common = 30
};

enum class Slot
{
    ALL = -1,
    NONE = 0,
    ARMOR_HEAD = 1,
    ARMOR_TORSO = 2,
    ARMOR_FEET = 4,
    ARMOR_LEGS = 8,
    G_ARMOR = 15,
    SWORD = 16,
    BOW = 32,
    HOE = 64,
    SHEARS = 128,
    FLINTSTEEL = 256,
    AXE = 512,
    PICKAXE = 1024,
    SHOVEL = 2048,
    G_DIGGING = 3648,
    FISHING_ROD = 4096,
    CARROT_STICK = 8192,
    ELYTRA = 16384,
    SPEAR = 32768,
    CROSSBOW = 65536,
    SHIELD = 131072,
    G_TOOL = 131520,
    COSMETIC_HEAD = 262144,
    COMPASS = 524288,
    MUSHROOM_STICK = 1048576
};

enum class Type : uint8_t
{
    protection = 0,
    fire_protection = 1,
    feather_falling = 2,
    blast_protection = 3,
    projectile_protection = 4,
    thorns = 5,
    respiration = 6,
    depth_strider = 7,
    aqua_affinity = 8,
    sharpness = 9,
    smite = 10,
    bane_of_arthropods = 11,
    knockback = 12,
    fire_aspect = 13,
    looting = 14,
    efficiency = 15,
    silk_touch = 16,
    unbreaking = 17,
    fortune = 18,
    power = 19,
    punch = 20,
    flame = 21,
    infinity = 22,
    luck_of_the_sea = 23,
    lure = 24,
    frost_walker = 25,
    mending = 26,
    binding = 27,
    vanishing = 28,
    impaling = 29,
    riptide = 30,
    loyalty = 31,
    channeling = 32,
    multishot = 33,
    piercing = 34,
    quick_charge = 35,
    soul_speed = 36,
    num_enchantments = 37,
    invalid_enchantment = 38
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANT
public:
    class Enchant& operator=(class Enchant const &) = delete;
    Enchant(class Enchant const &) = delete;
    Enchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~Enchant();
    /**
     * @vftbl  1
     * @symbol  ?isCompatibleWith\@Enchant\@\@UEBA_NW4Type\@1\@\@Z
     */
    virtual bool isCompatibleWith(enum class Enchant::Type) const;
    /**
     * @vftbl  2
     * @symbol  ?getMinCost\@Enchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl  3
     * @symbol  ?getMaxCost\@Enchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  4
     * @symbol  ?getMinLevel\@Enchant\@\@UEBAHXZ
     */
    virtual int getMinLevel() const;
    /**
     * @vftbl  5
     * @symbol  ?getMaxLevel\@Enchant\@\@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @vftbl  6
     * @symbol  ?getDamageProtection\@Enchant\@\@UEBAHHAEBVActorDamageSource\@\@\@Z
     */
    virtual int getDamageProtection(int, class ActorDamageSource const &) const;
    /**
     * @vftbl  7
     * @symbol  ?getDamageBonus\@Enchant\@\@UEBAMHAEBVActor\@\@\@Z
     */
    virtual float getDamageBonus(int, class Actor const &) const;
    /**
     * @vftbl  8
     * @symbol  ?doPostAttack\@Enchant\@\@UEBAXAEAVActor\@\@0H\@Z
     */
    virtual void doPostAttack(class Actor &, class Actor &, int) const;
    /**
     * @vftbl  9
     * @symbol  ?doPostHurt\@Enchant\@\@UEBAXAEAVItemInstance\@\@AEAVActor\@\@1H\@Z
     */
    virtual void doPostHurt(class ItemInstance &, class Actor &, class Actor &, int) const;
    /**
     * @vftbl  10
     * @symbol  __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol  __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol  ?_isValidEnchantmentTypeForCategory\@Enchant\@\@EEBA_NW4Type\@1\@\@Z
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum class Enchant::Type) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCHANT
    /**
     * @symbol  ?isDiscoverable\@Enchant\@\@UEBA_NXZ
     */
    MCVAPI bool isDiscoverable() const;
    /**
     * @symbol  ?isMeleeDamageEnchant\@Enchant\@\@UEBA_NXZ
     */
    MCVAPI bool isMeleeDamageEnchant() const;
    /**
     * @symbol  ?isProtectionEnchant\@Enchant\@\@UEBA_NXZ
     */
    MCVAPI bool isProtectionEnchant() const;
    /**
     * @symbol  ?isTreasureOnly\@Enchant\@\@UEBA_NXZ
     */
    MCVAPI bool isTreasureOnly() const;
#endif
    /**
     * @symbol  ??0Enchant\@\@QEAA\@W4Type\@0\@W4Frequency\@0\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@2HH_N\@Z
     */
    MCAPI Enchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int, bool);
    /**
     * @symbol  ??0Enchant\@\@QEAA\@W4Type\@0\@W4Frequency\@0\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@2HH\@Z
     */
    MCAPI Enchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @symbol  ?canEnchant\@Enchant\@\@QEBA_NH_N\@Z
     */
    MCAPI bool canEnchant(int, bool) const;
    /**
     * @symbol  ?getDescription\@Enchant\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescription() const;
    /**
     * @symbol  ?getDescriptionId\@Enchant\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescriptionId() const;
    /**
     * @symbol  ?getEnchantType\@Enchant\@\@QEBA?AW4Type\@1\@XZ
     */
    MCAPI enum class Enchant::Type getEnchantType() const;
    /**
     * @symbol  ?getFrequency\@Enchant\@\@QEBA?AW4Frequency\@1\@XZ
     */
    MCAPI enum class Enchant::Frequency getFrequency() const;
    /**
     * @symbol  ?getStringId\@Enchant\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getStringId() const;
    /**
     * @symbol  ?isAvailable\@Enchant\@\@QEBA_NXZ
     */
    MCAPI bool isAvailable() const;
    /**
     * @symbol  ?isDisabled\@Enchant\@\@QEBA_NXZ
     */
    MCAPI bool isDisabled() const;
    /**
     * @symbol  ?isLootable\@Enchant\@\@QEBA_NXZ
     */
    MCAPI bool isLootable() const;
    /**
     * @symbol  ?enchantSlotFromString\@Enchant\@\@SA?AW4Slot\@1\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI static enum class Enchant::Slot enchantSlotFromString(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?getEnchant\@Enchant\@\@SAPEBV1\@AEBW4Type\@1\@\@Z
     */
    MCAPI static class Enchant const * getEnchant(enum class Enchant::Type const &);
    /**
     * @symbol  ?initEnchants\@Enchant\@\@SAXXZ
     */
    MCAPI static void initEnchants();
    /**
     * @symbol  ?mEnchantNameToType\@Enchant\@\@2V?$unordered_map\@VHashedString\@\@W4Type\@Enchant\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@5\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@W4Type\@Enchant\@\@\@std\@\@\@5\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<class HashedString, enum class Enchant::Type, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, enum class Enchant::Type>>> mEnchantNameToType;
    /**
     * @symbol  ?mEnchantSlotTypeEnumToStringMap\@Enchant\@\@2V?$unordered_map\@W4Slot\@Enchant\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UEnchantSlotEnumHasher\@\@U?$equal_to\@W4Slot\@Enchant\@\@\@4\@V?$allocator\@U?$pair\@$$CBW4Slot\@Enchant\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@4\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<enum class Enchant::Slot, std::string, struct EnchantSlotEnumHasher, struct std::equal_to<enum class Enchant::Slot>, class std::allocator<struct std::pair<enum class Enchant::Slot const, std::string>>> mEnchantSlotTypeEnumToStringMap;
    /**
     * @symbol  ?mEnchantSlotTypeNameToEnumMap\@Enchant\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Slot\@Enchant\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Slot\@Enchant\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<std::string, enum class Enchant::Slot, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum class Enchant::Slot>>> mEnchantSlotTypeNameToEnumMap;
    /**
     * @symbol  ?mEnchants\@Enchant\@\@2V?$vector\@V?$unique_ptr\@VEnchant\@\@U?$default_delete\@VEnchant\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VEnchant\@\@U?$default_delete\@VEnchant\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::unique_ptr<class Enchant>> mEnchants;
    /**
     * @symbol  ?shutdownEnchants\@Enchant\@\@SAXXZ
     */
    MCAPI static void shutdownEnchants();
    /**
     * @symbol  ?stringFromEnchantSlot\@Enchant\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBW4Slot\@1\@\@Z
     */
    MCAPI static std::string stringFromEnchantSlot(enum class Enchant::Slot const &);

};