#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/UUID.h"
#include "mc/util/MolangVariableMap.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
class AnimationComponent;
class IClientInstance;
class MinecraftUIRenderContext;
class SerializedSkinRef;
class UIControl;
class UICustomRenderer;
class UIResolvedDef;
class UIScene;
struct OffscreenCaptureData;
// clang-format on

class PaperDollRenderer : public ::MinecraftUICustomRenderer {
public:
    // PaperDollRenderer inner types define
    enum class RotationStyle : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PaperDollRenderer::RotationStyle>                    mRotationStyle;
    ::ll::TypedStorage<4, 4, ::PaperDollRenderer::RotationStyle>                    mPreviousRotationStyle;
    ::ll::TypedStorage<1, 1, bool>                                                  mUseSelectedSkin;
    ::ll::TypedStorage<1, 1, bool>                                                  mPlayerPaperDoll;
    ::ll::TypedStorage<1, 1, bool>                                                  mUseUUID;
    ::ll::TypedStorage<1, 1, bool>                                                  mRespectSkinGuiScale;
    ::ll::TypedStorage<4, 4, float>                                                 mDeltaTime;
    ::ll::TypedStorage<4, 4, float>                                                 mElapsedTime;
    ::ll::TypedStorage<4, 4, float>                                                 mRotation;
    ::ll::TypedStorage<4, 4, float>                                                 mTargetRotation;
    ::ll::TypedStorage<4, 4, float>                                                 mCameraTiltInDeg;
    ::ll::TypedStorage<4, 4, float>                                                 mRotationSpeedMultiplier;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mSkinName;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                          mCurrentPlayerUUID;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                          mPaperDollPackId;
    ::ll::TypedStorage<4, 4, int>                                                   mPaperDollSkinIdx;
    ::ll::TypedStorage<1, 1, bool>                                                  mWaitForSkinInitialize;
    ::ll::TypedStorage<1, 1, bool>                                                  mMarkLocalPlayerAsDirty;
    ::ll::TypedStorage<8, 8, ::IClientInstance*>                                    mClientInstance;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>> mParticleEffectsMap;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>              mAnimationComponent;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>                                  mVariables;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>               mSkinLastUpdated;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PaperDollRenderer() /*override*/;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual void render(
        ::MinecraftUIRenderContext& renderContext,
        ::IClientInstance&          client,
        ::UIControl&                owner,
        int                         pass
    ) /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PaperDollRenderer();

    MCAPI explicit PaperDollRenderer(::UIResolvedDef const& def);

    MCAPI void _addAnimationIfNotRegistered(
        ::std::shared_ptr<::ActorAnimationGroup> actorAnimationGroup,
        ::HashedString const&                    friendlyName
    );

    MCAPI ::AnimationComponent& _getAnimationComponent();

    MCAPI void _render(
        ::MinecraftUIRenderContext& renderContext,
        ::IClientInstance&          client,
        ::UIControl&                owner,
        int,
        ::OffscreenCaptureData const* uiActorCaptureData
    );

    MCAPI ::HashedString const& getActorType(::UIControl& owner) const;

    MCAPI void offscreenCapture(
        ::MinecraftUIRenderContext&   renderContext,
        ::IClientInstance&            client,
        ::UIControl&                  owner,
        int                           pass,
        ::OffscreenCaptureData const& uiActorCaptureData,
        ::SerializedSkinRef const&    skin,
        float                         yRotation
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::UIResolvedDef const& def);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI void
    $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int pass);

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
