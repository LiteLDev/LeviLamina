#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/BlockSourceListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class ItemInstance;
class ItemStackBase;
struct ActorBlockSyncMessage;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct ItemTransferAmount;
struct SelectedSlotInfo;
struct SlotData;
// clang-format on

class CraftingContainerManagerController : public ::ContainerManagerController {
public:
    // CraftingContainerManagerController inner types declare
    // clang-format off
    struct BlockChangeListener;
    // clang-format on

    // CraftingContainerManagerController inner types define
    struct BlockChangeListener : public ::BlockSourceListener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk2476ee;
        ::ll::UntypedStorage<8, 8>  mUnk2b9a4e;
        ::ll::UntypedStorage<8, 64> mUnk2519ad;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockChangeListener& operator=(BlockChangeListener const&);
        BlockChangeListener(BlockChangeListener const&);
        BlockChangeListener();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~BlockChangeListener() /*override*/;

        // vIndex: 4
        virtual void
        onBlockChanged(::BlockSource&, ::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangedEventTarget, ::Actor*) /*override*/
            ;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI void
        $onBlockChanged(::BlockSource&, ::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangedEventTarget, ::Actor*);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk2bf0be;
    ::ll::UntypedStorage<4, 4>   mUnkda28b6;
    ::ll::UntypedStorage<8, 8>   mUnkd36e42;
    ::ll::UntypedStorage<8, 24>  mUnk7a7e0c;
    ::ll::UntypedStorage<8, 8>   mUnkbaccab;
    ::ll::UntypedStorage<8, 8>   mUnke59753;
    ::ll::UntypedStorage<1, 1>   mUnk8be0fa;
    ::ll::UntypedStorage<1, 1>   mUnkf73bb0;
    ::ll::UntypedStorage<8, 40>  mUnk4c6a1a;
    ::ll::UntypedStorage<8, 24>  mUnkc97ffd;
    ::ll::UntypedStorage<8, 48>  mUnke4fd79;
    ::ll::UntypedStorage<8, 24>  mUnk789bce;
    ::ll::UntypedStorage<8, 128> mUnk5c5af2;
    ::ll::UntypedStorage<8, 24>  mUnk2af8c4;
    ::ll::UntypedStorage<8, 16>  mUnk7b6004;
    ::ll::UntypedStorage<8, 8>   mUnkf63545;
    ::ll::UntypedStorage<1, 1>   mUnkb18d9a;
    ::ll::UntypedStorage<1, 1>   mUnk797b8f;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingContainerManagerController& operator=(CraftingContainerManagerController const&);
    CraftingContainerManagerController(CraftingContainerManagerController const&);
    CraftingContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftingContainerManagerController() /*override*/;

    // vIndex: 27
    virtual bool isOutputSlot(::std::string const&) const /*override*/;

    // vIndex: 9
    virtual void handleTakeAmount(::SlotData const&, int, ::SlotData const&) /*override*/;

    // vIndex: 10
    virtual void handleTakeAll(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 11
    virtual void handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&) /*override*/;

    // vIndex: 12
    virtual void handleTakeHalf(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 13
    virtual void handlePlaceOne(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 15
    virtual int
    handleAutoPlace(::SlotData const&, int, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&) /*override*/
        ;

    // vIndex: 16
    virtual int
    handleAutoPlaceStack(::SlotData const&, ::ItemTakeType, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&) /*override*/
        ;

    // vIndex: 17
    virtual void handleSplitSingle(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 18
    virtual void handleSplitMultiple(::SelectedSlotInfo const&, ::ItemInstance const&, ::SlotData const&) /*override*/;

    // vIndex: 25
    virtual void handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType) /*override*/;

    // vIndex: 21
    virtual bool handleDrop(::SlotData const&, ::ItemTransferAmount const) /*override*/;

    // vIndex: 26
    virtual void closeContainers() /*override*/;

    // vIndex: 8
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isOutputSlot(::std::string const&) const;

    MCAPI void $handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    MCAPI void $handleTakeAll(::SlotData const&, ::SlotData const&);

    MCAPI void $handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    MCAPI void $handleTakeHalf(::SlotData const&, ::SlotData const&);

    MCAPI void $handlePlaceOne(::SlotData const&, ::SlotData const&);

    MCAPI int
    $handleAutoPlace(::SlotData const&, int, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&);

    MCAPI int
    $handleAutoPlaceStack(::SlotData const&, ::ItemTakeType, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&);

    MCAPI void $handleSplitSingle(::SlotData const&, ::SlotData const&);

    MCAPI void $handleSplitMultiple(::SelectedSlotInfo const&, ::ItemInstance const&, ::SlotData const&);

    MCAPI void $handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType);

    MCAPI bool $handleDrop(::SlotData const&, ::ItemTransferAmount const);

    MCAPI void $closeContainers();

    MCAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const&) const;
    // NOLINTEND
};
