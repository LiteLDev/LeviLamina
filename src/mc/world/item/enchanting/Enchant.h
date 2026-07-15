#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/item/EnchantSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BaseGameVersion;
class Experiments;
class ItemInstance;
struct EnchantSlotEnumHasher;
// clang-format on

class Enchant {
public:
    // Enchant inner types define
    enum class Activation : int {
        Equipped       = 0,
        Held           = 1,
        Self           = 2,
        NumActivations = 3,
        Invalid        = 4,
    };

    enum class CompatibilityID : int {
        NonConflict     = 0,
        Damage          = 1,
        Gathering       = 2,
        Protection      = 3,
        FrostStrider    = 4,
        MendingInfinity = 5,
        LoyaltyRiptide  = 6,
    };

    enum class Frequency : int {
        Common   = 30,
        Uncommon = 10,
        Rare     = 3,
        VeryRare = 1,
    };

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
        Lunge                = 41,
        NumEnchantments      = 42,
        InvalidEnchantment   = 43,
    };

    enum class VillagerTrading : int {
        NotAvailable = 0,
        Available    = 1,
    };

    using Slot = ::SharedTypes::EnchantSlot;

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
    // virtual functions
    // NOLINTBEGIN
    virtual ~Enchant() = default;

    virtual bool isCompatibleWith(::Enchant::Type type) const;

    virtual int getMinCost(int level) const;

    virtual int getMaxCost(int level) const;

    virtual int getMinLevel() const;

    virtual int getMaxLevel() const;

    virtual int getDamageProtection(int level, ::ActorDamageSource const& source) const;

    virtual float getAfterBreachArmorFraction(int, float) const;

    virtual float getDamageBonus(int, ::Actor const&, ::Actor const&) const;

    virtual void doPostAttack(::Actor& attacker, ::Actor& victim, int level) const;

    virtual void doPostPiercingAttack(::Actor& attacker, int enchantLevel) const;

    virtual void doPostItemHurtActor(::Actor&, ::Actor&, int) const;

    virtual void doPostHurt(::ItemInstance& item, ::Actor& victim, ::Actor& attacker, int level) const;

    virtual bool isMeleeDamageEnchant() const;

    virtual bool isProtectionEnchant() const;

    virtual bool isTreasureOnly() const;

    virtual bool isDiscoverable() const;

    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string getDescriptionId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SharedTypes::EnchantSlot enchantSlotFromString(::std::string_view str);

    MCAPI static ::Enchant const* getEnchantFromName(::HashedString const& name);

    MCAPI static ::Enchant::Type getEnchantTypeFromName(::HashedString const& name);

    MCAPI static void initEnchants(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);

    MCAPI static ::std::string stringFromEnchantSlot(::SharedTypes::EnchantSlot const& enchantSlot);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::HashedString, ::Enchant::Type>& mEnchantNameToType();

    MCAPI static ::std::unordered_map<
        ::SharedTypes::EnchantSlot,
        ::std::string,
        ::EnchantSlotEnumHasher,
        ::std::equal_to<::SharedTypes::EnchantSlot>>&
    mEnchantSlotTypeEnumToStringMap();

    MCAPI static ::std::unordered_map<::std::string, ::SharedTypes::EnchantSlot>& mEnchantSlotTypeNameToEnumMap();

    MCAPI static ::std::vector<::std::unique_ptr<::Enchant>>& mEnchants();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isCompatibleWith(::Enchant::Type type) const;

    MCAPI int $getMinCost(int level) const;

    MCAPI int $getMaxCost(int level) const;

    MCFOLD int $getMaxLevel() const;


    // NOLINTEND
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::Enchant::Type>();
// clang-format on
