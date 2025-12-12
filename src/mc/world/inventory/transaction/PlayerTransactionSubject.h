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
    virtual void setSelectedSlot(int slot, ::ContainerID containerId) /*override*/;

    virtual bool isAlive() const /*override*/;

    virtual ::ItemStack unwrapItem(::NetworkItemStackDescriptor const& item) const /*override*/;

    virtual ::ItemStack const& getSelectedItem() const /*override*/;

    virtual void setSelectedItem(::ItemStack const& item) /*override*/;

    virtual ::PlayerInventorySlotData getSelectedSlot() const /*override*/;

    virtual float getMaxPickRange() const /*override*/;

    virtual ::Vec3 getPosition() const /*override*/;

    virtual void setPosition(::Vec3 const& position) /*override*/;

    virtual void createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)>&& callback,
        ::std::function<void()>&&                                                          execute
    ) /*override*/;

    virtual void addExpectedAction(::InventoryAction const& action) /*override*/;

    virtual bool baseUseItem(::ItemStack& item) /*override*/;

    virtual bool baseUseItemAsAttack(::ItemStack& item) /*override*/;

    virtual ::InteractionResult useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    ) /*override*/;

    virtual void resendBlocksAroundArea(::BlockPos const& pos, uchar facing) const /*override*/;

    virtual void resendPlayerState() const /*override*/;

    virtual void sendPlayerInventory() const /*override*/;

    virtual bool isSneaking() const /*override*/;

    virtual ::Block const& unwrapBlock(uint const& block) const /*override*/;

    virtual ::Block const& getBlock(::BlockPos const& pos) const /*override*/;

    virtual ::Block const& getExtraBlock(::BlockPos const& pos) const /*override*/;

    virtual bool isLastBuildBlockInteractive() const /*override*/;

    virtual void sendBlockInteractedWith(::BlockPos const& pos) /*override*/;

    virtual ::DepenetrationComponent& getDepenetrationComponent() /*override*/;

    virtual ~PlayerTransactionSubject() /*override*/ = default;
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

    MCAPI bool $baseUseItemAsAttack(::ItemStack& item);

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

    MCAPI void $sendPlayerInventory() const;

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
