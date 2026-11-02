#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/copyable_function.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/ContainerID.h"
#include "mc/world/gamemode/entity_attack/ValidationMode.h"
#include "mc/world/inventory/transaction/IItemUseTransactionSubject.h"
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

    virtual ::ItemStack const& getItemInHandSlot(::HandSlot const slot) const /*override*/;

    virtual void setItemInHandSlot(::HandSlot const slot, ::ItemStack const& item) /*override*/;

    virtual ::PlayerInventorySlotData getSelectedSlot() const /*override*/;

    virtual float getMaxPickRange() const /*override*/;

    virtual ::Vec3 getPosition() const /*override*/;

    virtual void setPosition(::Vec3 const& position) /*override*/;

    virtual void createTransactionContext(
        ::HandSlot                                                                                  handSlot,
        ::brstd::copyable_function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::brstd::function_ref<void()>                                                               execute
    ) /*override*/;

    virtual void addExpectedAction(::InventoryAction const& action) /*override*/;

    virtual bool baseUseItem(::ItemStack& item, ::HandSlot const handSlot) /*override*/;

    virtual bool
    baseUseItemAsAttack(::ItemStack& item, ::Vec3 const& aimDirection, ::HandSlot const handSlot) /*override*/;

    virtual ::InteractionResult useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::HandSlot const  handSlot,
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

    virtual ::Experiments const& getExperiments() const /*override*/;

    virtual ::EntityAttack::ValidationMode getEntityAttackRequestCompatibilityMode() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setSelectedSlot(int slot, ::ContainerID containerId);

    MCNAPI bool $isAlive() const;

    MCNAPI ::ItemStack $unwrapItem(::NetworkItemStackDescriptor const& item) const;

    MCNAPI ::ItemStack const& $getItemInHandSlot(::HandSlot const slot) const;

    MCNAPI void $setItemInHandSlot(::HandSlot const slot, ::ItemStack const& item);

    MCNAPI ::PlayerInventorySlotData $getSelectedSlot() const;

    MCNAPI float $getMaxPickRange() const;

    MCNAPI ::Vec3 $getPosition() const;

    MCNAPI void $setPosition(::Vec3 const& position);

    MCNAPI void $createTransactionContext(
        ::HandSlot                                                                                  handSlot,
        ::brstd::copyable_function<void(::Container&, int, ::ItemStack const&, ::ItemStack const&)> callback,
        ::brstd::function_ref<void()>                                                               execute
    );

    MCNAPI void $addExpectedAction(::InventoryAction const& action);

    MCNAPI bool $baseUseItem(::ItemStack& item, ::HandSlot const handSlot);

    MCNAPI bool $baseUseItemAsAttack(::ItemStack& item, ::Vec3 const& aimDirection, ::HandSlot const handSlot);

    MCNAPI ::InteractionResult $useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::HandSlot const  handSlot,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    );

    MCNAPI void $resendBlocksAroundArea(::BlockPos const& pos, uchar facing) const;

    MCNAPI void $resendPlayerState() const;

    MCNAPI void $sendPlayerInventory() const;

    MCNAPI bool $isSneaking() const;

    MCNAPI ::Block const& $unwrapBlock(uint const& block) const;

    MCNAPI ::Block const& $getBlock(::BlockPos const& pos) const;

    MCNAPI ::Block const& $getExtraBlock(::BlockPos const& pos) const;

    MCNAPI bool $isLastBuildBlockInteractive() const;

    MCNAPI void $sendBlockInteractedWith(::BlockPos const& pos);

    MCNAPI ::DepenetrationComponent& $getDepenetrationComponent();

    MCNAPI ::Experiments const& $getExperiments() const;

    MCNAPI ::EntityAttack::ValidationMode $getEntityAttackRequestCompatibilityMode() const;


    // NOLINTEND
};
