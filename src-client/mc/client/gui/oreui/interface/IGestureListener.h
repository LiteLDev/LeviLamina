#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
// clang-format on

namespace OreUI {

class IGestureListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGestureListener() = default;

    virtual void onPanRecognized(::Vec2 const&, ::Vec2 const&, ::Vec2 const&) = 0;

    virtual void onPanCompleted(::Vec2 const&) = 0;

    virtual void onFlingCompleted(::Vec2 const&, ::Vec2 const&, ::std::chrono::milliseconds) = 0;

    virtual void onTapRecognized(::Vec2 const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
