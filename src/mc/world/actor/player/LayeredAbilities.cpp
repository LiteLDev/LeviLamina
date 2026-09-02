#include "mc/world/actor/player/LayeredAbilities.h"
#include "mc/world/actor/player/Abilities.h"

Ability& LayeredAbilities::getAbility(::AbilitiesIndex val) {
    if (mLayers->empty() || val > AbilitiesIndex::AbilityCount) {
        return Abilities::INVALID_ABILITY();
    }
    for (auto& layer : mLayers.get()) {
        auto& ability = layer.mAbilities->at((size_t)val);
        if (ability.mType != Ability::Type::Unset) {
            return ability;
        }
    }
    return Abilities::INVALID_ABILITY();
}

Ability& LayeredAbilities::getAbility(::AbilitiesLayer layer, ::AbilitiesIndex val) {
    if (mLayers->empty() || val > AbilitiesIndex::AbilityCount || layer >= AbilitiesLayer::Count) {
        return Abilities::INVALID_ABILITY();
    }
    auto& ability = mLayers->at((size_t)layer).mAbilities->at((size_t)val);
    return ability;
}

bool LayeredAbilities::setAbility(::AbilitiesIndex val, float value) {
    if (val > AbilitiesIndex::AbilityCount) {
        return false;
    }
    auto& ability = mLayers->at((size_t)AbilitiesLayer::Base).mAbilities->at((size_t)val);
    if (ability.mType == Ability::Type::Unset) {
        ability.mType = Ability::Type::Float;
    } else if (ability.mType != Ability::Type::Float) {
        return false;
    }
    ability.mValue->mFloatVal = value;
    return true;
}

bool LayeredAbilities::setAbility(::AbilitiesIndex val, bool value) {
    if (val > AbilitiesIndex::AbilityCount) {
        return false;
    }
    auto& ability = mLayers->at((size_t)AbilitiesLayer::Base).mAbilities->at((size_t)val);

    if (ability.mType == Ability::Type::Unset) {
        ability.mType = Ability::Type::Bool;
    } else if (ability.mType != Ability::Type::Bool) {
        return false;
    }
    ability.mValue->mBoolVal = value;
    return true;
}

void LayeredAbilities::setPlayerPermissions(::PlayerPermissionLevel permissions) {
    auto oldPermissions              = mPermissions->mPlayerPermissions;
    mPermissions->mPlayerPermissions = permissions;

    // TODO: uncomment this after added MCAPI
    // mPermissions->mClientPlayerPermissionsPublisher->dispatch();

    if (oldPermissions == PlayerPermissionLevel::Custom) {
        auto& customAbilities = *mLayers->at(1).mAbilities;
        auto& abilities       = *mLayers->at(0).mAbilities;

        for (size_t i = 0; i < customAbilities.size(); ++i) {
            auto& src = customAbilities[i];

            if ((static_cast<uchar>(src.mOptions) & static_cast<uchar>(Ability::Options::PermissionsInterfaceExposed))
                == 0)
                continue;

            if (src.mType == Ability::Type::Unset) continue;

            auto& dst = abilities[i];

            dst.mType    = src.mType;
            dst.mValue   = src.mValue;
            dst.mOptions = src.mOptions;
        }
    }

    mLayers->at(1).setFromPermissions(permissions);
}
