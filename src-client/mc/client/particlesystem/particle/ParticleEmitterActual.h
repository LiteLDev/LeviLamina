#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/ActorBindInfo.h"
#include "mc/client/particlesystem/particle/ComponentAccessParticleEmitter.h"
#include "mc/client/particlesystem/particle/ParticleRenderData.h"
#include "mc/deps/core/container/slot_map_handle.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/resources/MERSUniformData.h"
#include "mc/deps/minecraft_renderer/resources/PBRTexturePtrs.h"
#include "mc/util/MolangVariableIndex.h"
#include "mc/util/MolangVariableMap.h"
#include "mc/world/actor/RenderParams.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class ClientFrameUpdateContext;
class Dimension;
class ExpressionNode;
class ParticleRenderData;
class ParticleSystemEngine;
class WeakEntityRef;
struct ActorUniqueID;
struct BrightnessPair;
namespace LightPropagation { class LightVolumeManager; }
namespace ParticleSystem { class ParticleEffect; }
namespace ParticleSystem { class ParticleEmitter; }
namespace ParticleSystem { struct CommonParticle; }
namespace mce { class Color; }
// clang-format on

namespace ParticleSystem {

class ParticleEmitterActual : public ::ParticleSystem::ComponentAccessParticleEmitter {
public:
    // ParticleEmitterActual inner types declare
    // clang-format off
    struct AABBCacheElement;
    // clang-format on

    // ParticleEmitterActual inner types define
    struct AABBCacheElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::AABB>> mAABBList;
        ::ll::TypedStorage<4, 4, uint>                   mLastAccessedFrame;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                    mEffectName;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ParticleSystem::ParticleEffect>> mEffectDataWeakPtr;
    ::ll::TypedStorage<8, 24, ::std::vector<::ParticleSystem::CommonParticle>>   mParticles;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                         mEmitterCurrentLoopAge;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                         mSleepDuration;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                         mEmissionDuration;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                         mTickDeltaTimeAccumulator;
    ::ll::TypedStorage<4, 4, float>                                              mEmitterCurrentTravelDistance;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mEmitterPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mEmitterWorldPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mEmitterLastWorldPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mEmitterWorldVelocity;
    uint                                                                         mEnableRender           : 1;
    uint                                                                         mEnableUpdate           : 1;
    uint                                                                         mManualParticleEmission : 1;
    uint                                                                         mIsValid                : 1;
    uint                                                                         mEmitterExpired         : 1;
    uint                                                                         mFirstUpdate            : 1;
    uint                                                                         mUseActorPosition       : 1;
    uint                                                                         mUseActorRotation       : 1;
    uint                                                                         mUseEmitterVelocity     : 1;
    uint                                                                         mBlockListInitialized   : 1;
    uint                                                          mAreParticlesFromActorButWorldRelative : 1;
    ::ll::TypedStorage<4, 4, int>                                 mEmitterDynamicsFrameCounter;
    ::ll::TypedStorage<4, 4, int>                                 mParticlesDynamicsFrameCounter;
    ::ll::TypedStorage<4, 4, int>                                 mEmitterRenderingFrameCounter;
    ::ll::TypedStorage<4, 4, int>                                 mParticlesRenderingFrameCounter;
    ::ll::TypedStorage<4, 4, int>                                 mNumberOfFramesToInterpolate;
    ::ll::TypedStorage<8, 520, ::RenderParams>                    mRenderParams;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>                mMolangVariableMap;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mEmitterLifetimeVariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mEmitterAgeVariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mEmitterEntityScaleVariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mParticleLifetimeMolangVariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mParticleAgeMolangVariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mParticleRandom1VariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mParticleRandom2VariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mParticleRandom3VariableIndex;
    ::ll::TypedStorage<2, 2, ::MolangVariableIndex>               mParticleRandom4VariableIndex;
    ::ll::TypedStorage<4, 64, ::Matrix>                           mEmitterTransform;
    ::ll::TypedStorage<8, 88, ::ParticleSystem::ActorBindInfo>    mActorBindInfo;
    ::ll::TypedStorage<4, 24, ::AABB>                             mAABB;
    ::ll::TypedStorage<4, 4, float>                               mCullingBufferDistance;
    ::ll::TypedStorage<8, 8, uint64>                              mMaxNumParticles;
    ::ll::TypedStorage<8, 8, uint64>                              mNumParticlesEmitted;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                 mMaterial;
    ::ll::TypedStorage<8, 112, ::PBRTexturePtrs>                  mTexture;
    ::ll::TypedStorage<4, 20, ::std::optional<::MERSUniformData>> mMERSUniforms;
    ::ll::TypedStorage<8, 8, ::std::array<::std::array<::mce::Color, 16>, 16> const&>  mLightTextureData;
    ::ll::TypedStorage<4, 4, ::ParticleRenderData::FaceCameraMode>                     mFaceCameraMode;
    ::ll::TypedStorage<8, 8, ::BlockSource&>                                           mBlockSource;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockType const*>>                mBlocksToCheckAgainst;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LightPropagation::LightVolumeManager>> mLightVolumeManager;
    ::ll::
        TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::ParticleSystem::ParticleEmitterActual::AABBCacheElement>>
                                                     mAABBCache;
    ::ll::TypedStorage<4, 4, uint>                   mCurrentCacheFrame;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>> mCollisionAabbList;
    ::ll::TypedStorage<8, 24, ::std::vector<::ParticleSystem::ComponentAccessParticleEmitter::CollisionHelper>>
                                                      mCollisionSweepList;
    ::ll::TypedStorage<8, 8, ::ParticleSystemEngine&> mParticleSystemEngine;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::HashedString,
            ::Bedrock::slot_map_handle<::std::unique_ptr<::ParticleSystem::ParticleEmitter>, 64, 32>>>
        mSpawnedParticleEmitterList;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEmitterActual& operator=(ParticleEmitterActual const&);
    ParticleEmitterActual(ParticleEmitterActual const&);
    ParticleEmitterActual();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleEmitterActual() /*override*/ = default;

    virtual void setActorBindInfo(::Dimension*, ::ActorUniqueID, ::HashedString const&, ::Vec3 const&) /*override*/;

    virtual void setActorBindInfo(::WeakEntityRef, ::HashedString const&, ::Vec3 const&) /*override*/;

    virtual void setActorBindInfo(::Actor*, ::HashedString const&, ::Vec3 const&) /*override*/;

    virtual void setEnableUpdate(bool) /*override*/;

    virtual void setEnableRender(bool) /*override*/;

    virtual void runInitializationScript(::ExpressionNode const&) /*override*/;

    virtual void onBlockChanged(::BlockPos const&) /*override*/;

    virtual void expire() /*override*/;

    virtual bool isValid() const /*override*/;

    virtual bool isManualEmitter() const /*override*/;

    virtual bool expirationRequested() const /*override*/;

    virtual bool hasExpired() const /*override*/;

    virtual ::AABB const& getAABB() const /*override*/;

    virtual ::HashedString const& getEffectName() const /*override*/;

    virtual uint64 getParticleCount() const /*override*/;

    virtual uint64 getEffectEmitterCount() const /*override*/;

    virtual uint64 getEffectParticleCount() const /*override*/;

    virtual uint64 getTotalEmitterCount() const /*override*/;

    virtual uint64 getTotalParticleCount() const /*override*/;

    virtual ::Vec3 const& getLastCameraPosition() const /*override*/;

    virtual bool getAreParticlesFromActorButWorldRelative() const /*override*/;

    virtual void tick(::std::chrono::nanoseconds const&, float const) /*override*/;

    virtual void frameUpdate(::ClientFrameUpdateContext&) /*override*/;

    virtual void extractForRendering(::ParticleRenderData&, float) /*override*/;

    virtual void setManualParticleEmission(bool) /*override*/;

    virtual void emitParticleManually(::Vec3 const&, ::Vec3 const&, float const) /*override*/;

    virtual ::ParticleSystem::ActorBindInfo getActorBindInfo() const /*override*/;

    virtual ::Vec3 const& getPosition() const /*override*/;

    virtual ::Matrix const& getTransform() const /*override*/;

    virtual ::Vec3 const& getWorldPosition() const /*override*/;

    virtual ::Vec3 const& getWorldVelocity() const /*override*/;

    virtual void setMaxNumParticles(uint64) /*override*/;

    virtual uint64 getMaxNumParticles() const /*override*/;

    virtual uint64 getNumParticles() const /*override*/;

    virtual uint64 getNumParticlesEmitted() const /*override*/;

    virtual void setActorFrameOfReference(bool, bool, bool) /*override*/;

    virtual void setEmissionDuration(float) /*override*/;

    virtual void setSleepDuration(float) /*override*/;

    virtual void setFacing(::HashedString const&) /*override*/;

    virtual bool blockListInitialized() /*override*/;

    virtual void initializeBlockList(::buffer_span<::std::string>) /*override*/;

    virtual bool blockAtPositionIsInList(::BlockPos const&) /*override*/;

    virtual ::BrightnessPair getBrightnessPairAtBlock(::BlockPos const&) const /*override*/;

    virtual ::std::pair<::BrightnessPair, ::BlockPos>
    getBrightestNeighbor(::BlockPos const&, ::ParticleSystem::CommonParticle const&) const /*override*/;

    virtual bool getVisibilityAtBlock(::BlockPos const&) const /*override*/;

    virtual ::mce::Color getGameplayLightForParticle(::ParticleSystem::CommonParticle const&) const /*override*/;

    virtual ::BrightnessPair getBrightnessPairForParticle(::ParticleSystem::CommonParticle const&) const /*override*/;

    virtual ::std::vector<::AABB> const& getCollisionShapesForBlockPosition(::BlockPos const&) /*override*/;

    virtual ::std::vector<::AABB>& getCollisionAabbList() /*override*/;

    virtual ::std::vector<::ParticleSystem::ComponentAccessParticleEmitter::CollisionHelper>&
    getCollisionSweepList() /*override*/;

    virtual void fireEvent(::HashedString const&, ::Vec3 const&, ::Vec3 const&) /*override*/;

    virtual void fireEvent(::HashedString const&, ::Matrix const&, ::Vec3 const&) /*override*/;

    virtual bool getUseActorPosition() const /*override*/;

    virtual bool getUseActorRotation() const /*override*/;

    virtual void getParticleWorldPositionAndVelocity(::ParticleSystem::CommonParticle&, ::Vec3&, ::Vec3&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ParticleSystem
