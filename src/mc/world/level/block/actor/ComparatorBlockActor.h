#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 9
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 45
    virtual int getOutputSignal();

    // vIndex: 46
    virtual void setOutputSignal(int value);

    // vIndex: 0
    virtual ~ComparatorBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI int $getOutputSignal();

    MCNAPI void $setOutputSignal(int value);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
