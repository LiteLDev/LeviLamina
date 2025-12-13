#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class Dimension;
class Level;
class Vec2;
class Vec3;
// clang-format on

class ActorCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mEntityId;
    ::ll::TypedStorage<8, 8, ::Level&>        mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorCommandOrigin& operator=(ActorCommandOrigin const&);
    ActorCommandOrigin(ActorCommandOrigin const&);
    ActorCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorCommandOrigin() /*override*/ = default;

    virtual ::std::string const& getRequestId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::BlockPos getBlockPosition() const /*override*/;

    virtual ::Vec3 getWorldPosition() const /*override*/;

    virtual ::std::optional<::Vec2> getRotation() const /*override*/;

    virtual ::Level* getLevel() const /*override*/;

    virtual ::Dimension* getDimension() const /*override*/;

    virtual ::Actor* getEntity() const /*override*/;

    virtual ::CommandPermissionLevel getPermissionsLevel() const /*override*/;

    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;

    virtual bool isSelectorExpansionAllowed() const /*override*/;

    virtual ::CommandOriginType getOriginType() const /*override*/;

    virtual ::CompoundTag serialize() const /*override*/;

    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorCommandOrigin(::Actor& origin);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor& origin);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::string const& $getRequestId() const;

    MCAPI ::std::string $getName() const;

    MCAPI ::BlockPos $getBlockPosition() const;

    MCAPI ::Vec3 $getWorldPosition() const;

    MCAPI ::std::optional<::Vec2> $getRotation() const;

    MCFOLD ::Level* $getLevel() const;

    MCAPI ::Dimension* $getDimension() const;

    MCAPI ::Actor* $getEntity() const;

    MCAPI ::CommandPermissionLevel $getPermissionsLevel() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCFOLD bool $isSelectorExpansionAllowed() const;

    MCFOLD ::CommandOriginType $getOriginType() const;

    MCAPI ::CompoundTag $serialize() const;

    MCFOLD bool $isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
