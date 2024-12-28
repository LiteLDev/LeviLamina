#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/inventory/transaction/IItemUseTransactionSubject.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Container;
class InteractionResult;
class InventoryAction;
class ItemStack;
class NetworkItemStackDescriptor;
class Vec3;
struct DepenetrationComponent;
struct PlayerInventorySlotData;
// clang-format on

class PlayerTransactionSubject : public ::IItemUseTransactionSubject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk18866d;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTransactionSubject& operator=(PlayerTransactionSubject const&);
    PlayerTransactionSubject(PlayerTransactionSubject const&);
    PlayerTransactionSubject();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void setSelectedSlot(int slot, ::ContainerID containerId) /*override*/;

    // vIndex: 1
    virtual bool isAlive() const /*override*/;

    // vIndex: 2
    virtual ::ItemStack unwrapItem(::NetworkItemStackDescriptor const& item) const /*override*/;

    // vIndex: 4
    virtual ::ItemStack const& getSelectedItem() const /*override*/;

    // vIndex: 5
    virtual void setSelectedItem(::ItemStack const& item) /*override*/;

    // vIndex: 6
    virtual ::PlayerInventorySlotData getSelectedSlot() const /*override*/;

    // vIndex: 8
    virtual float getMaxPickRange() const /*override*/;

    // vIndex: 9
    virtual ::Vec3 getPosition() const /*override*/;

    // vIndex: 10
    virtual void setPosition(::Vec3 const& position) /*override*/;

    // vIndex: 11
    virtual void createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)>&& callback,
        ::std::function<void()>&&                                                          execute
    ) /*override*/;

    // vIndex: 12
    virtual void addExpectedAction(::InventoryAction const& action) /*override*/;

    // vIndex: 13
    virtual bool baseUseItem(::ItemStack& item) /*override*/;

    // vIndex: 14
    virtual ::InteractionResult useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    ) /*override*/;

    // vIndex: 15
    virtual void resendBlocksAroundArea(::BlockPos const& pos, uchar facing) const /*override*/;

    // vIndex: 16
    virtual void resendPlayerState() const /*override*/;

    // vIndex: 17
    virtual bool isSneaking() const /*override*/;

    // vIndex: 3
    virtual ::Block const& unwrapBlock(uint const& block) const /*override*/;

    // vIndex: 18
    virtual ::Block const& getBlock(::BlockPos const& pos) const /*override*/;

    // vIndex: 19
    virtual ::Block const& getExtraBlock(::BlockPos const& pos) const /*override*/;

    // vIndex: 20
    virtual bool isLastBuildBlockInteractive() const /*override*/;

    // vIndex: 21
    virtual void sendBlockInteractedWith(::BlockPos const& pos) /*override*/;

    // vIndex: 22
    virtual ::DepenetrationComponent& getDepenetrationComponent() /*override*/;

    // vIndex: 0
    virtual ~PlayerTransactionSubject() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setSelectedSlot(int slot, ::ContainerID containerId);

    MCAPI bool $isAlive() const;

    MCAPI ::ItemStack $unwrapItem(::NetworkItemStackDescriptor const& item) const;

    MCAPI ::ItemStack const& $getSelectedItem() const;

    MCAPI void $setSelectedItem(::ItemStack const& item);

    MCAPI ::PlayerInventorySlotData $getSelectedSlot() const;

    MCAPI float $getMaxPickRange() const;

    MCAPI ::Vec3 $getPosition() const;

    MCAPI void $setPosition(::Vec3 const& position);

    MCAPI void $createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)>&& callback,
        ::std::function<void()>&&                                                          execute
    );

    MCAPI void $addExpectedAction(::InventoryAction const& action);

    MCAPI bool $baseUseItem(::ItemStack& item);

    MCAPI ::InteractionResult $useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    );

    MCAPI void $resendBlocksAroundArea(::BlockPos const& pos, uchar facing) const;

    MCAPI void $resendPlayerState() const;

    MCAPI bool $isSneaking() const;

    MCAPI ::Block const& $unwrapBlock(uint const& block) const;

    MCAPI ::Block const& $getBlock(::BlockPos const& pos) const;

    MCAPI ::Block const& $getExtraBlock(::BlockPos const& pos) const;

    MCAPI bool $isLastBuildBlockInteractive() const;

    MCAPI void $sendBlockInteractedWith(::BlockPos const& pos);

    MCAPI ::DepenetrationComponent& $getDepenetrationComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
