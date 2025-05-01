#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
class MobEffectInstance;
class Player;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class Potion {
public:
    // Potion inner types define
    enum class PotionType : int {
        Undefined = -1,
        Regular   = 0,
        Splash    = 1,
        Lingering = 2,
    };

    enum class PotionVariant : int {
        Moveslow       = 0,
        Movespeed      = 1,
        Digslow        = 2,
        Digspeed       = 3,
        Damageboost    = 4,
        Heal           = 5,
        Harm           = 6,
        Jump           = 7,
        Confusion      = 8,
        Regen          = 9,
        Resistance     = 10,
        Fireresistance = 11,
        Waterbreath    = 12,
        Invisibility   = 13,
        Blindness      = 14,
        Nightvision    = 15,
        Hunger         = 16,
        Weakness       = 17,
        Poison         = 18,
        Wither         = 19,
        Healthboost    = 20,
        Absorption     = 21,
        Saturation     = 22,
        Levitation     = 23,
        Turtlemaster   = 24,
        Slowfall       = 25,
        Windcharged    = 26,
        Weaving        = 27,
        Oozing         = 28,
        Infested       = 29,
        Base           = 30,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                 mId;
    ::ll::TypedStorage<8, 32, ::std::string>                      mNameId;
    ::ll::TypedStorage<8, 32, ::std::string>                      mPrefix;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobEffectInstance>> mEffects;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>       mDescriptionIds;
    ::ll::TypedStorage<4, 4, ::Potion::PotionVariant>             mVar;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Potion(::std::string_view nameId);

    MCNAPI Potion(
        ::std::string_view         nameId,
        ::std::string_view         descriptionID,
        ::MobEffectInstance const& mobEffect,
        ::Potion::PotionVariant    var
    );

    MCNAPI Potion(
        ::std::string_view                 nameId,
        ::std::vector<::std::string>       descriptionIDs,
        ::std::vector<::MobEffectInstance> mobEffects,
        ::Potion::PotionVariant            var
    );

    MCNAPI ::std::string _getDescriptionIdCombiningStrings(::Potion::PotionType potiontype) const;

    MCNAPI ::std::string _getDescriptionIdSingleString(::Potion::PotionType potionType) const;

    MCNAPI void appendFormattedPotionText(
        ::Bedrock::Safety::RedactableString& inOutHovertext,
        ::Potion::PotionType                 potionType,
        ::Potion::PotionVariant              potionVariant,
        ::Player const&                      player,
        float                                timeMod
    ) const;

    MCNAPI ::std::string getDescriptionId(::Potion::PotionType potionType) const;

    MCNAPI ::std::string getPotencyDescription(::Potion::PotionType potionType, float timeMod) const;

    MCNAPI ~Potion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addPotion(::std::shared_ptr<::Potion const> potion);

    MCNAPI static void appendMobEffectText(
        ::Bedrock::Safety::RedactableString& inOutHovertext,
        ::Potion::PotionVariant              potionVariant,
        uint                                 mobEffectId,
        int                                  amplifier,
        ::Player const&                      player
    );

    MCNAPI static ::std::string
    effectDurationToString(::Potion::PotionType potionType, float timeMod, ::MobEffectInstance const& effect);

    MCNAPI static ::std::string effectPotencyToString(::MobEffectInstance const& effect);

    MCNAPI static ::std::string getBasePotion(::Potion::PotionType type);

    MCNAPI static ::std::string getPotencyDescription(
        ::Potion::PotionType       potionType,
        float                      timeMod,
        ::std::string_view         descID,
        ::MobEffectInstance const& effect
    );

    MCNAPI static ::std::shared_ptr<::Potion const> getPotion(::std::string_view potionNameId);

    MCNAPI static void initPotions(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::Potion const> const& Awkward();

    MCAPI static ::std::shared_ptr<::Potion const> const& FireResistance();

    MCAPI static ::std::shared_ptr<::Potion const> const& Harming();

    MCAPI static ::std::shared_ptr<::Potion const> const& Healing();

    MCAPI static ::std::shared_ptr<::Potion const> const& Infested();

    MCAPI static ::std::shared_ptr<::Potion const> const& Invisibility();

    MCAPI static ::std::shared_ptr<::Potion const> const& Leaping();

    MCAPI static ::std::shared_ptr<::Potion const> const& LongFireResistance();

    MCAPI static ::std::shared_ptr<::Potion const> const& LongInvisibility();

    MCAPI static ::std::shared_ptr<::Potion const> const& LongLeaping();

    MCAPI static ::std::shared_ptr<::Potion const> const& LongMundane();

    MCAPI static ::std::shared_ptr<::Potion const> const& LongNightvision();

    MCAPI static ::std::shared_ptr<::Potion const> const& LongPoison();

    MCAPI static ::std::shared_ptr<::Potion const> const& LongRegeneration();

    MCAPI static ::std::shared_ptr<::Potion const> const& LongSlowFalling();

    MCAPI static ::std::shared_ptr<::Potion const> const& LongSlowness();

    MCAPI static ::std::shared_ptr<::Potion const> const& LongStrength();

    MCAPI static ::std::shared_ptr<::Potion const> const& LongSwiftness();

    MCAPI static ::std::shared_ptr<::Potion const> const& LongTurtleMaster();

    MCAPI static ::std::shared_ptr<::Potion const> const& LongWaterBreathing();

    MCAPI static ::std::shared_ptr<::Potion const> const& LongWeakness();

    MCAPI static ::std::shared_ptr<::Potion const> const& Mundane();

    MCAPI static ::std::shared_ptr<::Potion const> const& Nightvision();

    MCAPI static ::std::shared_ptr<::Potion const> const& Oozing();

    MCAPI static ::std::shared_ptr<::Potion const> const& Poison();

    MCAPI static ::std::shared_ptr<::Potion const> const& Regeneration();

    MCAPI static ::std::shared_ptr<::Potion const> const& SlowFalling();

    MCAPI static ::std::shared_ptr<::Potion const> const& Slowness();

    MCAPI static ::std::shared_ptr<::Potion const> const& Strength();

    MCAPI static ::std::shared_ptr<::Potion const> const& StrongHarming();

    MCAPI static ::std::shared_ptr<::Potion const> const& StrongHealing();

    MCAPI static ::std::shared_ptr<::Potion const> const& StrongLeaping();

    MCAPI static ::std::shared_ptr<::Potion const> const& StrongPoison();

    MCAPI static ::std::shared_ptr<::Potion const> const& StrongRegeneration();

    MCAPI static ::std::shared_ptr<::Potion const> const& StrongSlowness();

    MCAPI static ::std::shared_ptr<::Potion const> const& StrongStrength();

    MCAPI static ::std::shared_ptr<::Potion const> const& StrongSwiftness();

    MCAPI static ::std::shared_ptr<::Potion const> const& StrongTurtleMaster();

    MCAPI static ::std::shared_ptr<::Potion const> const& Swiftness();

    MCAPI static ::std::shared_ptr<::Potion const> const& Thick();

    MCAPI static ::std::shared_ptr<::Potion const> const& TurtleMaster();

    MCAPI static ::std::shared_ptr<::Potion const> const& Water();

    MCAPI static ::std::shared_ptr<::Potion const> const& WaterBreathing();

    MCAPI static ::std::shared_ptr<::Potion const> const& Weakness();

    MCAPI static ::std::shared_ptr<::Potion const> const& Weaving();

    MCAPI static ::std::shared_ptr<::Potion const> const& WindCharged();

    MCAPI static ::std::shared_ptr<::Potion const> const& Wither();

    MCAPI static int& mLastId();

    MCAPI static ::std::add_lvalue_reference_t<::std::shared_ptr<::Potion const>[]> mPotionsById();

    MCAPI static ::std::unordered_map<::std::string, int>& mPotionsByName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view nameId);

    MCNAPI void* $ctor(
        ::std::string_view         nameId,
        ::std::string_view         descriptionID,
        ::MobEffectInstance const& mobEffect,
        ::Potion::PotionVariant    var
    );

    MCNAPI void* $ctor(
        ::std::string_view                 nameId,
        ::std::vector<::std::string>       descriptionIDs,
        ::std::vector<::MobEffectInstance> mobEffects,
        ::Potion::PotionVariant            var
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
