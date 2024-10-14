#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerArmorExchangeEvent {
public:
    // prevent constructor by default
    PlayerArmorExchangeEvent& operator=(PlayerArmorExchangeEvent const&);
    PlayerArmorExchangeEvent();

public:
    // NOLINTBEGIN
    MCAPI PlayerArmorExchangeEvent(struct PlayerArmorExchangeEvent const&);

    MCAPI ~PlayerArmorExchangeEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
