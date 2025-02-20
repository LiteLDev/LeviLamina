#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/world/actor/animation/AttachableSlotIndex.h"
#include "mc/world/response/ResponseParameterContext.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderData;
class AnimationComponent;
class BaseActorRenderContext;
class Block;
class BlockPos;
class BlockSource;
class DataDrivenModel;
class IBlockWorldGenAPI;
class ILevel;
class ItemStackBase;
class MolangVariableMap;
class Vec3;
struct MolangScriptArg;
namespace ParticleSystem { class ParticleEmitter; }
// clang-format on

class RenderParams {
public:
    // RenderParams inner types declare
    // clang-format off
    struct Flags;
    // clang-format on

    // RenderParams inner types define
    struct Flags {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk5467f0;
        // NOLINTEND

    public:
        // prevent constructor by default
        Flags& operator=(Flags const&);
        Flags(Flags const&);
        Flags();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext*>           mBaseActorRenderContext;
    ::ll::TypedStorage<8, 8, ::MolangVariableMap*>                mVariables;
    ::ll::TypedStorage<8, 8, ::AnimationComponent*>               mAnimationComponent;
    ::ll::TypedStorage<8, 8, ::AnimationComponent*>               mRootAnimationComponent;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenModel>> mModel;
    ::ll::TypedStorage<4, 4, ::ResponseParameterContext>          mSourceContext;
    ::ll::TypedStorage<8, 8, ::Actor*>                            mActor;
    ::ll::TypedStorage<8, 8, ::Actor*>                            mOther;
    ::ll::TypedStorage<8, 8, ::Actor*>                            mPlayer;
    ::ll::TypedStorage<8, 8, ::Actor*>                            mTarget;
    ::ll::TypedStorage<8, 8, ::Actor*>                            mParent;
    ::ll::TypedStorage<8, 8, ::Actor*>                            mBaby;
    ::ll::TypedStorage<8, 8, ::Actor*>                            mDamager;
    ::ll::TypedStorage<8, 8, ::ILevel*>                           mLevel;
    ::ll::TypedStorage<8, 8, ::ItemStackBase*>                    mItemStackBasePtr;
    ::ll::TypedStorage<8, 8, ::Block const*>                      mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>                         mBlockPos;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                      mBlockSource;
    ::ll::TypedStorage<8, 8, ::ActorRenderData*>                  mActorRenderData;
    ::ll::TypedStorage<8, 8, ::ParticleSystem::ParticleEmitter*>  mParticleEmitter;
    ::ll::TypedStorage<8, 8, ::IBlockWorldGenAPI*>                mBlockPlacementTarget;
    ::ll::TypedStorage<2, 2, ushort>                              mSubRenderLayerIndex;
    ::ll::TypedStorage<8, 64, ::std::function<float()>>           mRandomFunction;
    ::ll::TypedStorage<4, 4, float>                               mCameraDistance;
    ::ll::TypedStorage<4, 4, ::ShadowContext>                     mShadowContext;
    ::ll::TypedStorage<4, 32, float[8]>                           mParams;
    ::ll::TypedStorage<8, 88, ::MolangScriptArg>                  mThisValue;
    ::ll::TypedStorage<8, 88, ::MolangScriptArg>                  mScratchValue;
    ::ll::TypedStorage<4, 4, ::RenderParams::Flags>               mFlags;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mClickPos;
    ::ll::TypedStorage<4, 4, ::AttachableSlotIndex>               mSlotIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RenderParams();

    MCAPI RenderParams(::RenderParams&&);

    MCAPI RenderParams(::RenderParams const&);

    MCAPI ::Actor* getActorTarget(::SharedTypes::Legacy::FilterSubject subject) const;

    MCAPI ::RenderParams& init(
        ::BaseActorRenderContext*            actor,
        ::Actor*                             animationComponent,
        ::AnimationComponent*                variableMap,
        ::MolangVariableMap*                 model,
        ::std::shared_ptr<::DataDrivenModel> modelScale,
        float                                baseActorRenderContext,
        float                                frameAlpha
    );

    MCAPI ::RenderParams& operator=(::RenderParams const&);

    MCAPI ::RenderParams& operator=(::RenderParams&&);

    MCAPI ~RenderParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::RenderParams&&);

    MCAPI void* $ctor(::RenderParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
