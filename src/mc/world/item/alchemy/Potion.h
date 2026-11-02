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
    MCNAPI Potion(::std::string_view const nameId, ::std::string_view const prefix);

    MCNAPI Potion(
        ::std::string_view const   nameId,
        ::std::string_view const   descriptionID,
        ::MobEffectInstance const& mobEffect,
        ::PotionVariant            var
    );

    MCNAPI Potion(
        ::std::string_view const           nameId,
        ::std::vector<::std::string>       descriptionIDs,
        ::std::vector<::MobEffectInstance> mobEffects,
        ::PotionVariant                    var
    );

    MCNAPI void appendFormattedPotionText(
        ::Bedrock::Safety::RedactableString& inOutHovertext,
        ::PotionType                         potionType,
        ::PotionVariant                      potionVariant,
        ::Player const&                      player,
        float                                timeMod
    ) const;

    MCNAPI ::std::string getDescriptionId() const;

    MCNAPI ::std::string getDescriptionId(::PotionType potionType) const;

    MCNAPI ::std::string getNameId() const;

    MCNAPI ::std::string getPotencyDescription(::PotionType potionType, float timeMod) const;

    MCNAPI ::std::string getPrefix() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addPotion(::std::shared_ptr<::Potion const> const potion);

    MCNAPI static void appendMobEffectText(
        ::Bedrock::Safety::RedactableString& inOutHovertext,
        ::PotionVariant                      potionVariant,
        uint                                 mobEffectId,
        int                                  amplifier,
        ::Player const&                      player
    );

    MCNAPI static ::std::string
    effectDurationToString(::PotionType potionType, float timeMod, ::MobEffectInstance const& effect);

    MCNAPI static ::std::string effectPotencyToString(::MobEffectInstance const& effect);

    MCNAPI static ::std::string getBasePotion(::PotionType type);

    MCNAPI static ::std::string getPotencyDescription(
        ::PotionType               potionType,
        float                      timeMod,
        ::std::string_view const   descID,
        ::MobEffectInstance const& effect
    );

    MCNAPI static ::std::shared_ptr<::Potion const> getPotion(::std::string_view potionNameId);

    MCNAPI static void initPotions(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::shared_ptr<::Potion const> const& Awkward();

    MCNAPI static ::std::shared_ptr<::Potion const> const& FireResistance();

    MCNAPI static ::std::shared_ptr<::Potion const> const& Healing();

    MCNAPI static ::std::shared_ptr<::Potion const> const& Poison();

    MCNAPI static ::std::shared_ptr<::Potion const> const& Slowness();

    MCNAPI static ::std::shared_ptr<::Potion const> const& Swiftness();

    MCNAPI static ::std::shared_ptr<::Potion const> const& Water();

    MCNAPI static ::std::shared_ptr<::Potion const> const& WaterBreathing();

    MCNAPI static ::std::shared_ptr<::Potion const> const& Weakness();

    MCNAPI static int& mLastId();

    MCNAPI static ::std::array<::std::shared_ptr<::Potion const>, 64>& mPotionsById();

    MCNAPI static ::std::unordered_map<::std::string, int>& mPotionsByName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view const nameId, ::std::string_view const prefix);

    MCNAPI void* $ctor(
        ::std::string_view const   nameId,
        ::std::string_view const   descriptionID,
        ::MobEffectInstance const& mobEffect,
        ::PotionVariant            var
    );

    MCNAPI void* $ctor(
        ::std::string_view const           nameId,
        ::std::vector<::std::string>       descriptionIDs,
        ::std::vector<::MobEffectInstance> mobEffects,
        ::PotionVariant                    var
    );
    // NOLINTEND
};
