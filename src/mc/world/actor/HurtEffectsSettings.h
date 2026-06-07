#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HurtEffectsSettings {
public:
    // HurtEffectsSettings inner types define
    enum class ApplyKnockback : int {
        Yes = 0,
        No  = 1,
    };

    enum class Ignite : int {
        Yes = 0,
        No  = 1,
    };

    enum class ReceiveDamage : int {
        Yes = 0,
        No  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::HurtEffectsSettings::ApplyKnockback> mKnockback;
    ::ll::TypedStorage<4, 4, ::HurtEffectsSettings::Ignite>         mIgnition;
    ::ll::TypedStorage<4, 4, ::HurtEffectsSettings::ReceiveDamage>  mReceiveDamage;
    // NOLINTEND
};
