#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/HopperCallbacks.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Container;
class ItemActor;
class ItemStack;
class Vec3;
// clang-format on

class Hopper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mCooldownTime;
    ::ll::TypedStorage<4, 4, int>                 mMoveCooldownTime;
    ::ll::TypedStorage<1, 1, bool>                mTransferedFromChestMinecart;
    ::ll::TypedStorage<1, 1, bool>                mIsEntity;
    ::ll::TypedStorage<4, 4, int>                 mMoveItemSpeed;
    ::ll::TypedStorage<8, 128, ::HopperCallbacks> mCallbacks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Container* _getContainerInBlock(::BlockSource& region, ::Vec3 const& pos);

    MCNAPI ::std::vector<::Container*> _getContainersAt(::BlockSource& region, ::Vec3 const& pos);

    MCNAPI bool
    _pushOutItems(::BlockSource& region, ::Container& fromContainer, ::Vec3 const& position, int attachedFace);

    MCNAPI bool _tryAddItemsFromPos(::BlockSource& region, ::Container& toContainer, ::Vec3 const& pos);

    MCAPI bool _tryMoveInItem(
        ::BlockSource&                                                region,
        ::Container&                                                  container,
        ::std::optional<::std::reference_wrapper<::ItemActor>> const& itemActor,
        ::ItemStack&                                                  item,
        int                                                           slot,
        int                                                           face,
        int                                                           itemCount
    );

    MCNAPI bool _tryMoveItems(
        ::BlockSource& region,
        ::Container&   fromContainer,
        ::Vec3 const&  pos,
        int            attachedFace,
        bool           canPushItems
    );

    MCNAPI bool _tryMoveItems(
        ::HopperCallbacks callbacks,
        ::BlockSource&    region,
        ::Container&      fromContainer,
        ::Vec3 const&     pos,
        int               attachedFace,
        bool              canPushItems
    );

    MCNAPI bool _tryPullInItemsFromAboveContainer(::BlockSource& region, ::Container& toContainer, ::Vec3 const& pos);

    MCNAPI bool _tryPullInItemsFromWorld(::BlockSource& region, ::Container& toContainer, ::Vec3 const& pos);
    // NOLINTEND
};
