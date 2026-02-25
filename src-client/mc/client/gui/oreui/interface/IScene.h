#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class IScene {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScene() = default;

    virtual void onLoadFailed(char const*, char const*) = 0;

    virtual void onViewReused() = 0;

    virtual void onReusedViewReleased() = 0;

    virtual bool isInputEnabled() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
