#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseCommandBlock;
class BlockPos;
class BlockSource;
class CommandBlockActor;
class CompoundTag;
class Dimension;
class Level;
class Vec2;
class Vec3;
// clang-format on

class BlockCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk93b0b4;
    ::ll::UntypedStorage<4, 12> mUnke10705;
    ::ll::UntypedStorage<4, 4>  mUnk7ba504;
    ::ll::UntypedStorage<8, 32> mUnkefdc9d;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCommandOrigin& operator=(BlockCommandOrigin const&);
    BlockCommandOrigin(BlockCommandOrigin const&);
    BlockCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockCommandOrigin() /*override*/;

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

    virtual bool canUseCommandsWithoutCheatsEnabled() const /*override*/;

    virtual bool isSelectorExpansionAllowed() const /*override*/;

    virtual ::CommandOriginType getOriginType() const /*override*/;

    virtual ::CompoundTag serialize() const /*override*/;

    virtual bool isValid() const /*override*/;

    virtual ::BaseCommandBlock* _getBaseCommandBlock(::BlockSource& region) const;

    virtual ::CommandBlockActor* _getBlockEntity(::BlockSource& region) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string _getName(::BlockSource& region) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::BlockCommandOrigin> load(::CompoundTag const& tag, ::Level& level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getRequestId() const;

    MCNAPI ::std::string $getName() const;

    MCNAPI ::BlockPos $getBlockPosition() const;

    MCNAPI ::Vec3 $getWorldPosition() const;

    MCNAPI ::std::optional<::Vec2> $getRotation() const;

    MCNAPI ::Level* $getLevel() const;

    MCNAPI ::Dimension* $getDimension() const;

    MCNAPI ::Actor* $getEntity() const;

#ifdef LL_PLAT_S
    MCNAPI ::CommandPermissionLevel $getPermissionsLevel() const;
#endif

    MCNAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCNAPI bool $canUseCommandsWithoutCheatsEnabled() const;

    MCNAPI bool $isSelectorExpansionAllowed() const;

    MCNAPI ::CommandOriginType $getOriginType() const;

    MCNAPI ::CompoundTag $serialize() const;

    MCNAPI bool $isValid() const;

    MCNAPI ::BaseCommandBlock* $_getBaseCommandBlock(::BlockSource& region) const;

    MCNAPI ::CommandBlockActor* $_getBlockEntity(::BlockSource& region) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
