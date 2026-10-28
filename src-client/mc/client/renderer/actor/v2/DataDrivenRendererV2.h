#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/ActorShaderManager.h"
#include "mc/client/renderer/actor/v2/ActorAttachableDerivitiveData.h"
#include "mc/client/renderer/actor/v2/ActorDerivitiveData.h"
#include "mc/client/renderer/actor/v2/AnimationData.h"
#include "mc/client/renderer/actor/v2/DataDrivenRendererDerivitiveData.h"
#include "mc/client/renderer/actor/v2/EntityStreamScratch.h"
#include "mc/client/renderer/actor/v2/PreviousTransformationData.h"
#include "mc/client/renderer/actor/v2/RequestedRenderEntries.h"
#include "mc/client/renderer/actor/v2/SharedUniformPhase.h"
#include "mc/client/renderer/shared/FinalRenderingData.h"
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderer;
class DataDrivenRendererRegistry;
class Matrix;
struct GameplayRelatedRenderData;
struct RequestedDataDrivenRender;
// clang-format on

class DataDrivenRendererV2 {
public:
    // DataDrivenRendererV2 inner types declare
    // clang-format off
    struct FrameScratch;
    // clang-format on

    // DataDrivenRendererV2 inner types define
    struct FrameScratch {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 96, ::RequestedRenderEntries>           mRenderEntries;
        ::ll::TypedStorage<8, 128, ::AnimationData>                   mAnimationData;
        ::ll::TypedStorage<8, 336, ::FinalRenderingData>              mFinalRenderingData;
        ::ll::TypedStorage<8, 48, ::SharedUniformPhase>               mUniformData;
        ::ll::TypedStorage<8, 48, ::DataDrivenRendererDerivitiveData> mDataDrivenRendererData;
        ::ll::TypedStorage<8, 72, ::ActorDerivitiveData>              mActorDerivitiveData;
        ::ll::TypedStorage<8, 48, ::ActorAttachableDerivitiveData>    mActorAttachableDerivitiveData;
        ::ll::TypedStorage<8, 72, ::EntityStreamScratch>              mEntityStreams;
        ::ll::TypedStorage<8, 24, ::std::vector<::Matrix>>            mBoneScratchData;
        ::ll::TypedStorage<8, 144, ::PreviousTransformationData>      mNextFrameData;
        ::ll::TypedStorage<8, 24, ::std::vector<uint64>>              mActorIdentities;
        ::ll::TypedStorage<8, 24, ::std::vector<::PreviousTransformationData::BoneRemapping>> mBoneValidation;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void clear();

        MCAPI ~FrameScratch();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DataDrivenRendererV2::FrameScratch>> mFrameScratch;
    ::ll::TypedStorage<8, 8, ::DataDrivenRendererRegistry const*>                     mV2BakedRenderers;
    ::ll::TypedStorage<1, 1, bool>                                                    mRenderActorsWithAttachables;
    ::ll::TypedStorage<1, 1, bool>                                        mVersionLessThanOrEqualToVersion_1_16_210;
    ::ll::TypedStorage<8, 24, ::std::vector<::RequestedDataDrivenRender>> mRequestedActors;
    ::ll::TypedStorage<8, 24, ::std::vector<::Actor*>>                    mOnFireActors;
    ::ll::TypedStorage<8, 24, ::std::vector<::Actor*>>                    mLeashedActors;
    ::ll::TypedStorage<8, 56, ::ActorShaderManager>                       mActorShaderManager;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint generateFrame(::GameplayRelatedRenderData const& renderData);

    MCAPI bool
    tryAddActor(::Actor& actor, ::std::shared_ptr<::ActorRenderer> const& renderer, ::ShadowContext shadowContext);

    MCAPI ~DataDrivenRendererV2();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
