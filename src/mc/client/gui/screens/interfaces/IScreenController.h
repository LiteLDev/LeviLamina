#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"

// auto generated forward declare list
// clang-format off
struct ScreenEvent;
// clang-format on

class IScreenController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScreenController() = default;

    virtual void preFrameTick() = 0;

    virtual ::ui::DirtyFlag tick() = 0;

    virtual ::ui::ViewRequest handleEvent(::ScreenEvent&) = 0;

    virtual ::std::optional<::std::string> getRoute() const = 0;

    virtual void setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
