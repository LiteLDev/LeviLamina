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

    virtual void setMaxNumParticles(uint64) = 0;

    virtual uint64 getMaxNumParticles() const = 0;

    virtual uint64 getNumParticles() const = 0;

    virtual uint64 getNumParticlesEmitted() const = 0;

    virtual void setActorFrameOfReference(bool, bool, bool) = 0;

    virtual void setEmitRate(float emitRate);

    virtual float getEmitRate() const;

    virtual void setEmissionDuration(float) = 0;

    virtual float& getEmissionAccumulator();

    virtual void setSleepDuration(float) = 0;

    virtual void setFacing(::HashedString const&) = 0;

    virtual bool blockListInitialized() = 0;

    virtual void initializeBlockList(::buffer_span<::std::string>) = 0;

    virtual bool blockAtPositionIsInList(::BlockPos const&) = 0;

    virtual ::BrightnessPair getBrightnessPairAtBlock(::BlockPos const&) const = 0;

    virtual ::BrightnessPair getMaxBrightnessPairAroundBlock(
        ::BlockPos const&,
        ::std::optional<::std::pair<::BlockPos, ::BlockPos>> const&
    ) const = 0;

    virtual bool getVisibilityAtBlock(::BlockPos const&) const = 0;

    virtual ::mce::Color getGameplayLightForParticle(::ParticleSystem::CommonParticle const&) const = 0;

    virtual ::BrightnessPair getBrightnessPairForParticle(::ParticleSystem::CommonParticle const&) const = 0;

    virtual ::std::vector<::AABB> const& getCollisionShapesForBlockPosition(::BlockPos const&) = 0;

    virtual ::std::vector<::AABB>& getCollisionAabbList() = 0;

    virtual ::std::vector<::ParticleSystem::ComponentAccessParticleEmitter::CollisionHelper>&
    getCollisionSweepList() = 0;

    virtual void fireEvent(::HashedString const&, ::Vec3 const&, ::Vec3 const&) = 0;

    virtual void fireEvent(::HashedString const&, ::Matrix const&, ::Vec3 const&) = 0;

    virtual bool getUseActorPosition() const = 0;

    virtual bool getUseActorRotation() const = 0;

    virtual void getParticleWorldPositionAndVelocity(::ParticleSystem::CommonParticle&, ::Vec3&, ::Vec3&) = 0;

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
