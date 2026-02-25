#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/TouchEventData.h"
#include "mc/deps/core/math/Vec2.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IGestureListener; }
// clang-format on

namespace OreUI {

class GestureRecognizerBase {
public:
    // GestureRecognizerBase inner types declare
    // clang-format off
    struct TouchEventDataWithCurrentPos;
    // clang-format on

    // GestureRecognizerBase inner types define
    enum class GestureRecognizerState : int {
        Possible                      = 0,
        Began                         = 1,
        CanceledOrDone                = 2,
        Recognized                    = 3,
        RecognizedAndStillRecognizing = 4,
    };

    struct TouchEventDataWithCurrentPos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::OreUI::TouchEventData> touchEventData;
        ::ll::TypedStorage<4, 8, ::Vec2>                   currentPos;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::IGestureListener&> mGestureListener;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos>>
        mTrackingTouches;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos>>
                                                                              mTrackedTouchesWithinTouchesToRecognize;
    ::ll::TypedStorage<4, 4, float>                                           mPixelsPerCm;
    ::ll::TypedStorage<8, 64, ::std::function<::std::chrono::milliseconds()>> mGetTime;
    ::ll::TypedStorage<4, 4, ::OreUI::GestureRecognizerBase::GestureRecognizerState> mState;
    ::ll::TypedStorage<1, 1, bool>                                                   mEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                   mSentTouchesBegan;
    ::ll::TypedStorage<1, 1, bool>                                                   mSentTouchesMoved;
    ::ll::TypedStorage<1, 1, bool>                                                   mSentTouchesEnded;
    ::ll::TypedStorage<4, 4, int>                                                    mPriority;
    // NOLINTEND

public:
    // prevent constructor by default
    GestureRecognizerBase& operator=(GestureRecognizerBase const&);
    GestureRecognizerBase(GestureRecognizerBase const&);
    GestureRecognizerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GestureRecognizerBase();

    virtual void onTouchesBegan(::std::vector<::OreUI::TouchEventData> const& touches);

    virtual void
    onTouchesMoved(::std::vector<::OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const& touches);

    virtual void
    onTouchesEnded(::std::vector<::OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const& touches);

    virtual void onGestureRecognized();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool filterOnlyTrackedTouchesAndUpdate(::std::vector<::OreUI::TouchEventData> const& touches);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onTouchesBegan(::std::vector<::OreUI::TouchEventData> const& touches);

    MCFOLD void
    $onTouchesMoved(::std::vector<::OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const& touches);

    MCFOLD void
    $onTouchesEnded(::std::vector<::OreUI::GestureRecognizerBase::TouchEventDataWithCurrentPos> const& touches);

    MCFOLD void $onGestureRecognized();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
