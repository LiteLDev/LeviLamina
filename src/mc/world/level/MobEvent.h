#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEvent {
public:
    // prevent constructor by default
    MobEvent& operator=(MobEvent const&);
    MobEvent();

public:
    // NOLINTBEGIN
    MCAPI MobEvent(class MobEvent const&);

    MCAPI MobEvent(std::string name, std::string localizableName, bool val);

    MCAPI std::string const& getLocalizableName() const;

    MCAPI std::string const& getName() const;

    MCAPI bool isEnabled() const;

    MCAPI ~MobEvent();

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
