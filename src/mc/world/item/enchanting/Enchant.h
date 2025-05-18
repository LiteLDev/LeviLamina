#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ItemInstance;
struct EnchantSlotEnumHasher;
// clang-format on

class Enchant {
public:
    // Enchant inner types define
    enum class Type : uchar {
        Protection           = 0,
        FireProtection       = 1,
        FeatherFalling       = 2,
        BlastProtection      = 3,
        ProjectileProtection = 4,
        Thorns               = 5,
        Respiration          = 6,
        DepthStrider         = 7,
        AquaAffinity         = 8,
        Sharpness            = 9,
        Smite                = 10,
        BaneOfArthropods     = 11,
        Knockback            = 12,
        FireAspect           = 13,
        Looting              = 14,
        Efficiency           = 15,
        SilkTouch            = 16,
        Unbreaking           = 17,
        Fortune              = 18,
        Power                = 19,
        Punch                = 20,
        Flame                = 21,
        Infinity             = 22,
        LuckOfTheSea         = 23,
        Lure                 = 24,
        FrostWalker          = 25,
        Mending              = 26,
        CurseOfBinding       = 27,
        CurseOfVanishing     = 28,
        Impaling             = 29,
        Riptide              = 30,
        Loyalty              = 31,
        Channeling           = 32,
        Multishot            = 33,
        Piercing             = 34,
        QuickCharge          = 35,
        SoulSpeed            = 36,
        SwiftSneak           = 37,
        WindBurst            = 38,
        Density              = 39,
        Breach               = 40,
        NumEnchantments      = 41,
        InvalidEnchantment   = 42,
    };

    enum class Frequency : int {
        Common   = 30,
        Uncommon = 10,
        Rare     = 3,
        VeryRare = 1,
    };

    enum class Slot : uint {
        // bitfield representation
        None          = 0,
        ArmorHead     = 1u << 0,
        ArmorTorso    = 1u << 1,
        ArmorFeet     = 1u << 2,
        ArmorLegs     = 1u << 3,
        Sword         = 1u << 4,
        Bow           = 1u << 5,
        Hoe           = 1u << 6,
        Shears        = 1u << 7,
        Flintsteel    = 1u << 8,
        Axe           = 1u << 9,
        Pickaxe       = 1u << 10,
        Shovel        = 1u << 11,
        FishingRod    = 1u << 12,
        CarrotStick   = 1u << 13,
        Elytra        = 1u << 14,
        Spear         = 1u << 15,
        Crossbow      = 1u << 16,
        Shield        = 1u << 17,
        CosmeticHead  = 1u << 18,
        Compass       = 1u << 19,
        MushroomStick = 1u << 20,
        Brush         = 1u << 21,
        HeavyWeapon   = 1u << 22,
        GArmor        = ArmorHead | ArmorTorso | ArmorFeet | ArmorLegs,
        GDigging      = Hoe | Axe | Pickaxe | Shovel,
        GTool         = Hoe | Shears | Flintsteel | Shield,
        All           = 4294967295,
    };

    enum class Activation : int {
        Equipped       = 0,
        Held           = 1,
        Self           = 2,
        NumActivations = 3,
        Invalid        = 4,
    };

    enum class CompatibilityID : int {
        NonConflict  = 0,
        Damage       = 1,
        Gathering    = 2,
        Protection   = 3,
        Froststrider = 4,
        Mendfinity   = 5,
        Loyalriptide = 6,
    };

    enum class VillagerTrading : int {
        NotAvailable = 0,
        Available    = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Enchant::Type const>      mEnchantType;
    ::ll::TypedStorage<4, 4, ::Enchant::Frequency const> mFrequency;
    ::ll::TypedStorage<1, 1, bool const>                 mIsAvailableInVillagerTrading;
    ::ll::TypedStorage<4, 4, int const>                  mPrimarySlots;
    ::ll::TypedStorage<4, 4, int const>                  mSecondarySlots;
    ::ll::TypedStorage<4, 4, int const>                  mCompatibility;
    ::ll::TypedStorage<8, 32, ::std::string const>       mDescription;
    ::ll::TypedStorage<8, 48, ::HashedString const>      mStringId;
    ::ll::TypedStorage<8, 48, ::HashedString const>      mScriptStringId;
    ::ll::TypedStorage<1, 1, bool>                       mIsDisabled;
    // NOLINTEND

public:
    // prevent constructor by default
    Enchant();

public:
    // virtual functions
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
    virtual int getDamageProtection(int level, ::ActorDamageSource const& source) const;

    // vIndex: 7
    virtual float getAfterBreachArmorFraction(int, float) const;

    // vIndex: 8
    virtual float getDamageBonus(int, ::Actor const&, ::Actor const&) const;

    // vIndex: 9
    virtual void doPostAttack(::Actor& attacker, ::Actor& victim, int level) const;

    // vIndex: 10
    virtual void doPostItemHurtActor(::Actor&, ::Actor&, int) const;

    // vIndex: 11
    virtual void doPostHurt(::ItemInstance& item, ::Actor& victim, ::Actor& attacker, int level) const;

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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Enchant(
        ::Enchant::Type            type,
        ::Enchant::Frequency       frequency,
        ::std::string_view         stringId,
        ::std::string_view         scriptStringId,
        ::std::string_view         description,
        ::Enchant::VillagerTrading isAvailableForVillagerTraining,
        int                        primarySlots,
        int                        secondarySlots
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Enchant::Slot enchantSlotFromString(::std::string_view str);

    MCAPI static void initEnchants();

    MCAPI static ::std::string stringFromEnchantSlot(::Enchant::Slot const& enchantSlot);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::HashedString, ::Enchant::Type>& mEnchantNameToType();

    MCAPI static ::std::
        unordered_map<::Enchant::Slot, ::std::string, ::EnchantSlotEnumHasher, ::std::equal_to<::Enchant::Slot>>&
        mEnchantSlotTypeEnumToStringMap();

    MCAPI static ::std::unordered_map<::std::string, ::Enchant::Slot>& mEnchantSlotTypeNameToEnumMap();

    MCAPI static ::std::vector<::std::unique_ptr<::Enchant>>& mEnchants();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Enchant::Type            type,
        ::Enchant::Frequency       frequency,
        ::std::string_view         stringId,
        ::std::string_view         scriptStringId,
        ::std::string_view         description,
        ::Enchant::VillagerTrading isAvailableForVillagerTraining,
        int                        primarySlots,
        int                        secondarySlots
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isCompatibleWith(::Enchant::Type type) const;

    MCAPI int $getMinCost(int level) const;

    MCAPI int $getMaxCost(int level) const;

    MCFOLD int $getMinLevel() const;

    MCFOLD int $getMaxLevel() const;

    MCFOLD int $getDamageProtection(int level, ::ActorDamageSource const& source) const;

    MCFOLD float $getAfterBreachArmorFraction(int, float) const;

    MCFOLD float $getDamageBonus(int, ::Actor const&, ::Actor const&) const;

    MCFOLD void $doPostAttack(::Actor& attacker, ::Actor& victim, int level) const;

    MCFOLD void $doPostItemHurtActor(::Actor&, ::Actor&, int) const;

    MCFOLD void $doPostHurt(::ItemInstance& item, ::Actor& victim, ::Actor& attacker, int level) const;

    MCFOLD bool $isMeleeDamageEnchant() const;

    MCFOLD bool $isProtectionEnchant() const;

    MCFOLD bool $isTreasureOnly() const;

    MCFOLD bool $isDiscoverable() const;

    MCFOLD bool $_isValidEnchantmentTypeForCategory(::Enchant::Type type) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
