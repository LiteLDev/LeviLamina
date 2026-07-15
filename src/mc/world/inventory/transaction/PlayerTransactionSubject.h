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
    virtual void setSelectedSlot(int, ::ContainerID) /*override*/;

    virtual bool isAlive() const /*override*/;

    virtual ::ItemStack unwrapItem(::NetworkItemStackDescriptor const&) const /*override*/;

    virtual ::ItemStack const& getSelectedItem() const /*override*/;

    virtual void setSelectedItem(::ItemStack const&) /*override*/;

    virtual ::PlayerInventorySlotData getSelectedSlot() const /*override*/;

    virtual float getMaxPickRange() const /*override*/;

    virtual ::Vec3 getPosition() const /*override*/;

    virtual void setPosition(::Vec3 const&) /*override*/;

    virtual void createTransactionContext(
        ::std::function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)>&&,
        ::std::function<void()>&&
    ) /*override*/;

    virtual void addExpectedAction(::InventoryAction const&) /*override*/;

    virtual bool baseUseItem(::ItemStack&) /*override*/;

    virtual bool baseUseItemAsAttack(::ItemStack&, ::Vec3 const&) /*override*/;

    virtual ::InteractionResult
    useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::Block const*, bool) /*override*/;

    virtual void resendBlocksAroundArea(::BlockPos const&, uchar) const /*override*/;

    virtual void resendPlayerState() const /*override*/;

    virtual void sendPlayerInventory() const /*override*/;

    virtual bool isSneaking() const /*override*/;

    virtual ::Block const& unwrapBlock(uint const&) const /*override*/;

    virtual ::Block const& getBlock(::BlockPos const&) const /*override*/;

    virtual ::Block const& getExtraBlock(::BlockPos const&) const /*override*/;

    virtual bool isLastBuildBlockInteractive() const /*override*/;

    virtual void sendBlockInteractedWith(::BlockPos const&) /*override*/;

    virtual ::DepenetrationComponent& getDepenetrationComponent() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
