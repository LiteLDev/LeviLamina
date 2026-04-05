#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/ParticleEmitter.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
class Matrix;
class Vec3;
struct BrightnessPair;
namespace ParticleSystem { struct CommonParticle; }
namespace mce { class Color; }
// clang-format on

namespace ParticleSystem {

class ComponentAccessParticleEmitter : public ::ParticleSystem::ParticleEmitter {
public:
    // ComponentAccessParticleEmitter inner types declare
    // clang-format off
    struct CollisionHelper;
    // clang-format on

    // ComponentAccessParticleEmitter inner types define
    struct CollisionHelper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 24, ::AABB> mHitShape;
        ::ll::TypedStorage<4, 4, float>   mHitAlpha;
        ::ll::TypedStorage<1, 1, uchar>   mHitAxis;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mEmissionAccumulator;
    ::ll::TypedStorage<4, 4, float> mCurrentEmitRate;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Vec3 const& getPosition() const = 0;

    virtual ::Matrix const& getTransform() const = 0;

    virtual ::Vec3 const& getWorldPosition() const = 0;

    virtual ::Vec3 const& getWorldVelocity() const = 0;

    virtual void setMaxNumParticles(uint64 num) = 0;

    virtual uint64 getMaxNumParticles() const = 0;

    virtual uint64 getNumParticles() const = 0;

    virtual uint64 getNumParticlesEmitted() const = 0;

    virtual void setActorFrameOfReference(bool useActorPosition, bool useActorRotation, bool useEmitterVelocity) = 0;

    virtual void setEmitRate(float emitRate);

    virtual float getEmitRate() const;

    virtual void setEmissionDuration(float activeTime) = 0;

    virtual float& getEmissionAccumulator();

    virtual void setSleepDuration(float sleepTime) = 0;

    virtual void setFacing(::HashedString const& facing) = 0;

    virtual bool blockListInitialized() = 0;

    virtual void initializeBlockList(::buffer_span<::std::string> blockList) = 0;

    virtual bool blockAtPositionIsInList(::BlockPos const& blockPos) = 0;

    virtual ::BrightnessPair getBrightnessPairAtBlock(::BlockPos const& blockPosition) const = 0;

    virtual ::std::pair<::BrightnessPair, ::BlockPos>
    getBrightestNeighbor(::BlockPos const& blockPosition, ::ParticleSystem::CommonParticle const& particle) const = 0;

    virtual bool getVisibilityAtBlock(::BlockPos const& blockPosition) const = 0;

    virtual ::mce::Color getGameplayLightForParticle(::ParticleSystem::CommonParticle const& particle) const = 0;

    virtual ::BrightnessPair getBrightnessPairForParticle(::ParticleSystem::CommonParticle const& particle) const = 0;

    virtual ::std::vector<::AABB> const& getCollisionShapesForBlockPosition(::BlockPos const& blockPosition) = 0;

    virtual ::std::vector<::AABB>& getCollisionAabbList() = 0;

    virtual ::std::vector<::ParticleSystem::ComponentAccessParticleEmitter::CollisionHelper>&
    getCollisionSweepList() = 0;

    virtual void fireEvent(::HashedString const& eventName, ::Vec3 const& position, ::Vec3 const& velocity) = 0;

    virtual void fireEvent(::HashedString const& eventName, ::Matrix const& transform, ::Vec3 const& velocity) = 0;

    virtual bool getUseActorPosition() const = 0;

    virtual bool getUseActorRotation() const = 0;

    virtual void getParticleWorldPositionAndVelocity(
        ::ParticleSystem::CommonParticle& particle,
        ::Vec3&                           particleWorldPosition,
        ::Vec3&                           particleWorldVelocity
    ) = 0;

    virtual bool getAreParticlesFromActorButWorldRelative() const = 0;

    virtual ~ComponentAccessParticleEmitter() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setEmitRate(float emitRate);

    MCFOLD float $getEmitRate() const;

    MCFOLD float& $getEmissionAccumulator();
    // NOLINTEND
};

} // namespace ParticleSystem
