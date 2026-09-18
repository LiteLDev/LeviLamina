#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/copyable_function.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/ContainerID.h"
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Container;
class Experiments;
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

    virtual ::ItemStack unwrapItem(::NetworkItemStackDescriptor const& item) const = 0;

    virtual ::Block const& unwrapBlock(uint const& block) const = 0;

    virtual ::ItemStack const& getItemInHandSlot(::HandSlot) const = 0;

    virtual void setItemInHandSlot(::HandSlot, ::ItemStack const&) = 0;

    virtual ::PlayerInventorySlotData getSelectedSlot() const = 0;

    virtual void setSelectedSlot(int slot, ::ContainerID containerId) = 0;

    virtual float getMaxPickRange() const = 0;

    virtual ::Vec3 getPosition() const = 0;

    virtual void setPosition(::Vec3 const& position) = 0;

    virtual void createTransactionContext(
        ::HandSlot                                                                                  handSlot,
        ::brstd::copyable_function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::brstd::function_ref<void()>                                                               execute
    ) = 0;

    virtual void addExpectedAction(::InventoryAction const& action) = 0;

    virtual bool baseUseItem(::ItemStack&, ::HandSlot) = 0;

    virtual bool baseUseItemAsAttack(::ItemStack&, ::Vec3 const&, ::HandSlot) = 0;

    virtual ::InteractionResult
    useItemOn(::ItemStack&, ::BlockPos const&, uchar, ::Vec3 const&, ::HandSlot, ::Block const*, bool) = 0;

    virtual void resendBlocksAroundArea(::BlockPos const& pos, uchar facing) const = 0;

    virtual void resendPlayerState() const = 0;

    virtual void sendPlayerInventory() const = 0;

    virtual bool isSneaking() const = 0;

    virtual ::Block const& getBlock(::BlockPos const& pos) const = 0;

    virtual ::Block const& getExtraBlock(::BlockPos const& pos) const = 0;

    virtual bool isLastBuildBlockInteractive() const = 0;

    virtual void sendBlockInteractedWith(::BlockPos const& pos) = 0;

    virtual ::DepenetrationComponent& getDepenetrationComponent() = 0;

    virtual ::Experiments const& getExperiments() const = 0;
    // NOLINTEND
};
