#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/controls/IScreenSettings.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class ScreenSettings : public ::UIComponent, public ::IScreenSettings {
public:
    // member variables
    // NOLINTBEGIN
    bool                                      mNotFlushable                    : 1;
    bool                                      mAlwaysAcceptsInput              : 1;
    bool                                      mRenderGameBehind                : 1;
    bool                                      mAbsorbsInput                    : 1;
    bool                                      mIsShowingMenu                   : 1;
    bool                                      mIsModal                         : 1;
    bool                                      mShouldStealMouse                : 1;
    bool                                      mDrawsLast                       : 1;
    bool                                      mForceRenderBelow                : 1;
    bool                                      mSendEvents                      : 1;
    bool                                      mLowFreqRendering                : 1;
    bool                                      mCloseOnPlayerHurt               : 1;
    bool                                      mCustomPocketToast               : 1;
    bool                                      mCacheScreen                     : 1;
    bool                                      mGamepadCursor                   : 1;
    bool                                      mGamepadCursorDeflectionMode     : 1;
    bool                                      mLoadImmediately                 : 1;
    bool                                      mRenderOnlyWhenTopmost           : 1;
    bool                                      mShouldBeSkippedDuringAutomation : 1;
    ::ll::TypedStorage<4, 4, float>           mVerticalScrollDelta;
    ::ll::TypedStorage<4, 4, ::ui::SceneType> mSceneType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenSettings() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual bool getScreenIsNotFlushable() const /*override*/;

    virtual bool getAlwaysAcceptsInput() const /*override*/;

    virtual bool getRenderGameBehind() const /*override*/;

    virtual bool getAbsorbsInput() const /*override*/;

    virtual bool getIsShowingMenu() const /*override*/;

    virtual bool getIsModal() const /*override*/;

    virtual bool getShouldStealMouse() const /*override*/;

    virtual bool getLowFreqRendering() const /*override*/;

    virtual bool getScreenDrawsLast() const /*override*/;

    virtual bool getForceRenderBelow() const /*override*/;

    virtual bool getShouldSendEvents() const /*override*/;

    virtual bool getCloseOnPlayerHurt() const /*override*/;

    virtual bool getCustomPocketToast() const /*override*/;

    virtual bool getCacheScreen() const /*override*/;

    virtual bool getGamepadCursor() const /*override*/;

    virtual bool getGamepadCursorDeflectionMode() const /*override*/;

    virtual float getVerticalScrollDelta() const /*override*/;

    virtual bool loadScreenImmediately() const /*override*/;

    virtual bool getRenderOnlyWhenTopmost() const /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual bool getShouldBeSkippedDuringAutomation() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCNAPI void $reset();

    MCNAPI bool $getScreenIsNotFlushable() const;

    MCNAPI bool $getAlwaysAcceptsInput() const;

    MCNAPI bool $getRenderGameBehind() const;

    MCNAPI bool $getAbsorbsInput() const;

    MCNAPI bool $getIsShowingMenu() const;

    MCNAPI bool $getIsModal() const;

    MCNAPI bool $getShouldStealMouse() const;

    MCNAPI bool $getLowFreqRendering() const;

    MCNAPI bool $getScreenDrawsLast() const;

    MCNAPI bool $getForceRenderBelow() const;

    MCNAPI bool $getShouldSendEvents() const;

    MCNAPI bool $getCloseOnPlayerHurt() const;

    MCNAPI bool $getCustomPocketToast() const;

    MCNAPI bool $getCacheScreen() const;

    MCNAPI bool $getGamepadCursor() const;

    MCNAPI bool $getGamepadCursorDeflectionMode() const;

    MCNAPI float $getVerticalScrollDelta() const;

    MCNAPI bool $loadScreenImmediately() const;

    MCNAPI bool $getRenderOnlyWhenTopmost() const;

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI bool $getShouldBeSkippedDuringAutomation() const;
    // NOLINTEND
};
