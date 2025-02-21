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
