#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class ConduitBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    ConduitBlockActor& operator=(ConduitBlockActor const&);
    ConduitBlockActor(ConduitBlockActor const&);
    ConduitBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConduitBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 20
    virtual bool hasAlphaLayer() const;

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _animateTick(class BlockSource& region) const;

    MCAPI void _checkShape(class BlockSource& region);

    MCAPI void _updateTarget(class BlockSource& region);

    // NOLINTEND
};
