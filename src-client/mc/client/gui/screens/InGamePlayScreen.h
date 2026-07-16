#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/BaseScreen.h"
#include "mc/client/renderer/game/OnCameraEffectRenderer.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Frustum;
class FullScreenEffectRenderer;
class HitResult;
class IClientInstance;
class IMinecraftGame;
class LevelRenderer;
class Player;
class RectangleArea;
class ScreenContext;
struct FrameRenderObject;
struct ScreenSizeData;
namespace mce { class Camera; }
// clang-format on

class InGamePlayScreen : public ::BaseScreen {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                                           mPickDirection;
    ::ll::TypedStorage<4, 8, ::Vec2>                                            mTurnDelta;
    ::ll::TypedStorage<4, 8, ::Vec2>                                            mLastPlayerRotation;
    ::ll::TypedStorage<4, 8, ::Vec2>                                            mLastPlayerAngleVel;
    ::ll::TypedStorage<4, 8, ::Vec2>                                            mLastHandRotation;
    ::ll::TypedStorage<4, 8, ::Vec2>                                            mLastHandVel;
    ::ll::TypedStorage<8, 8, double>                                            mLastTime;
    ::ll::TypedStorage<8, 8, double>                                            mLastVRStepSoundTime;
    ::ll::TypedStorage<4, 12, ::Vec3>                                           mPreviousDirectTurnVector;
    ::ll::TypedStorage<4, 4, float>                                             mTapTurnAmountRadians;
    ::ll::TypedStorage<4, 4, float>                                             mLastDirectTurnAmountRadians;
    ::ll::TypedStorage<4, 4, float>                                             mRotXTouch;
    ::ll::TypedStorage<4, 4, float>                                             mRotYTouch;
    ::ll::TypedStorage<4, 4, float>                                             mRotXTouchLast;
    ::ll::TypedStorage<4, 4, float>                                             mRotYTouchLast;
    ::ll::TypedStorage<4, 4, float>                                             mLastTickT;
    ::ll::TypedStorage<4, 4, int>                                               mTick;
    ::ll::TypedStorage<1, 1, bool>                                              mTapTurnActive;
    ::ll::TypedStorage<1, 1, bool>                                              mPrevTapTurnActive;
    ::ll::TypedStorage<1, 1, bool>                                              mPrevAtBorder;
    ::ll::TypedStorage<1, 1, bool>                                              mRollTurnTempActivation;
    ::ll::TypedStorage<4, 4, float>                                             mDXLast;
    ::ll::TypedStorage<4, 4, float>                                             mDYLast;
    ::ll::TypedStorage<4, 12, ::Vec3>                                           mLastHitLocation;
    ::ll::TypedStorage<1, 1, bool>                                              mbHitLocationRecorded;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FullScreenEffectRenderer>>     mFullscreenEffectRenderer;
    ::ll::TypedStorage<8, 176, ::OnCameraEffectRenderer>                        mOnCameraEffectRenderer;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                 mMinecraft;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    InGamePlayScreen& operator=(InGamePlayScreen const&);
    InGamePlayScreen(InGamePlayScreen const&);
    InGamePlayScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InGamePlayScreen() /*override*/ = default;

    virtual void applyInput(float a) /*override*/;

    virtual void prepareFrame(::ScreenContext& screenContext) /*override*/;

    virtual void render(::ScreenContext&, ::FrameRenderObject const&) /*override*/;

    virtual void postRenderUpdate(::ScreenContext& screenContext) /*override*/;

    virtual void onFocusGained() /*override*/;

    virtual bool renderGameBehind() const /*override*/;

    virtual void tick(int nTick, int maxTick) /*override*/;

    virtual bool isShowingMenu() const /*override*/;

    virtual bool isModal() const /*override*/;

    virtual bool renderOnlyWhenTopMost() const /*override*/;

    virtual bool shouldStealMouse() const /*override*/;

    virtual void handleDirection(::DirectionId directionId, float x, float y, ::FocusImpact focusImpact) /*override*/;

    virtual void handlePointerPressed(bool pressed) /*override*/;

    virtual void init(::ScreenSizeData const& screenSizeData) /*override*/;

    virtual ::std::string getScreenName() const /*override*/;

    virtual bool equalsScreenName(::std::string_view) const /*override*/;

    virtual bool containsScreenNameSubstring(::std::string_view) const /*override*/;

    virtual bool isPlayScreen() const /*override*/;

    virtual ::RectangleArea getAreaOfControlByName(::std::string const&) const /*override*/;

    virtual bool forceUpdateActiveSceneStackWhenPushed() const /*override*/;

    virtual bool _isPlayerSuspended() const;

    virtual void _renderLevelPrep(::ScreenContext&, ::LevelRenderer&, ::Actor&);

    virtual void _renderLevel(::ScreenContext&, ::FrameRenderObject const&);

    virtual void _preLevelRender(::ScreenContext&);

    virtual void _postLevelRender(::ScreenContext&, ::LevelRenderer&);

    virtual bool _shouldRenderFirstPersonObjects(::LevelRenderer&) const;

    virtual bool _updateFreeformPickDirection(float, ::Vec3&, ::Vec3&, ::HitResult&, ::HitResult&);

    virtual void _saveMatrices(::mce::Camera&);

    virtual void _renderTransparentFirstPerson3DObjects(::ScreenContext&, ::LevelRenderer&);

    virtual void _renderItemInHand(::ScreenContext&, ::Player&);

    virtual void _prepareCuller(::mce::Camera&, ::Frustum&);

    virtual void _localPlayerTurned(float);

    virtual float _getPickRange();

    virtual bool _shouldPushHUD();

    virtual void _updateInGameCursor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
