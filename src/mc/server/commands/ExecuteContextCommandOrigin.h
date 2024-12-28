#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CommandPositionFloat;
class CompoundTag;
class Dimension;
class Level;
class ServerLevel;
class Vec2;
class Vec3;
struct ActorUniqueID;
// clang-format on

class ExecuteContextCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkda6576;
    ::ll::UntypedStorage<4, 12> mUnk653f48;
    ::ll::UntypedStorage<4, 12> mUnkef108c;
    ::ll::UntypedStorage<8, 8>  mUnk7a9c6b;
    ::ll::UntypedStorage<8, 8>  mUnk537eb8;
    ::ll::UntypedStorage<4, 4>  mUnk32fbb7;
    ::ll::UntypedStorage<4, 4>  mUnk6bc1f5;
    ::ll::UntypedStorage<8, 8>  mUnk5bc335;
    ::ll::UntypedStorage<4, 4>  mUnkb8eb4f;
    // NOLINTEND

public:
    // prevent constructor by default
    ExecuteContextCommandOrigin& operator=(ExecuteContextCommandOrigin const&);
    ExecuteContextCommandOrigin(ExecuteContextCommandOrigin const&);
    ExecuteContextCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getRequestId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 3
    virtual ::BlockPos getBlockPosition() const /*override*/;

    // vIndex: 4
    virtual ::Vec3 getWorldPosition() const /*override*/;

    // vIndex: 5
    virtual ::std::optional<::Vec2> getRotation() const /*override*/;

    // vIndex: 8
    virtual ::Actor* getEntity() const /*override*/;

    // vIndex: 9
    virtual ::CommandPermissionLevel getPermissionsLevel() const /*override*/;

    // vIndex: 23
    virtual ::CommandOriginType getOriginType() const /*override*/;

    // vIndex: 30
    virtual bool isValid() const /*override*/;

    // vIndex: 10
    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;

    // vIndex: 29
    virtual ::CompoundTag serialize() const /*override*/;

    // vIndex: 27
    virtual void updateValues() /*override*/;

    // vIndex: 28
    virtual ::Vec3 const getExecutePosition(int version, ::CommandPositionFloat const& commandPosition) const
        /*override*/;

    // vIndex: 6
    virtual ::Level* getLevel() const /*override*/;

    // vIndex: 7
    virtual ::Dimension* getDimension() const /*override*/;

    // vIndex: 0
    virtual ~ExecuteContextCommandOrigin() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExecuteContextCommandOrigin(
        ::ActorUniqueID                executionEntity,
        ::Vec3 const&                  position,
        ::std::optional<::Vec2> const& rotation,
        ::ActorUniqueID                rotationActor,
        ::ActorUniqueID                positionActor,
        ::ActorLocation                anchor,
        ::DimensionType                dimensionType,
        ::Level&                       level,
        int                            version
    );

    MCAPI ::Actor const* getPositionEntity();

    MCAPI void setDimension(::Dimension const& dimension);

    MCAPI void setDimension(::DimensionType const& dimensionType);

    MCAPI void setExecutionEntity(::Actor const& entity);

    MCAPI void setPosition(::Vec3 const& position);

    MCAPI void setPositionEntity(::Actor const& entity);

    MCAPI void setRotation(::Vec2 const& rotation);

    MCAPI void setRotationEntity(::Actor const& entity);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::ExecuteContextCommandOrigin> load(::CompoundTag const& tag, ::ServerLevel& level);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorUniqueID                executionEntity,
        ::Vec3 const&                  position,
        ::std::optional<::Vec2> const& rotation,
        ::ActorUniqueID                rotationActor,
        ::ActorUniqueID                positionActor,
        ::ActorLocation                anchor,
        ::DimensionType                dimensionType,
        ::Level&                       level,
        int                            version
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getRequestId() const;

    MCAPI ::std::string $getName() const;

    MCAPI ::BlockPos $getBlockPosition() const;

    MCAPI ::Vec3 $getWorldPosition() const;

    MCAPI ::std::optional<::Vec2> $getRotation() const;

    MCAPI ::Actor* $getEntity() const;

    MCAPI ::CommandPermissionLevel $getPermissionsLevel() const;

    MCAPI ::CommandOriginType $getOriginType() const;

    MCAPI bool $isValid() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCAPI ::CompoundTag $serialize() const;

    MCAPI void $updateValues();

    MCAPI ::Vec3 const $getExecutePosition(int version, ::CommandPositionFloat const& commandPosition) const;

    MCAPI ::Level* $getLevel() const;

    MCAPI ::Dimension* $getDimension() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
