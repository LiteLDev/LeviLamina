#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class ComparatorBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    ComparatorBlockActor& operator=(ComparatorBlockActor const&);
    ComparatorBlockActor(ComparatorBlockActor const&);
    ComparatorBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ComparatorBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 43
    virtual int getOutputSignal();

    // vIndex: 44
    virtual void setOutputSignal(int value);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI int getOutputSignal$();

    MCAPI void load$(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void setOutputSignal$(int value);

    MCAPI void tick$(class BlockSource& region);

    // NOLINTEND
};
