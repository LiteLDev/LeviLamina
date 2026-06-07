#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/gestures/GestureRecognizerBase.h"
#include "mc/deps/core/math/Vec2.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IGestureListener; }
namespace OreUI { struct TapGestureParameters; }
namespace OreUI { struct TouchEventData; }
// clang-format on

namespace OreUI {

class TapRecognizer : public ::OreUI::GestureRecognizerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const>                        mMaximumNumberOfTouches;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds const> mTimeTolerance;
    ::ll::TypedStorage<4, 4, float const>                       mTapDistanceToleranceCm;
    ::ll::TypedStorage<4, 8, ::Vec2>                            mStartPoint;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds>       mLastTouchTimestamp;
    // NOLINTEND

public:
    // prevent constructor by default
    TapRecognizer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TapRecognizer() /*override*/ = default;

    virtual void onTouchesBegan(::std::vector<::OreUI::TouchEventData> const& touches) /*override*/;

    virtual void onTouchesEnded(
        ::std::vector<::OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const& touches
    ) /*override*/;

    virtual void onGestureRecognized() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TapRecognizer(
        ::OreUI::IGestureListener&                            gestureListener,
        int                                                   priority,
        ::OreUI::TapGestureParameters const&                  parameters,
        float                                                 pixelsPerCm,
        ::std::function<::std::chrono::milliseconds()> const& getTime
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::IGestureListener&                            gestureListener,
        int                                                   priority,
        ::OreUI::TapGestureParameters const&                  parameters,
        float                                                 pixelsPerCm,
        ::std::function<::std::chrono::milliseconds()> const& getTime
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onTouchesBegan(::std::vector<::OreUI::TouchEventData> const& touches);

    MCAPI void
    $onTouchesEnded(::std::vector<::OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const& touches);

    MCAPI void $onGestureRecognized();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
