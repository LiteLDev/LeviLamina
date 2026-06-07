#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/minecraft_camera/ICameraAPI.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class EntityRegistry;
class IClientInstance;
class Vec2;
class Vec3;
// clang-format on

class CameraAPI : public ::ICameraAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClientInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAPI& operator=(CameraAPI const&);
    CameraAPI(CameraAPI const&);
    CameraAPI();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::Vec3> tryGetActorRelativeLocation(
        ::WeakRef<::EntityContext> const     actorRef,
        ::SharedTypes::Legacy::ActorLocation actorLoc
    ) const /*override*/;

    virtual ::std::optional<::Vec3>
    tryGetActorInterpolatedPosition(::WeakRef<::EntityContext> const actorRef, float interpolationFactor) const
        /*override*/;

    virtual ::std::optional<::Vec2> tryGetActorRotation(::WeakRef<::EntityContext const> const actorRef) const
        /*override*/;

    virtual ::std::optional<::Vec3> tryGetActorPositionDelta(::WeakRef<::EntityContext> const actorRef) const
        /*override*/;

    virtual ::std::optional<::ICameraAPI::ShakeParameters> tryGetShakeParameters(
        ::WeakRef<::EntityContext> actorRef,
        float                      noiseMultiplier,
        float                      frequency,
        float                      amplitude
    ) const /*override*/;

    virtual ::std::optional<float> tryGetFOV() const /*override*/;

    virtual ::ICameraAPI::CameraMovementData getCameraMovementVector() const /*override*/;

    virtual float getSecondsSinceProgramStart() const /*override*/;

    virtual ::WeakRef<::EntityContext> getDefaultCameraTarget() const /*override*/;

    virtual ::WeakRef<::EntityContext> getWeakEntity(int64 actorId) const /*override*/;

    virtual ::WeakRef<::EntityRegistry> getRegistryWeakEntity_DONOTUSE() const /*override*/;

    virtual float getFrameAlpha() const /*override*/;

    virtual ::glm::vec2 getViewportSize() const /*override*/;

    virtual ::std::optional<::Vec3> clip(::glm::vec3 const& A, ::glm::vec3 const& B) /*override*/;

    virtual bool isInWall(::Vec3 const& pos) const /*override*/;

    virtual bool isAlive(::WeakRef<::EntityContext> const actorRef) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CameraAPI(::IClientInstance& client);

    MCFOLD ::Actor const* _getActor(::WeakRef<::EntityContext> actorRef) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IClientInstance& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::Vec3> $tryGetActorRelativeLocation(
        ::WeakRef<::EntityContext> const     actorRef,
        ::SharedTypes::Legacy::ActorLocation actorLoc
    ) const;

    MCAPI ::std::optional<::Vec3>
    $tryGetActorInterpolatedPosition(::WeakRef<::EntityContext> const actorRef, float interpolationFactor) const;

    MCAPI ::std::optional<::Vec2> $tryGetActorRotation(::WeakRef<::EntityContext const> const actorRef) const;

    MCAPI ::std::optional<::Vec3> $tryGetActorPositionDelta(::WeakRef<::EntityContext> const actorRef) const;

    MCAPI ::std::optional<::ICameraAPI::ShakeParameters> $tryGetShakeParameters(
        ::WeakRef<::EntityContext> actorRef,
        float                      noiseMultiplier,
        float                      frequency,
        float                      amplitude
    ) const;

    MCAPI ::std::optional<float> $tryGetFOV() const;

    MCAPI ::ICameraAPI::CameraMovementData $getCameraMovementVector() const;

    MCFOLD float $getSecondsSinceProgramStart() const;

    MCAPI ::WeakRef<::EntityContext> $getDefaultCameraTarget() const;

    MCAPI ::WeakRef<::EntityContext> $getWeakEntity(int64 actorId) const;

    MCAPI ::WeakRef<::EntityRegistry> $getRegistryWeakEntity_DONOTUSE() const;

    MCFOLD float $getFrameAlpha() const;

    MCAPI ::glm::vec2 $getViewportSize() const;

    MCAPI ::std::optional<::Vec3> $clip(::glm::vec3 const& A, ::glm::vec3 const& B);

    MCAPI bool $isInWall(::Vec3 const& pos) const;

    MCAPI bool $isAlive(::WeakRef<::EntityContext> const actorRef) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
