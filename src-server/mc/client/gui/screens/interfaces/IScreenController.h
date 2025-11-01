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
    // vIndex: 0
    virtual ~IScreenController() = default;

    // vIndex: 1
    virtual void preFrameTick() = 0;

    // vIndex: 2
    virtual ::ui::DirtyFlag tick() = 0;

    // vIndex: 3
    virtual ::ui::ViewRequest handleEvent(::ScreenEvent&) = 0;

    // vIndex: 4
    virtual ::std::optional<::std::string> getRoute() const = 0;

    // vIndex: 5
    virtual void setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
