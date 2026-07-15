#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LinksToStyle;
// clang-format on

class ILayoutContentRefreshable {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILayoutContentRefreshable() = default;

    virtual void refreshContent(::LinksToStyle const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
