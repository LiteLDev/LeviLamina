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

    virtual void onPanRecognized(::Vec2 const& gestureBeginPos, ::Vec2 const& currentPos, ::Vec2 const& delta) = 0;

    virtual void onPanCompleted(::Vec2 const& endPos) = 0;

    virtual void
    onFlingCompleted(::Vec2 const& endPos, ::Vec2 const& flingStart, ::std::chrono::milliseconds flingDuration) = 0;

    virtual void onTapRecognized(::Vec2 const& position) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
