#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Enchant {
public:
    // Enchant inner types declare
    // clang-format off

    // clang-format on

    // Enchant inner types define
    enum class Frequency {};

    enum class Slot {};

    enum class Type {};

public:
    // prevent constructor by default
    Enchant& operator=(Enchant const&) = delete;
    Enchant(Enchant const&)            = delete;
    Enchant()                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?isCompatibleWith\@Enchant\@\@UEBA_NW4Type\@1\@\@Z
     */
    virtual bool isCompatibleWith(enum class Enchant::Type) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getMinCost\@Enchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getMaxCost\@Enchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getMinLevel\@Enchant\@\@UEBAHXZ
     */
    virtual int getMinLevel() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getMaxLevel\@Enchant\@\@UEBAHXZ
     */
    virtual int getMaxLevel() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?getDamageProtection\@Enchant\@\@UEBAHHAEBVActorDamageSource\@\@\@Z
     */
    virtual int getDamageProtection(int, class ActorDamageSource const&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getDamageBonus\@Enchant\@\@UEBAMHAEBVActor\@\@\@Z
     */
    virtual float getDamageBonus(int, class Actor const&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?doPostAttack\@Enchant\@\@UEBAXAEAVActor\@\@0H\@Z
     */
    virtual void doPostAttack(class Actor&, class Actor&, int) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?doPostHurt\@Enchant\@\@UEBAXAEAVItemInstance\@\@AEAVActor\@\@1H\@Z
     */
    virtual void doPostHurt(class ItemInstance&, class Actor&, class Actor&, int) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13(); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?_isValidEnchantmentTypeForCategory\@Enchant\@\@EEBA_NW4Type\@1\@\@Z
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum class Enchant::Type) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCHANT
    /**
     * @symbol ?isDiscoverable\@Enchant\@\@UEBA_NXZ
     */
    MCVAPI bool isDiscoverable() const; // NOLINT
    /**
     * @symbol ?isMeleeDamageEnchant\@Enchant\@\@UEBA_NXZ
     */
    MCVAPI bool isMeleeDamageEnchant() const; // NOLINT
    /**
     * @symbol ?isProtectionEnchant\@Enchant\@\@UEBA_NXZ
     */
    MCVAPI bool isProtectionEnchant() const; // NOLINT
    /**
     * @symbol ?isTreasureOnly\@Enchant\@\@UEBA_NXZ
     */
    MCVAPI bool isTreasureOnly() const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Enchant(); // NOLINT
#endif
    /**
     * @symbol
     * ??0Enchant\@\@QEAA\@W4Type\@0\@W4Frequency\@0\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@2HH\@Z
     */
    MCAPI Enchant(
        enum class Enchant::Type,
        enum class Enchant::Frequency,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        int,
        int
    ); // NOLINT
    /**
     * @symbol
     * ??0Enchant\@\@QEAA\@W4Type\@0\@W4Frequency\@0\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@2HH_N\@Z
     */
    MCAPI Enchant(
        enum class Enchant::Type,
        enum class Enchant::Frequency,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        int,
        int,
        bool
    ); // NOLINT
    /**
     * @symbol ?canEnchant\@Enchant\@\@QEBA_NH_N\@Z
     */
    MCAPI bool canEnchant(int, bool) const; // NOLINT
    /**
     * @symbol
     * ?getDescription\@Enchant\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescription() const; // NOLINT
    /**
     * @symbol
     * ?getDescriptionId\@Enchant\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescriptionId() const; // NOLINT
    /**
     * @symbol ?getEnchantType\@Enchant\@\@QEBA?AW4Type\@1\@XZ
     */
    MCAPI enum class Enchant::Type getEnchantType() const; // NOLINT
    /**
     * @symbol ?getFrequency\@Enchant\@\@QEBA?AW4Frequency\@1\@XZ
     */
    MCAPI enum class Enchant::Frequency getFrequency() const; // NOLINT
    /**
     * @symbol ?getStringId\@Enchant\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const& getStringId() const; // NOLINT
    /**
     * @symbol ?isAvailable\@Enchant\@\@QEBA_NXZ
     */
    MCAPI bool isAvailable() const; // NOLINT
    /**
     * @symbol ?isDisabled\@Enchant\@\@QEBA_NXZ
     */
    MCAPI bool isDisabled() const; // NOLINT
    /**
     * @symbol ?isLootable\@Enchant\@\@QEBA_NXZ
     */
    MCAPI bool isLootable() const; // NOLINT
    /**
     * @symbol
     * ?enchantSlotFromString\@Enchant\@\@SA?AW4Slot\@1\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI static enum class Enchant::Slot
        enchantSlotFromString(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol ?getEnchant\@Enchant\@\@SAPEBV1\@AEBW4Type\@1\@\@Z
     */
    MCAPI static class Enchant const* getEnchant(enum class Enchant::Type const&); // NOLINT
    /**
     * @symbol ?getEnchantTypeFromName\@Enchant\@\@SA?AW4Type\@1\@AEBVHashedString\@\@\@Z
     */
    MCAPI static enum class Enchant::Type getEnchantTypeFromName(class HashedString const&); // NOLINT
    /**
     * @symbol ?initEnchants\@Enchant\@\@SAXXZ
     */
    MCAPI static void initEnchants(); // NOLINT
    /**
     * @symbol ?shutdownEnchants\@Enchant\@\@SAXXZ
     */
    MCAPI static void shutdownEnchants(); // NOLINT
    /**
     * @symbol
     * ?stringFromEnchantSlot\@Enchant\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBW4Slot\@1\@\@Z
     */
    MCAPI static std::string stringFromEnchantSlot(enum class Enchant::Slot const&); // NOLINT
    /**
     * @symbol
     * ?mEnchantNameToType\@Enchant\@\@2V?$unordered_map\@VHashedString\@\@W4Type\@Enchant\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@5\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@W4Type\@Enchant\@\@\@std\@\@\@5\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        class HashedString,
        enum class Enchant::Type,
        struct std::hash<class HashedString>,
        struct std::equal_to<class HashedString>,
        class std::allocator<struct std::pair<class HashedString const, enum class Enchant::Type>>>
        mEnchantNameToType; // NOLINT
    /**
     * @symbol
     * ?mEnchantSlotTypeEnumToStringMap\@Enchant\@\@2V?$unordered_map\@W4Slot\@Enchant\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UEnchantSlotEnumHasher\@\@U?$equal_to\@W4Slot\@Enchant\@\@\@4\@V?$allocator\@U?$pair\@$$CBW4Slot\@Enchant\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@4\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        enum class Enchant::Slot,
        std::string,
        struct EnchantSlotEnumHasher,
        struct std::equal_to<enum class Enchant::Slot>,
        class std::allocator<struct std::pair<enum class Enchant::Slot const, std::string>>>
        mEnchantSlotTypeEnumToStringMap; // NOLINT
    /**
     * @symbol
     * ?mEnchantSlotTypeNameToEnumMap\@Enchant\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Slot\@Enchant\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Slot\@Enchant\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        std::string,
        enum class Enchant::Slot,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<std::string const, enum class Enchant::Slot>>>
        mEnchantSlotTypeNameToEnumMap; // NOLINT
    /**
     * @symbol
     * ?mEnchants\@Enchant\@\@2V?$vector\@V?$unique_ptr\@VEnchant\@\@U?$default_delete\@VEnchant\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VEnchant\@\@U?$default_delete\@VEnchant\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::unique_ptr<class Enchant>> mEnchants; // NOLINT
};
