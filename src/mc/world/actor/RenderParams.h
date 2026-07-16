#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"
#include "mc/util/MolangScriptArg.h"
#include "mc/world/actor/animation/AttachableSlotIndex.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/response/ResponseParameterContext.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AnimationComponent;
class Block;
class BlockSource;
class IBlockWorldGenAPI;
class ILevel;
class ItemStackBase;
class MolangVariableMap;
class ActorRenderData;
class BaseActorRenderContext;
class DataDrivenModel;
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
        ::ll::TypedStorage<4, 4, uint> mIsChild;
        // NOLINTEND
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
    ::ll::TypedStorage<1, 1, ::ShadowContext>                     mShadowContext;
    ::ll::TypedStorage<4, 32, float[8]>                           mParams;
#ifdef LL_PLAT_S
    ::ll::TypedStorage<8, 88, ::MolangScriptArg> mThisValue;
    ::ll::TypedStorage<8, 88, ::MolangScriptArg> mScratchValue;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 96, ::MolangScriptArg> mThisValue;
    ::ll::TypedStorage<8, 96, ::MolangScriptArg> mScratchValue;
#endif
    ::ll::TypedStorage<4, 4, float>                 mHeldItemScale;
    ::ll::TypedStorage<4, 4, ::RenderParams::Flags> mFlags;
    ::ll::TypedStorage<4, 12, ::Vec3>               mClickPos;
    ::ll::TypedStorage<4, 4, ::AttachableSlotIndex> mSlotIndex;
    ::ll::TypedStorage<1, 1, bool>                  mIsDitheringEnabled;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    RenderParams& operator=(RenderParams const&);
    RenderParams();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    RenderParams();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI RenderParams(::RenderParams const&);

    MCAPI ::RenderParams& init(
        ::BaseActorRenderContext*            baseActorRenderContext,
        ::Actor*                             actor,
        ::AnimationComponent*                animationComponent,
        ::MolangVariableMap*                 variableMap,
        ::std::shared_ptr<::DataDrivenModel> model,
        float                                frameAlpha,
        float                                modelScale,
        bool                                 isDitheringEnabled
    );

#ifdef LL_PLAT_C
    MCAPI ::RenderParams& operator=(::RenderParams const&);
#endif

    MCAPI ~RenderParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::RenderParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
