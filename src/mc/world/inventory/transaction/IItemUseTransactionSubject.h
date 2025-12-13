#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

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

class IItemUseTransactionSubject {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IItemUseTransactionSubject() = default;

    virtual bool isAlive() const = 0;

    virtual ::ItemStack unwrapItem(::NetworkItemStackDescriptor const&) const = 0;

    virtual ::Block const& unwrapBlock(uint const&) const = 0;

    virtual ::ItemStack const& getSelectedItem() const = 0;

    virtual void setSelectedItem(::ItemStack const&) = 0;

    virtual ::PlayerInventorySlotData getSelectedSlot() const = 0;

    virtual void setSelectedSlot(int, ::ContainerID) = 0;

    virtual float getMaxPickRange() const = 0;

    virtual ::Vec3 getPosition() const = 0;

    virtual void setPosition(::Vec3 const&) = 0;

    virtual void createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)>&&,
        ::std::function<void()>&&
    ) = 0;

    virtual void addExpectedAction(::InventoryAction const&) = 0;

    virtual bool baseUseItem(::ItemStack&) = 0;

    virtual bool baseUseItemAsAttack(::ItemStack&) = 0;

    virtual ::InteractionResult
    useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool) = 0;

    virtual void resendBlocksAroundArea(::BlockPos const&, uchar) const = 0;

    virtual void resendPlayerState() const = 0;

    virtual void sendPlayerInventory() const = 0;

    virtual bool isSneaking() const = 0;

    virtual ::Block const& getBlock(::BlockPos const&) const = 0;

    virtual ::Block const& getExtraBlock(::BlockPos const&) const = 0;

    virtual bool isLastBuildBlockInteractive() const = 0;

    virtual void sendBlockInteractedWith(::BlockPos const&) = 0;

    virtual ::DepenetrationComponent& getDepenetrationComponent() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
