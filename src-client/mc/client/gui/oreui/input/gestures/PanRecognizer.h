#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/input/gestures/GestureRecognizerBase.h"
#include "mc/deps/core/math/Vec2.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct TouchEventData; }
// clang-format on

namespace OreUI {

class PanRecognizer : public ::OreUI::GestureRecognizerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64 const> mMinimumNumberOfTouches;
    ::ll::TypedStorage<8, 8, uint64 const> mMaximumNumberOfTouches;
    ::ll::TypedStorage<4, 4, float const>  mMinDistanceToPanCm;
    ::ll::TypedStorage<4, 4, float>        mTotalDeltaMovementInCm;
    ::ll::TypedStorage<4, 8, ::Vec2>       mPreviousLocation;
    ::ll::TypedStorage<4, 8, ::Vec2>       mStartPoint;
    ::ll::TypedStorage<4, 8, ::Vec2>       mEndPoint;
    ::ll::TypedStorage<4, 8, ::Vec2>       mDeltaTranslation;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PanRecognizer() /*override*/ = default;

    virtual void onTouchesBegan(::std::vector<::OreUI::TouchEventData> const& touches) /*override*/;

    virtual void onTouchesMoved(
        ::std::vector<::OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const& touches
    ) /*override*/;

    virtual void onTouchesEnded(
        ::std::vector<::OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const& touches
    ) /*override*/;

    virtual void onGestureRecognized() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onTouchesBegan(::std::vector<::OreUI::TouchEventData> const& touches);

    MCAPI void
    $onTouchesMoved(::std::vector<::OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const& touches);

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
