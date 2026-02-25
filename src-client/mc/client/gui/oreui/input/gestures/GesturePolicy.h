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
namespace OreUI { struct TouchEventData; }
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
    virtual void
    onPanRecognized(::Vec2 const& gestureBeginPos, ::Vec2 const& currentPos, ::Vec2 const& delta) /*override*/;

    virtual void onPanCompleted(::Vec2 const& endPos) /*override*/;

    virtual void onFlingCompleted(
        ::Vec2 const&               endPos,
        ::Vec2 const&               flingStart,
        ::std::chrono::milliseconds flingDuration
    ) /*override*/;

    virtual void onTapRecognized(::Vec2 const& position) /*override*/;

    virtual ~GesturePolicy() /*override*/;
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

    MCAPI void onTouchesUpdate(::std::vector<::OreUI::TouchEventData> const& events);
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onPanRecognized(::Vec2 const& gestureBeginPos, ::Vec2 const& currentPos, ::Vec2 const& delta);

    MCAPI void $onPanCompleted(::Vec2 const& endPos);

    MCAPI void
    $onFlingCompleted(::Vec2 const& endPos, ::Vec2 const& flingStart, ::std::chrono::milliseconds flingDuration);

    MCAPI void $onTapRecognized(::Vec2 const& position);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
