#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Hopper {
public:
    // prevent constructor by default
    Hopper& operator=(Hopper const&);
    Hopper(Hopper const&);
    Hopper();

public:
    // NOLINTBEGIN
    MCAPI Hopper(int moveItemSpeed, bool isEntity);

    MCAPI int getCooldownTime() const;

    MCAPI bool isOnCooldown() const;

    MCAPI void setCooldownTime(int time);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool
    _addItem(class BlockSource& region, class Container& container, class ItemStack& item, int face, int itemCount);

    MCAPI class Container*
    _getAttachedContainerInBlock(class BlockSource& region, class Vec3 const& pos, int attachedFace);

    MCAPI std::vector<class Container*>
          _getAttachedContainers(class BlockSource& region, class Vec3 const& pos, int attachedFace);

    MCAPI class Container* _getContainerInBlock(class BlockSource& region, class Vec3 const& pos);

    MCAPI std::vector<class Container*> _getContainersAt(class BlockSource& region, class Vec3 const& pos);

    MCAPI std::vector<class Container*> _getSourceContainers(class BlockSource& region, class Vec3 const& pos);

    MCAPI bool _isEmptyContainer(class Container& container, int face);

    MCAPI bool _isFullContainer(class Container& container, int);

    MCAPI bool _pushOutItems(
        class BlockSource& region,
        class Container&   fromContainer,
        class Vec3 const&  position,
        int                attachedFace
    );

    MCAPI bool _tryMoveItems(
        class BlockSource& region,
        class Container&   fromContainer,
        class Vec3 const&  pos,
        int                attachedFace,
        bool               canPushItems
    );

    MCAPI bool
    _tryPullInItemsFromAboveContainer(class BlockSource& region, class Container& toContainer, class Vec3 const& pos);

    MCAPI bool _tryPushToComposter(
        class BlockSource& region,
        class Container&   fromContainer,
        class BlockPos     hopperPos,
        int                facingDirection
    );

    MCAPI bool _tryTakeInItemFromSlot(
        class BlockSource& region,
        class Container&   toContainer,
        class Container&   fromContainer,
        int                slot,
        int                face
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _tryAddItemsFromPos(class BlockSource& region, class Container& toContainer, class Vec3 const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(int moveItemSpeed, bool isEntity);

    // NOLINTEND
};
