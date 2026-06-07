#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
// clang-format on

class ComparatorBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mOutput;
    // NOLINTEND

public:
    // prevent constructor by default
    ComparatorBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool save(::CompoundTag& tag, ::SaveContext const&) const /*override*/;

    virtual void load(::ILevel& tag, ::CompoundTag const&, ::DataLoadHelper&) /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual int getOutputSignal();

    virtual void setOutputSignal(int value);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ComparatorBlockActor(::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const&) const;

    MCAPI void $load(::ILevel& tag, ::CompoundTag const&, ::DataLoadHelper&);

    MCAPI void $tick(::BlockSource& region);

    MCFOLD int $getOutputSignal();

    MCAPI void $setOutputSignal(int value);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
