#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
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

class CartographyContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk8db3e2;
    ::ll::UntypedStorage<8, 72>  mUnk56e4c5;
    ::ll::UntypedStorage<8, 72>  mUnkecb494;
    ::ll::UntypedStorage<8, 32>  mUnka0023f;
    ::ll::UntypedStorage<8, 40>  mUnkb20872;
    ::ll::UntypedStorage<1, 1>   mUnk125e73;
    ::ll::UntypedStorage<1, 1>   mUnke25743;
    ::ll::UntypedStorage<1, 1>   mUnk74bf34;
    ::ll::UntypedStorage<4, 4>   mUnk2ece7c;
    ::ll::UntypedStorage<8, 136> mUnkb7daa9;
    // NOLINTEND

public:
    // prevent constructor by default
    CartographyContainerManagerController& operator=(CartographyContainerManagerController const&);
    CartographyContainerManagerController(CartographyContainerManagerController const&);
    CartographyContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CartographyContainerManagerController() /*override*/ = default;

    // vIndex: 1
    virtual void postInit(::std::weak_ptr<::ContainerManagerController>) /*override*/;

    // vIndex: 27
    virtual bool isOutputSlot(::std::string const&) const /*override*/;

    // vIndex: 8
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const /*override*/;

    // vIndex: 3
    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const&) /*override*/;

    // vIndex: 4
    virtual void setItemName(::Bedrock::Safety::RedactableString const&) /*override*/;

    // vIndex: 5
    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const /*override*/;

    // vIndex: 6
    virtual ::Bedrock::Safety::RedactableString const& getItemName() const /*override*/;

    // vIndex: 7
    virtual void updatePreviewItem() /*override*/;

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

    // vIndex: 34
    virtual void _onContainerScreenAction(::ContainerScreenActionResult const&) /*override*/;

    // vIndex: 29
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&) /*override*/;

    // vIndex: 32
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&) /*override*/;

    // vIndex: 28
    virtual void
    _updateItemStackRequest(::ContainerScreenRequestActionType, ::ContainerScreenActionResult const&, ::ItemStackRequestScope&) /*override*/
        ;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
