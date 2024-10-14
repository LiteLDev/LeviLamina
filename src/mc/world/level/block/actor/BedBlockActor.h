#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class BedBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    BedBlockActor& operator=(BedBlockActor const&);
    BedBlockActor(BedBlockActor const&);
    BedBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BedBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 3
    virtual bool saveItemInstanceData(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 8
    virtual void onChanged(class BlockSource& region);

    // vIndex: 11
    virtual void onPlace(class BlockSource& region);

    // vIndex: 21
    virtual class BlockActor* getCrackEntity(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 26
    virtual std::string getName() const;

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI explicit BedBlockActor(class BlockPos const& pos);

    MCAPI bool claimPetSleepOnBed(struct ActorUniqueID petId);

    MCAPI void startSleepingOn();

    MCAPI void stopSleepingOn(class BlockSource& region, bool forcefulAwake);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource& region);

    MCAPI void _onUpdatePacket$(class CompoundTag const& data, class BlockSource& region);

    MCAPI class BlockActor* getCrackEntity$(class BlockSource& region, class BlockPos const& pos);

    MCAPI std::string getName$() const;

    MCAPI void load$(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    MCAPI void onChanged$(class BlockSource& region);

    MCAPI void onPlace$(class BlockSource& region);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI bool saveItemInstanceData$(class CompoundTag& tag) const;

    MCAPI void tick$(class BlockSource& region);

    // NOLINTEND
};
