#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CommandPositionFloat;
class CompoundTag;
class Dimension;
class Level;
class ServerLevel;
// clang-format on

class ExecuteContextCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mExecutionEntity;
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>             mRotation;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mPosition;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mRotationEntity;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mPositionEntity;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorLocation> mAnchor;
    ::ll::TypedStorage<4, 4, ::DimensionType>                      mDimensionType;
    ::ll::TypedStorage<8, 8, ::Level&>                             mLevel;
    ::ll::TypedStorage<4, 4, int>                                  mVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    ExecuteContextCommandOrigin& operator=(ExecuteContextCommandOrigin const&);
    ExecuteContextCommandOrigin(ExecuteContextCommandOrigin const&);
    ExecuteContextCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getRequestId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::BlockPos getBlockPosition() const /*override*/;

    virtual ::Vec3 getWorldPosition() const /*override*/;

    virtual ::std::optional<::Vec2> getRotation() const /*override*/;

    virtual ::Actor* getEntity() const /*override*/;

    virtual ::CommandPermissionLevel getPermissionsLevel() const /*override*/;

    virtual ::CommandOriginType getOriginType() const /*override*/;

    virtual bool isValid() const /*override*/;

    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;

    virtual ::CompoundTag serialize() const /*override*/;

    virtual void updateValues() /*override*/;

    virtual ::Vec3 const getExecutePosition(int version, ::CommandPositionFloat const& commandPosition) const
        /*override*/;

    virtual ::Level* getLevel() const /*override*/;

    virtual ::Dimension* getDimension() const /*override*/;

    virtual ~ExecuteContextCommandOrigin() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::ExecuteContextCommandOrigin> load(::CompoundTag const& tag, ::ServerLevel& level);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::string const& $getRequestId() const;

    MCAPI ::std::string $getName() const;

    MCFOLD ::BlockPos $getBlockPosition() const;

    MCAPI ::Vec3 $getWorldPosition() const;

    MCAPI ::std::optional<::Vec2> $getRotation() const;

    MCAPI ::Actor* $getEntity() const;

    MCFOLD ::CommandPermissionLevel $getPermissionsLevel() const;

    MCFOLD ::CommandOriginType $getOriginType() const;

    MCAPI bool $isValid() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCAPI ::CompoundTag $serialize() const;

    MCAPI void $updateValues();

    MCAPI ::Vec3 const $getExecutePosition(int version, ::CommandPositionFloat const& commandPosition) const;

    MCFOLD ::Level* $getLevel() const;

    MCAPI ::Dimension* $getDimension() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
