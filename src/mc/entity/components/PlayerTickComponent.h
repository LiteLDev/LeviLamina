#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerTickComponent {
public:
    // prevent constructor by default
    PlayerTickComponent& operator=(PlayerTickComponent const&);
    PlayerTickComponent(PlayerTickComponent const&);

public:
    // NOLINTBEGIN
    MCAPI PlayerTickComponent();

    MCAPI explicit PlayerTickComponent(std::unique_ptr<struct IPlayerTickPolicy> policy);

    MCAPI PlayerTickComponent(struct PlayerTickComponent&&);

    MCAPI struct PlayerTickComponent& operator=(struct PlayerTickComponent&&);

    MCAPI ~PlayerTickComponent();

    // NOLINTEND
};
