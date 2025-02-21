#include "mc/world/actor/player/LayeredAbilities.h"
#include "mc/world/actor/player/Abilities.h"

Ability& LayeredAbilities::getAbility(::AbilitiesIndex val) {
    if (mLayers->empty() || val >= AbilitiesIndex::AbilityCount) {
        return Abilities::INVALID_ABILITY();
    }
    for (auto& layer : mLayers.get()) {
        auto& ability = layer.mAbilities->at((schar)val);
        if (ability.mType != Ability::Type::Unset) {
            return ability;
        }
    }
}

Ability& LayeredAbilities::getAbility(::AbilitiesLayer layer, ::AbilitiesIndex val) {
    if (mLayers->empty() || val >= AbilitiesIndex::AbilityCount || layer >= AbilitiesLayer::Count) {
        return Abilities::INVALID_ABILITY();
    }
    auto& ability = mLayers->at((schar)layer).mAbilities->at((schar)val);
    return ability;
}

void LayeredAbilities::setAbility(::AbilitiesIndex val, float value) {
    if (val >= AbilitiesIndex::AbilityCount) {
        return;
    }
    auto& ability = mLayers->at((schar)AbilitiesLayer::Base).mAbilities->at((schar)val);
    if (ability.mType == Ability::Type::Unset) {
        ability.mType = Ability::Type::Float;
    }
    ability.mValue->mUnk46b742.as<float>() = value;
}

void LayeredAbilities::setAbility(::AbilitiesIndex val, bool value) {
    if (val >= AbilitiesIndex::AbilityCount) {
        return;
    }
    auto& ability = mLayers->at((schar)AbilitiesLayer::Base).mAbilities->at((schar)val);
    if (ability.mType == Ability::Type::Unset) {
        ability.mType = Ability::Type::Bool;
    }
    ability.mValue->mUnk45a32a.as<bool>() = value;
}