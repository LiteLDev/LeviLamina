#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
class Vec2;
class Vec3;
// clang-format on

class ICameraAPI {
public:
    // ICameraAPI inner types declare
    // clang-format off
    struct CameraMovementData;
    struct ShakeParameters;
    // clang-format on
    
    // ICameraAPI inner types define
    struct ShakeParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkb19a92;
        ::ll::UntypedStorage<1, 1> mUnk3780d8;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ShakeParameters& operator=(ShakeParameters const&);
        ShakeParameters(ShakeParameters const&);
        ShakeParameters();
    
    };
    
    enum class CameraMovementSpeed : int {
        Fast = 0,
        Slow = 1,
    };
    
    struct CameraMovementData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkaa59b5;
        ::ll::UntypedStorage<4, 4> mUnka686c9;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        CameraMovementData& operator=(CameraMovementData const&);
        CameraMovementData(CameraMovementData const&);
        CameraMovementData();
    
    };
    
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ICameraAPI() = default;

    // vIndex: 1
    virtual ::std::optional<::Vec3> tryGetActorRelativeLocation(::WeakRef<::EntityContext> const, ::SharedTypes::Legacy::ActorLocation) const = 0;

    // vIndex: 2
    virtual ::std::optional<::Vec3> tryGetActorInterpolatedPosition(::WeakRef<::EntityContext>, float) const = 0;

    // vIndex: 3
    virtual ::std::optional<::Vec2> tryGetActorRotation(::WeakRef<::EntityContext const> const) const = 0;

    // vIndex: 4
    virtual ::std::optional<::Vec3> tryGetActorPositionDelta(::WeakRef<::EntityContext>) const = 0;

    // vIndex: 5
    virtual ::std::optional<::ICameraAPI::ShakeParameters> tryGetShakeParameters(::WeakRef<::EntityContext>, float, float, float) const = 0;

    // vIndex: 6
    virtual ::std::optional<float> tryGetFOV() const = 0;

    // vIndex: 7
    virtual ::ICameraAPI::CameraMovementData getCameraMovementVector() const = 0;

    // vIndex: 8
    virtual float getSecondsSinceProgramStart() const = 0;

    // vIndex: 9
    virtual ::WeakRef<::EntityContext> getDefaultCameraTarget() const = 0;

    // vIndex: 10
    virtual ::WeakRef<::EntityContext> getWeakEntity(int64) const = 0;

    // vIndex: 11
    virtual ::WeakRef<::EntityRegistry> getRegistryWeakEntity_DONOTUSE() const = 0;

    // vIndex: 12
    virtual float getFrameAlpha() const = 0;

    // vIndex: 13
    virtual ::glm::vec2 getViewportSize() const = 0;

    // vIndex: 14
    virtual ::std::optional<::Vec3> clip(::glm::vec3 const&, ::glm::vec3 const&) = 0;

    // vIndex: 15
    virtual bool isInWall(::Vec3 const&) const = 0;

    // vIndex: 16
    virtual bool isAlive(::WeakRef<::EntityContext> const) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
