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
        WindBurst           = 0x26,
        Density             = 0x27,
        Breach              = 0x28,
        NumEnchantments     = 0x29,
        InvalidEnchantment  = 0x2A,
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
    // vIndex: 0
    virtual ~Enchant();

    // vIndex: 1
    virtual bool isCompatibleWith(::Enchant::Type type) const;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 4
    virtual int getMinLevel() const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // vIndex: 6
    virtual int getDamageProtection(int level, class ActorDamageSource const& source) const;

    // vIndex: 7
    virtual float getAfterBreachArmorFraction(int, float) const;

    // vIndex: 8
    virtual float getDamageBonus(int, class Actor const&, class Actor const&) const;

    // vIndex: 9
    virtual void doPostAttack(class Actor& attacker, class Actor& victim, int level) const;

    // vIndex: 10
    virtual void doPostItemHurtActor(class Actor&, class Actor&, int) const;

    // vIndex: 11
    virtual void doPostHurt(class ItemInstance& item, class Actor& victim, class Actor& attacker, int level) const;

    // vIndex: 12
    virtual bool isMeleeDamageEnchant() const;

    // vIndex: 13
    virtual bool isProtectionEnchant() const;

    // vIndex: 14
    virtual bool isTreasureOnly() const;

    // vIndex: 15
    virtual bool isDiscoverable() const;

    // vIndex: 16
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;

    MCAPI Enchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots
    );

    MCAPI Enchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots,
        bool                 isLootable
    );

    MCAPI bool canEnchant(int slot, bool allowNonVanilla) const;

    MCAPI std::string getDescription() const;

    MCAPI std::string getDescriptionId() const;

    MCAPI ::Enchant::Type getEnchantType() const;

    MCAPI ::Enchant::Frequency getFrequency() const;

    MCAPI class HashedString const& getStringId() const;

    MCAPI bool isAvailable() const;

    MCAPI bool isDisabled() const;

    MCAPI bool isLootable() const;

    MCAPI static ::Enchant::Slot enchantSlotFromString(std::string_view str);

    MCAPI static class Enchant const* getEnchant(::Enchant::Type const& type);

    MCAPI static class Enchant const* getEnchantFromName(class HashedString const& name);

    MCAPI static ::Enchant::Type getEnchantTypeFromName(class HashedString const& name);

    MCAPI static void initEnchants();

    MCAPI static void shutdownEnchants();

    MCAPI static std::string stringFromEnchantSlot(::Enchant::Slot const& enchantSlot);

    MCAPI static std::unordered_map<class HashedString, ::Enchant::Type> mEnchantNameToType;

    MCAPI static std::unordered_map<::Enchant::Slot, std::string, struct EnchantSlotEnumHasher>
        mEnchantSlotTypeEnumToStringMap;

    MCAPI static std::unordered_map<std::string, ::Enchant::Slot> mEnchantSlotTypeNameToEnumMap;

    MCAPI static std::vector<std::unique_ptr<class Enchant>> mEnchants;

    // NOLINTEND
};
