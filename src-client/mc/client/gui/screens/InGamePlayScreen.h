#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/BaseScreen.h"
#include "mc/client/renderer/game/OnCameraEffectRenderer.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Frustum;
class HitResult;
class IClientInstance;
class IMinecraftGame;
class LevelRenderer;
class Player;
class RectangleArea;
class ScreenContext;
struct FrameRenderObject;
struct FullScreenEffectRenderer;
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
    virtual ~InGamePlayScreen() /*override*/;

    virtual void applyInput(float a) /*override*/;

    virtual void prepareFrame(::ScreenContext& screenContext) /*override*/;

    virtual void render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj) /*override*/;

    virtual void postRenderUpdate(::ScreenContext&) /*override*/;

    virtual void onFocusGained() /*override*/;

    virtual bool renderGameBehind() const /*override*/;

    virtual void tick(int nTick, int maxTick) /*override*/;

    virtual bool isShowingMenu() const /*override*/;

    virtual bool isModal() const /*override*/;

    virtual bool renderOnlyWhenTopMost() const /*override*/;

    virtual bool shouldStealMouse() const /*override*/;

    virtual void handleDirection(::DirectionId directionId, float dx, float dy, ::FocusImpact) /*override*/;

    virtual void handlePointerPressed(bool pressed) /*override*/;

    virtual void init(::ScreenSizeData const& screenSizeData) /*override*/;

    virtual ::std::string getScreenName() const /*override*/;

    virtual bool equalsScreenName(::std::string_view comparison) const /*override*/;

    virtual bool containsScreenNameSubstring(::std::string_view substring) const /*override*/;

    virtual bool isPlayScreen() const /*override*/;

    virtual ::RectangleArea getAreaOfControlByName(::std::string const&) const /*override*/;

    virtual bool forceUpdateActiveSceneStackWhenPushed() const /*override*/;

    virtual bool _isPlayerSuspended() const;

    virtual void
    _renderLevelPrep(::ScreenContext& screenContext, ::LevelRenderer& levelRenderer, ::Actor& cameraEntity);

    virtual void _renderLevel(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    virtual void _preLevelRender(::ScreenContext& screenContext);

    virtual void _postLevelRender(::ScreenContext& screenContext, ::LevelRenderer& levelRenderer);

    virtual bool _shouldRenderFirstPersonObjects(::LevelRenderer& levelRenderer) const;

    virtual bool _updateFreeformPickDirection(
        float,
        ::Vec3&      outSrc,
        ::Vec3&      outDir,
        ::HitResult& outHitResult,
        ::HitResult& outLiquidHit
    );

    virtual void _saveMatrices(::mce::Camera& camera);

    virtual void _renderTransparentFirstPerson3DObjects(::ScreenContext& screenContext, ::LevelRenderer& levelRenderer);

    virtual void _renderItemInHand(::ScreenContext& screenContext, ::Player& player);

    virtual void _prepareCuller(::mce::Camera& camera, ::Frustum& frustumData);

    virtual void _localPlayerTurned(float yawDegrees);

    virtual float _getPickRange();

    virtual bool _shouldPushHUD();

    virtual void _updateInGameCursor();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    InGamePlayScreen(::IMinecraftGame& minecraftGame, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);

    MCAPI void _applyInput_Standard(::InputMode const& inputMode, float xo, float yo, float a);

    MCAPI void _pick(float a);

    MCAPI bool _showHand() const;

    MCAPI void _tryTickRelativeStrafeRotation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec2
    calculateTurnDelta(::IClientInstance const& client, ::Vec2 const& newDelta, ::Vec2 const& currentDelta);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IMinecraftGame& minecraftGame, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $applyInput(float a);

    MCAPI void $prepareFrame(::ScreenContext& screenContext);

    MCAPI void $render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    MCFOLD void $postRenderUpdate(::ScreenContext&);

    MCFOLD void $onFocusGained();

    MCFOLD bool $renderGameBehind() const;

    MCAPI void $tick(int nTick, int maxTick);

    MCFOLD bool $isShowingMenu() const;

    MCFOLD bool $isModal() const;

    MCFOLD bool $renderOnlyWhenTopMost() const;

    MCAPI bool $shouldStealMouse() const;

    MCAPI void $handleDirection(::DirectionId directionId, float dx, float dy, ::FocusImpact);

    MCAPI void $handlePointerPressed(bool pressed);

    MCAPI void $init(::ScreenSizeData const& screenSizeData);

    MCAPI ::std::string $getScreenName() const;

    MCAPI bool $equalsScreenName(::std::string_view comparison) const;

    MCAPI bool $containsScreenNameSubstring(::std::string_view substring) const;

    MCFOLD bool $isPlayScreen() const;

    MCFOLD ::RectangleArea $getAreaOfControlByName(::std::string const&) const;

    MCFOLD bool $forceUpdateActiveSceneStackWhenPushed() const;

    MCAPI bool $_isPlayerSuspended() const;

    MCAPI void $_renderLevelPrep(::ScreenContext& screenContext, ::LevelRenderer& levelRenderer, ::Actor& cameraEntity);

    MCAPI void $_renderLevel(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    MCFOLD void $_preLevelRender(::ScreenContext& screenContext);

    MCAPI void $_postLevelRender(::ScreenContext& screenContext, ::LevelRenderer& levelRenderer);

    MCAPI bool $_shouldRenderFirstPersonObjects(::LevelRenderer& levelRenderer) const;

    MCAPI bool $_updateFreeformPickDirection(
        float,
        ::Vec3&      outSrc,
        ::Vec3&      outDir,
        ::HitResult& outHitResult,
        ::HitResult& outLiquidHit
    );

    MCAPI void $_saveMatrices(::mce::Camera& camera);

    MCAPI void $_renderTransparentFirstPerson3DObjects(::ScreenContext& screenContext, ::LevelRenderer& levelRenderer);

    MCAPI void $_renderItemInHand(::ScreenContext& screenContext, ::Player& player);

    MCAPI void $_prepareCuller(::mce::Camera& camera, ::Frustum& frustumData);

    MCFOLD void $_localPlayerTurned(float yawDegrees);

    MCAPI float $_getPickRange();

    MCFOLD bool $_shouldPushHUD();

    MCFOLD void $_updateInGameCursor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
