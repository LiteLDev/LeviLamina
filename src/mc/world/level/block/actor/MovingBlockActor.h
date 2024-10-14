#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class MovingBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    MovingBlockActor& operator=(MovingBlockActor const&);
    MovingBlockActor(MovingBlockActor const&);
    MovingBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MovingBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 14
    virtual bool isPreserved(class BlockSource& region) const;

    // vIndex: 15
    virtual bool shouldPreserve(class BlockSource& region);

    // vIndex: 22
    virtual class AABB getCollisionShape(class IConstBlockSource const& region) const;

    // vIndex: 30
    virtual class PistonBlockActor const* getOwningPiston(class BlockSource& region) const;

    // vIndex: 31
    virtual class PistonBlockActor* getOwningPiston(class BlockSource& region);

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI explicit MovingBlockActor(class BlockPos const& pos);

    MCAPI class Vec3 getDrawPos(class IConstBlockSource const& region, float a) const;

    MCAPI class Block const& getWrappedBlock() const;

    MCAPI void moveCollidedEntities(class PistonBlockActor& pistonBlock, class BlockSource& region);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::pair<class AABB, class AABB> _getWrappedBlockCollisionShapes(class IConstBlockSource const& region
    ) const;

    MCAPI bool _validPistonPos(class IConstBlockSource const& region) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource&);

    MCAPI void _onUpdatePacket$(class CompoundTag const& data, class BlockSource& region);

    MCAPI class AABB getCollisionShape$(class IConstBlockSource const& region) const;

    MCAPI class PistonBlockActor const* getOwningPiston$(class BlockSource& region) const;

    MCAPI class PistonBlockActor* getOwningPiston$(class BlockSource& region);

    MCAPI bool isPreserved$(class BlockSource& region) const;

    MCAPI void load$(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI bool shouldPreserve$(class BlockSource& region);

    MCAPI void tick$(class BlockSource& region);

    // NOLINTEND
};
