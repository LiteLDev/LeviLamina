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
struct SlotData;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class AnvilContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk618879;
    ::ll::UntypedStorage<4, 4>   mUnk13819a;
    ::ll::UntypedStorage<8, 72>  mUnk329f5d;
    ::ll::UntypedStorage<8, 72>  mUnk79aa88;
    ::ll::UntypedStorage<1, 1>   mUnkfbb4ec;
    ::ll::UntypedStorage<8, 136> mUnkc5eab2;
    ::ll::UntypedStorage<4, 4>   mUnka66304;
    ::ll::UntypedStorage<4, 4>   mUnkc60e1a;
    ::ll::UntypedStorage<8, 8>   mUnkbe3acb;
    ::ll::UntypedStorage<8, 40>  mUnke2b5e4;
    // NOLINTEND

public:
    // prevent constructor by default
    AnvilContainerManagerController& operator=(AnvilContainerManagerController const&);
    AnvilContainerManagerController(AnvilContainerManagerController const&);
    AnvilContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AnvilContainerManagerController() /*override*/ = default;

    // vIndex: 1
    virtual void postInit(::std::weak_ptr<::ContainerManagerController>) /*override*/;

    // vIndex: 7
    virtual void updatePreviewItem() /*override*/;

    // vIndex: 3
    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const&) /*override*/;

    // vIndex: 4
    virtual void setItemName(::Bedrock::Safety::RedactableString const&) /*override*/;

    // vIndex: 5
    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const /*override*/;

    // vIndex: 6
    virtual ::Bedrock::Safety::RedactableString const& getItemName() const /*override*/;

    // vIndex: 27
    virtual bool isOutputSlot(::std::string const&) const /*override*/;

    // vIndex: 8
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const /*override*/;

    // vIndex: 9
    virtual void handleTakeAmount(::SlotData const&, int, ::SlotData const&) /*override*/;

    // vIndex: 10
    virtual void handleTakeAll(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 12
    virtual void handleTakeHalf(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 15
    virtual int
    handleAutoPlace(::SlotData const&, int, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&) /*override*/
        ;

    // vIndex: 32
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&) /*override*/;

    // vIndex: 29
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&) /*override*/;

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
