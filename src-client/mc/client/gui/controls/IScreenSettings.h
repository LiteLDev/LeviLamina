#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"

class IScreenSettings {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScreenSettings() = default;

    virtual bool getScreenIsNotFlushable() const = 0;

    virtual bool getAlwaysAcceptsInput() const = 0;

    virtual bool getRenderGameBehind() const = 0;

    virtual bool getAbsorbsInput() const = 0;

    virtual bool getIsShowingMenu() const = 0;

    virtual bool getIsModal() const = 0;

    virtual bool getShouldStealMouse() const = 0;

    virtual bool getLowFreqRendering() const = 0;

    virtual bool getScreenDrawsLast() const = 0;

    virtual bool getForceRenderBelow() const = 0;

    virtual bool getShouldSendEvents() const = 0;

    virtual bool getCloseOnPlayerHurt() const = 0;

    virtual bool getCustomPocketToast() const = 0;

    virtual bool getCacheScreen() const = 0;

    virtual bool getGamepadCursor() const = 0;

    virtual bool getGamepadCursorDeflectionMode() const = 0;

    virtual float getVerticalScrollDelta() const = 0;

    virtual bool loadScreenImmediately() const = 0;

    virtual bool getRenderOnlyWhenTopmost() const = 0;

    virtual ::ui::SceneType getSceneType() const = 0;

    virtual bool getShouldBeSkippedDuringAutomation() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
