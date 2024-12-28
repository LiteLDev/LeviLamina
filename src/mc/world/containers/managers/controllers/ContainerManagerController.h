#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStackBase;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct ContainerScreenActionResult;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
struct SelectedSlotInfo;
struct SlotData;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class ContainerManagerController : public ::std::enable_shared_from_this<::ContainerManagerController> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkadaa15;
    ::ll::UntypedStorage<8, 64> mUnk2dbc14;
    ::ll::UntypedStorage<8, 24> mUnke71ce9;
    ::ll::UntypedStorage<8, 24> mUnk971323;
    ::ll::UntypedStorage<4, 4>  mUnk2c60ae;
    ::ll::UntypedStorage<1, 1>  mUnkc572c7;
    ::ll::UntypedStorage<1, 1>  mUnk30c438;
    ::ll::UntypedStorage<8, 8>  mUnk21b1d4;
    ::ll::UntypedStorage<8, 16> mUnkdde86c;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerManagerController& operator=(ContainerManagerController const&);
    ContainerManagerController(ContainerManagerController const&);
    ContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerManagerController();

    // vIndex: 1
    virtual void postInit(::std::weak_ptr<::ContainerManagerController>);

    // vIndex: 2
    virtual void registerContainerCallbacks();

    // vIndex: 3
    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const&);

    // vIndex: 4
    virtual void setItemName(::Bedrock::Safety::RedactableString const&);

    // vIndex: 5
    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const;

    // vIndex: 6
    virtual ::Bedrock::Safety::RedactableString const& getItemName() const;

    // vIndex: 7
    virtual void updatePreviewItem();

    // vIndex: 8
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const;

    // vIndex: 9
    virtual void handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    // vIndex: 10
    virtual void handleTakeAll(::SlotData const&, ::SlotData const&);

    // vIndex: 11
    virtual void handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    // vIndex: 12
    virtual void handleTakeHalf(::SlotData const&, ::SlotData const&);

    // vIndex: 13
    virtual void handlePlaceOne(::SlotData const&, ::SlotData const&);

    // vIndex: 14
    virtual void handlePlaceAmount(::SlotData const&, int, ::SlotData const&);

    // vIndex: 15
    virtual int
    handleAutoPlace(::SlotData const&, int, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&);

    // vIndex: 16
    virtual int
    handleAutoPlaceStack(::SlotData const&, ::ItemTakeType, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&);

    // vIndex: 17
    virtual void handleSplitSingle(::SlotData const&, ::SlotData const&);

    // vIndex: 18
    virtual void handleSplitMultiple(::SelectedSlotInfo const&, ::ItemInstance const&, ::SlotData const&);

    // vIndex: 19
    virtual bool handleCoalesce(::SlotData const&, ::std::vector<::std::string> const&, ::std::string const&);

    // vIndex: 20
    virtual bool handleSwap(::SlotData const&, ::SlotData const&);

    // vIndex: 21
    virtual bool handleDrop(::SlotData const&, ::ItemTransferAmount const);

    // vIndex: 23
    virtual bool handleDestroy(::SelectedSlotInfo const&, ::ItemTransferAmount const);

    // vIndex: 22
    virtual bool handleDestroy(::SlotData const&, ::ItemTransferAmount const);

    // vIndex: 24
    virtual bool handleConsume(::SlotData const&, ::ItemTransferAmount const);

    // vIndex: 25
    virtual void handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType);

    // vIndex: 26
    virtual void closeContainers();

    // vIndex: 27
    virtual bool isOutputSlot(::std::string const&) const;

    // vIndex: 28
    virtual void
    _updateItemStackRequest(::ContainerScreenRequestActionType, ::ContainerScreenActionResult const&, ::ItemStackRequestScope&);

    // vIndex: 29
    virtual ::CreateContainerItemScope _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);

    // vIndex: 30
    virtual void _onItemTransferredFrom(::ItemInstance const&, ::SlotData const&);

    // vIndex: 31
    virtual void _onItemTransferredTo(::ItemInstance const&, ::SlotData const&);

    // vIndex: 32
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&);

    // vIndex: 33
    virtual void _onItemPlaced(::ItemInstance const&, ::SlotData const&);

    // vIndex: 34
    virtual void _onContainerScreenAction(::ContainerScreenActionResult const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& TRANSFER_NO_DESTINATION();

    MCAPI static ::std::string_view const& TRANSFER_NO_ORIGIN();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $postInit(::std::weak_ptr<::ContainerManagerController>);

    MCAPI void $registerContainerCallbacks();

    MCAPI void $setPreviewItemName(::Bedrock::Safety::RedactableString const&);

    MCAPI void $setItemName(::Bedrock::Safety::RedactableString const&);

    MCAPI ::Bedrock::Safety::RedactableString const& $getPreviewItemName() const;

    MCAPI ::Bedrock::Safety::RedactableString const& $getItemName() const;

    MCAPI void $updatePreviewItem();

    MCAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const&) const;

    MCAPI void $handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    MCAPI void $handleTakeAll(::SlotData const&, ::SlotData const&);

    MCAPI void $handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    MCAPI void $handleTakeHalf(::SlotData const&, ::SlotData const&);

    MCAPI void $handlePlaceOne(::SlotData const&, ::SlotData const&);

    MCAPI void $handlePlaceAmount(::SlotData const&, int, ::SlotData const&);

    MCAPI int
    $handleAutoPlace(::SlotData const&, int, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&);

    MCAPI int
    $handleAutoPlaceStack(::SlotData const&, ::ItemTakeType, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&);

    MCAPI void $handleSplitSingle(::SlotData const&, ::SlotData const&);

    MCAPI void $handleSplitMultiple(::SelectedSlotInfo const&, ::ItemInstance const&, ::SlotData const&);

    MCAPI bool $handleCoalesce(::SlotData const&, ::std::vector<::std::string> const&, ::std::string const&);

    MCAPI bool $handleSwap(::SlotData const&, ::SlotData const&);

    MCAPI bool $handleDrop(::SlotData const&, ::ItemTransferAmount const);

    MCAPI bool $handleDestroy(::SelectedSlotInfo const&, ::ItemTransferAmount const);

    MCAPI bool $handleDestroy(::SlotData const&, ::ItemTransferAmount const);

    MCAPI bool $handleConsume(::SlotData const&, ::ItemTransferAmount const);

    MCAPI void $handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType);

    MCAPI void $closeContainers();

    MCAPI bool $isOutputSlot(::std::string const&) const;

    MCAPI void
    $_updateItemStackRequest(::ContainerScreenRequestActionType, ::ContainerScreenActionResult const&, ::ItemStackRequestScope&);

    MCAPI ::CreateContainerItemScope $_makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);

    MCAPI void $_onItemTransferredFrom(::ItemInstance const&, ::SlotData const&);

    MCAPI void $_onItemTransferredTo(::ItemInstance const&, ::SlotData const&);

    MCAPI void $_onItemAcquired(::ItemInstance const&, ::SlotData const&);

    MCAPI void $_onItemPlaced(::ItemInstance const&, ::SlotData const&);

    MCAPI void $_onContainerScreenAction(::ContainerScreenActionResult const&);
    // NOLINTEND
};
