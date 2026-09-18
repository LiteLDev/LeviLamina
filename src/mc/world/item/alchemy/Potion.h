#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffectInstance.h"
#include "mc/world/item/alchemy/PotionType.h"
#include "mc/world/item/alchemy/PotionVariant.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
class Player;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class Potion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                 mId;
    ::ll::TypedStorage<8, 32, ::std::string>                      mNameId;
    ::ll::TypedStorage<8, 32, ::std::string>                      mPrefix;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobEffectInstance>> mEffects;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>       mDescriptionIds;
    ::ll::TypedStorage<4, 4, ::PotionVariant>                     mVar;
    // NOLINTEND

public:
    // prevent constructor by default
    Potion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Potion(::std::string_view const nameId, ::std::string_view const prefix);

    MCAPI Potion(
        ::std::string_view const   nameId,
        ::std::string_view const   descriptionID,
        ::MobEffectInstance const& mobEffect,
        ::PotionVariant            var
    );

    MCAPI Potion(
        ::std::string_view const           nameId,
        ::std::vector<::std::string>       descriptionIDs,
        ::std::vector<::MobEffectInstance> mobEffects,
        ::PotionVariant                    var
    );

    MCAPI void appendFormattedPotionText(
        ::Bedrock::Safety::RedactableString& inOutHovertext,
        ::PotionType                         potionType,
        ::PotionVariant                      potionVariant,
        ::Player const&                      player,
        float                                timeMod
    ) const;

    MCAPI ::std::string getDescriptionId() const;

    MCAPI ::std::string getDescriptionId(::PotionType potionType) const;

    MCFOLD ::std::string getNameId() const;

    MCAPI ::std::string getPotencyDescription(::PotionType potionType, float timeMod) const;

    MCFOLD ::std::string getPrefix() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addPotion(::std::shared_ptr<::Potion const> const potion);

    MCAPI static void appendMobEffectText(
        ::Bedrock::Safety::RedactableString& inOutHovertext,
        ::PotionVariant                      potionVariant,
        uint                                 mobEffectId,
        int                                  amplifier,
        ::Player const&                      player
    );

    MCAPI static ::std::string
    effectDurationToString(::PotionType potionType, float timeMod, ::MobEffectInstance const& effect);

    MCAPI static ::std::string effectPotencyToString(::MobEffectInstance const& effect);

    MCAPI static ::std::string getBasePotion(::PotionType type);

    MCAPI static ::std::string getPotencyDescription(
        ::PotionType               potionType,
        float                      timeMod,
        ::std::string_view const   descID,
        ::MobEffectInstance const& effect
    );

    MCAPI static ::std::shared_ptr<::Potion const> getPotion(::std::string_view potionNameId);

    MCAPI static void initPotions(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::Potion const> const& Awkward();

    MCAPI static ::std::shared_ptr<::Potion const> const& FireResistance();

    MCAPI static ::std::shared_ptr<::Potion const> const& Healing();

    MCAPI static ::std::shared_ptr<::Potion const> const& Poison();

    MCAPI static ::std::shared_ptr<::Potion const> const& Slowness();

    MCAPI static ::std::shared_ptr<::Potion const> const& Swiftness();

    MCAPI static ::std::shared_ptr<::Potion const> const& Water();

    MCAPI static ::std::shared_ptr<::Potion const> const& WaterBreathing();

    MCAPI static ::std::shared_ptr<::Potion const> const& Weakness();

    MCAPI static int& mLastId();

    MCAPI static ::std::array<::std::shared_ptr<::Potion const>, 64>& mPotionsById();

    MCAPI static ::std::unordered_map<::std::string, int>& mPotionsByName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view const nameId, ::std::string_view const prefix);

    MCAPI void* $ctor(
        ::std::string_view const   nameId,
        ::std::string_view const   descriptionID,
        ::MobEffectInstance const& mobEffect,
        ::PotionVariant            var
    );

    MCAPI void* $ctor(
        ::std::string_view const           nameId,
        ::std::vector<::std::string>       descriptionIDs,
        ::std::vector<::MobEffectInstance> mobEffects,
        ::PotionVariant                    var
    );
    // NOLINTEND
};
