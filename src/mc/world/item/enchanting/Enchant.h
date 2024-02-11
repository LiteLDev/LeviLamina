#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Enchant {
public:
    // Enchant inner types define
    enum class Frequency : int {
        Common   = 30,
        Uncommon = 10,
        Rare     = 3,
        VeryRare = 1,
    };

    enum class Slot : int {
        All           = -1,
        None          = 0,
        ArmorHead     = 1 << 0,
        ArmorTorso    = 1 << 1,
        ArmorFeet     = 1 << 2,
        ArmorLegs     = 1 << 3,
        Sword         = 1 << 4,
        Bow           = 1 << 5,
        Hoe           = 1 << 6,
        Shears        = 1 << 7,
        Flintsteel    = 1 << 8,
        Axe           = 1 << 9,
        Pickaxe       = 1 << 10,
        Shovel        = 1 << 11,
        FishingRod    = 1 << 12,
        CarrotStick   = 1 << 13,
        Elytra        = 1 << 14,
        Spear         = 1 << 15,
        Crossbow      = 1 << 16,
        Shield        = 1 << 17,
        CosmeticHead  = 1 << 18,
        Compass       = 1 << 19,
        MushroomStick = 1 << 20,

        Armors   = ArmorHead | ArmorTorso | ArmorFeet | ArmorLegs,
        Diggings = Hoe | Axe | Pickaxe | Shovel,
        Tools    = Hoe | Shears | Flintsteel | Shield,
    };

    enum class Type : schar {
        ArmorAll            = 0x0,
        ArmorFire           = 0x1,
        ArmorFall           = 0x2,
        ArmorExplosive      = 0x3,
        ArmorProjectile     = 0x4,
        ArmorThorns         = 0x5,
        WaterBreath         = 0x6,
        WaterSpeed          = 0x7,
        WaterAffinity       = 0x8,
        WeaponDamage        = 0x9,
        WeaponUndead        = 0xA,
        WeaponArthropod     = 0xB,
        WeaponKnockback     = 0xC,
        WeaponFire          = 0xD,
        WeaponLoot          = 0xE,
        MiningEfficiency    = 0xF,
        MiningSilkTouch     = 0x10,
        MiningDurability    = 0x11,
        MiningLoot          = 0x12,
        BowDamage           = 0x13,
        BowKnockback        = 0x14,
        BowFire             = 0x15,
        BowInfinity         = 0x16,
        FishingLoot         = 0x17,
        FishingLure         = 0x18,
        FrostWalker         = 0x19,
        Mending             = 0x1A,
        CurseBinding        = 0x1B,
        CurseVanishing      = 0x1C,
        TridentImpaling     = 0x1D,
        TridentRiptide      = 0x1E,
        TridentLoyalty      = 0x1F,
        TridentChanneling   = 0x20,
        CrossbowMultishot   = 0x21,
        CrossbowPiercing    = 0x22,
        CrossbowQuickCharge = 0x23,
        SoulSpeed           = 0x24,
        SwiftSneak          = 0x25,
        Count               = 0x26,
        Invalid             = 0x27,
    };

    enum class Activation : int {
        Equipped = 0x0,
        Held     = 0x1,
        Self     = 0x2,
        Count    = 0x3,
        Invalid  = 0x4,
    };

    enum class CompatibilityID : int {
        NonConflict  = 0x0,
        Damage       = 0x1,
        Gathering    = 0x2,
        Protection   = 0x3,
        Froststrider = 0x4,
        Mendfinity   = 0x5,
        Loyalriptide = 0x6,
    };

public:
    // prevent constructor by default
    Enchant& operator=(Enchant const&);
    Enchant(Enchant const&);
    Enchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Enchant@@UEAA@XZ
    virtual ~Enchant();

    // vIndex: 1, symbol: ?isCompatibleWith@Enchant@@UEBA_NW4Type@1@@Z
    virtual bool isCompatibleWith(::Enchant::Type type) const;

    // vIndex: 2, symbol: ?getMinCost@Enchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@Enchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 4, symbol: ?getMinLevel@Enchant@@UEBAHXZ
    virtual int getMinLevel() const;

    // vIndex: 5, symbol: ?getMaxLevel@Enchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 6, symbol: ?getDamageProtection@Enchant@@UEBAHHAEBVActorDamageSource@@@Z
    virtual int getDamageProtection(int level, class ActorDamageSource const& source) const;

    // vIndex: 7, symbol: ?getDamageBonus@Enchant@@UEBAMHAEBVActor@@@Z
    virtual float getDamageBonus(int level, class Actor const& target) const;

    // vIndex: 8, symbol: ?doPostAttack@Enchant@@UEBAXAEAVActor@@0H@Z
    virtual void doPostAttack(class Actor& attacker, class Actor& victim, int level) const;

    // vIndex: 9, symbol: ?doPostHurt@Enchant@@UEBAXAEAVItemInstance@@AEAVActor@@1H@Z
    virtual void doPostHurt(class ItemInstance& item, class Actor& victim, class Actor& attacker, int level) const;

    // vIndex: 10, symbol: ?isMeleeDamageEnchant@Enchant@@UEBA_NXZ
    virtual bool isMeleeDamageEnchant() const;

    // vIndex: 11, symbol: ?isProtectionEnchant@Enchant@@UEBA_NXZ
    virtual bool isProtectionEnchant() const;

    // vIndex: 12, symbol: ?isTreasureOnly@Enchant@@UEBA_NXZ
    virtual bool isTreasureOnly() const;

    // vIndex: 13, symbol: ?isDiscoverable@Enchant@@UEBA_NXZ
    virtual bool isDiscoverable() const;

    // vIndex: 14, symbol: ?_isValidEnchantmentTypeForCategory@Enchant@@EEBA_NW4Type@1@@Z
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;

    // symbol: ??0Enchant@@QEAA@W4Type@0@W4Frequency@0@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2HH@Z
    MCAPI Enchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots
    );

    // symbol: ??0Enchant@@QEAA@W4Type@0@W4Frequency@0@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2HH_N@Z
    MCAPI Enchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots,
        bool                 isLootable
    );

    // symbol: ?getDescriptionId@Enchant@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getDescriptionId() const;

    // symbol: ?getEnchantType@Enchant@@QEBA?AW4Type@1@XZ
    MCAPI ::Enchant::Type getEnchantType() const;

    // symbol: ?getStringId@Enchant@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getStringId() const;

    // symbol: ?isAvailable@Enchant@@QEBA_NXZ
    MCAPI bool isAvailable() const;

    // symbol: ?isDisabled@Enchant@@QEBA_NXZ
    MCAPI bool isDisabled() const;

    // symbol: ?enchantSlotFromString@Enchant@@SA?AW4Slot@1@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI static ::Enchant::Slot enchantSlotFromString(std::string_view str);

    // symbol: ?getEnchant@Enchant@@SAPEBV1@AEBW4Type@1@@Z
    MCAPI static class Enchant const* getEnchant(::Enchant::Type const& type);

    // symbol: ?getEnchantFromName@Enchant@@SAPEBV1@AEBVHashedString@@@Z
    MCAPI static class Enchant const* getEnchantFromName(class HashedString const& name);

    // symbol: ?getEnchantTypeFromName@Enchant@@SA?AW4Type@1@AEBVHashedString@@@Z
    MCAPI static ::Enchant::Type getEnchantTypeFromName(class HashedString const& name);

    // symbol: ?initEnchants@Enchant@@SAXXZ
    MCAPI static void initEnchants();

    // symbol: ?shutdownEnchants@Enchant@@SAXXZ
    MCAPI static void shutdownEnchants();

    // symbol:
    // ?stringFromEnchantSlot@Enchant@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBW4Slot@1@@Z
    MCAPI static std::string stringFromEnchantSlot(::Enchant::Slot const&);

    // symbol:
    // ?mEnchantNameToType@Enchant@@2V?$unordered_map@VHashedString@@W4Type@Enchant@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@W4Type@Enchant@@@std@@@5@@std@@A
    MCAPI static std::unordered_map<class HashedString, ::Enchant::Type> mEnchantNameToType;

    // symbol:
    // ?mEnchantSlotTypeEnumToStringMap@Enchant@@2V?$unordered_map@W4Slot@Enchant@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEnchantSlotEnumHasher@@U?$equal_to@W4Slot@Enchant@@@4@V?$allocator@U?$pair@$$CBW4Slot@Enchant@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@4@@std@@A
    MCAPI static std::unordered_map<::Enchant::Slot, std::string, struct EnchantSlotEnumHasher>
        mEnchantSlotTypeEnumToStringMap;

    // symbol:
    // ?mEnchantSlotTypeNameToEnumMap@Enchant@@2V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Slot@Enchant@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Slot@Enchant@@@std@@@2@@std@@A
    MCAPI static std::unordered_map<std::string, ::Enchant::Slot> mEnchantSlotTypeNameToEnumMap;

    // symbol:
    // ?mEnchants@Enchant@@2V?$vector@V?$unique_ptr@VEnchant@@U?$default_delete@VEnchant@@@std@@@std@@V?$allocator@V?$unique_ptr@VEnchant@@U?$default_delete@VEnchant@@@std@@@std@@@2@@std@@A
    MCAPI static std::vector<std::unique_ptr<class Enchant>> mEnchants;

    // NOLINTEND
};
