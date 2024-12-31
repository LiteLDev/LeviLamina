#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Level;
class SaveContext;
// clang-format on

class ConduitBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk962339;
    ::ll::UntypedStorage<1, 1>  mUnk1b58f4;
    ::ll::UntypedStorage<4, 4>  mUnkdb8f77;
    ::ll::UntypedStorage<8, 8>  mUnka3d419;
    ::ll::UntypedStorage<4, 4>  mUnkce0a24;
    ::ll::UntypedStorage<4, 4>  mUnkf0ec93;
    ::ll::UntypedStorage<4, 4>  mUnk1b69fa;
    ::ll::UntypedStorage<4, 4>  mUnk850d9a;
    ::ll::UntypedStorage<4, 4>  mUnk8a9f45;
    ::ll::UntypedStorage<8, 8>  mUnk9151ef;
    ::ll::UntypedStorage<8, 24> mUnk23c819;
    // NOLINTEND

public:
    // prevent constructor by default
    ConduitBlockActor& operator=(ConduitBlockActor const&);
    ConduitBlockActor(ConduitBlockActor const&);
    ConduitBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConduitBlockActor() /*override*/ = default;

    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 20
    virtual bool hasAlphaLayer() const /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ConduitBlockActor(::BlockPos const& pos);

    MCAPI void _animateTick(::BlockSource& region) const;

    MCAPI void _checkShape(::BlockSource& region);

    MCAPI void _updateTarget(::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCAPI bool $hasAlphaLayer() const;

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
