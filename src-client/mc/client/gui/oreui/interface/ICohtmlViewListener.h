#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct ScreenInfo; }
// clang-format on

namespace OreUI {

class ICohtmlViewListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICohtmlViewListener() = default;

    virtual void onLoadSucceeded(char const*) = 0;

    virtual void onLoadFailed(char const*, char const*) = 0;

    virtual void onBindingsReleased() = 0;

    virtual void onReadyForBindings() = 0;

    virtual ::OreUI::ScreenInfo onScreenInfoRequested() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
