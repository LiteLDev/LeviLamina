#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/minecraft_camera/CameraShakeType.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
class Vec2;
// clang-format on

class ICameraAPI {
public:
    // ICameraAPI inner types declare
    // clang-format off
    struct CameraMovementData;
    struct ShakeParameters;
    // clang-format on

    // ICameraAPI inner types define
    enum class CameraMovementSpeed : int {
        Fast = 0,
        Slow = 1,
    };

    struct CameraMovementData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>                           mDirection;
        ::ll::TypedStorage<4, 4, ::ICameraAPI::CameraMovementSpeed> mSpeed;
        // NOLINTEND
    };

    struct ShakeParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>           mShakeNoise;
        ::ll::TypedStorage<1, 1, ::CameraShakeType> mShakeType;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICameraAPI() = default;

    virtual ::std::optional<::Vec3> tryGetActorRelativeLocation(
        ::WeakRef<::EntityContext> const     actorRef,
        ::SharedTypes::Legacy::ActorLocation actorLoc
    ) const = 0;

    virtual ::std::optional<::Vec3>
    tryGetActorInterpolatedPosition(::WeakRef<::EntityContext> actorRef, float interpolationFactor) const = 0;

    virtual ::std::optional<::Vec2> tryGetActorRotation(::WeakRef<::EntityContext const> const actorRef) const = 0;

    virtual ::std::optional<::Vec3> tryGetActorPositionDelta(::WeakRef<::EntityContext> actorRef) const = 0;

    virtual ::std::optional<::ICameraAPI::ShakeParameters> tryGetShakeParameters(
        ::WeakRef<::EntityContext> actorRef,
        float                      noiseMultiplier,
        float                      frequency,
        float                      amplitude
    ) const = 0;

    virtual ::std::optional<float> tryGetFOV() const = 0;

    virtual ::ICameraAPI::CameraMovementData getCameraMovementVector() const = 0;

    virtual float getSecondsSinceProgramStart() const = 0;

    virtual ::WeakRef<::EntityContext> getDefaultCameraTarget() const = 0;

    virtual ::WeakRef<::EntityContext> getWeakEntity(int64 actorId) const = 0;

    virtual ::WeakRef<::EntityRegistry> getRegistryWeakEntity_DONOTUSE() const = 0;

    virtual float getFrameAlpha() const = 0;

    virtual ::glm::vec2 getViewportSize() const = 0;

    virtual ::std::optional<::Vec3> clip(::glm::vec3 const& A, ::glm::vec3 const& B) = 0;

    virtual bool isInWall(::Vec3 const& pos) const = 0;

    virtual bool isAlive(::WeakRef<::EntityContext> const actorRef) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
