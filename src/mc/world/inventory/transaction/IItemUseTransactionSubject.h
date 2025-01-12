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
    // vIndex: 0
    virtual ~IItemUseTransactionSubject() = default;

    // vIndex: 1
    virtual bool isAlive() const = 0;

    // vIndex: 2
    virtual ::ItemStack unwrapItem(::NetworkItemStackDescriptor const&) const = 0;

    // vIndex: 3
    virtual ::Block const& unwrapBlock(uint const&) const = 0;

    // vIndex: 4
    virtual ::ItemStack const& getSelectedItem() const = 0;

    // vIndex: 5
    virtual void setSelectedItem(::ItemStack const&) = 0;

    // vIndex: 6
    virtual ::PlayerInventorySlotData getSelectedSlot() const = 0;

    // vIndex: 7
    virtual void setSelectedSlot(int, ::ContainerID) = 0;

    // vIndex: 8
    virtual float getMaxPickRange() const = 0;

    // vIndex: 9
    virtual ::Vec3 getPosition() const = 0;

    // vIndex: 10
    virtual void setPosition(::Vec3 const&) = 0;

    // vIndex: 11
    virtual void
    createTransactionContext(::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)>&&, ::std::function<void()>&&) = 0;

    // vIndex: 12
    virtual void addExpectedAction(::InventoryAction const&) = 0;

    // vIndex: 13
    virtual bool baseUseItem(::ItemStack&) = 0;

    // vIndex: 14
    virtual ::InteractionResult
    useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool) = 0;

    // vIndex: 15
    virtual void resendBlocksAroundArea(::BlockPos const&, uchar) const = 0;

    // vIndex: 16
    virtual void resendPlayerState() const = 0;

    // vIndex: 17
    virtual bool isSneaking() const = 0;

    // vIndex: 18
    virtual ::Block const& getBlock(::BlockPos const&) const = 0;

    // vIndex: 19
    virtual ::Block const& getExtraBlock(::BlockPos const&) const = 0;

    // vIndex: 20
    virtual bool isLastBuildBlockInteractive() const = 0;

    // vIndex: 21
    virtual void sendBlockInteractedWith(::BlockPos const&) = 0;

    // vIndex: 22
    virtual ::DepenetrationComponent& getDepenetrationComponent() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
