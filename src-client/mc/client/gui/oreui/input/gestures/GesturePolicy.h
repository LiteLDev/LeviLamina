#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/gestures/GestureManager.h"
#include "mc/client/gui/oreui/input/gestures/GestureMode.h"
#include "mc/client/gui/oreui/interface/IGestureListener.h"
#include "mc/deps/core/math/Vec2.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ITouchSystem; }
namespace OreUI { struct GestureParameters; }
// clang-format on

namespace OreUI {

class GesturePolicy : public ::OreUI::IGestureListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::ITouchSystem&>                          mTouchSystem;
    ::ll::TypedStorage<8, 24, ::OreUI::GestureManager>                        mGestureManager;
    ::ll::TypedStorage<4, 4, ::OreUI::GestureMode>                            mMode;
    ::ll::TypedStorage<8, 64, ::std::function<::std::chrono::milliseconds()>> mGetTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds>                     mLastTapTime;
    ::ll::TypedStorage<4, 8, ::Vec2>                                          mLastTapPos;
    ::ll::TypedStorage<4, 4, float const>                                     mTapDistanceTolerancePixels;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                            mTtsDownTouchesIds;
    // NOLINTEND

public:
    // prevent constructor by default
    GesturePolicy& operator=(GesturePolicy const&);
    GesturePolicy(GesturePolicy const&);
    GesturePolicy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onPanRecognized(::Vec2 const&, ::Vec2 const&, ::Vec2 const&) /*override*/;

    virtual void onPanCompleted(::Vec2 const&) /*override*/;

    virtual void onFlingCompleted(::Vec2 const&, ::Vec2 const&, ::std::chrono::milliseconds) /*override*/;

    virtual void onTapRecognized(::Vec2 const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GesturePolicy(
        ::OreUI::ITouchSystem&                                touchSystem,
        ::OreUI::GestureParameters const&                     gestureParameters,
        float                                                 pixelsPerCm,
        ::std::function<::std::chrono::milliseconds()> const& getTime,
        bool                                                  isTTSEnabled
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::ITouchSystem&                                touchSystem,
        ::OreUI::GestureParameters const&                     gestureParameters,
        float                                                 pixelsPerCm,
        ::std::function<::std::chrono::milliseconds()> const& getTime,
        bool                                                  isTTSEnabled
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
