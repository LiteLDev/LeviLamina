#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class EnchantingTableBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    EnchantingTableBlockActor& operator=(EnchantingTableBlockActor const&);
    EnchantingTableBlockActor(EnchantingTableBlockActor const&);
    EnchantingTableBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnchantingTableBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 26
    virtual std::string getName() const;

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI explicit EnchantingTableBlockActor(class BlockPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class BlockPos const& pos);

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource&);

    MCAPI void _onUpdatePacket$(class CompoundTag const& data, class BlockSource& region);

    MCAPI std::string getName$() const;

    MCAPI void load$(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void tick$(class BlockSource& region);

    // NOLINTEND
};
