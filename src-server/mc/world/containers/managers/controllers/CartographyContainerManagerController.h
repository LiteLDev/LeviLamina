#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/containers/managers/controllers/ItemResultPreview.h"
#include "mc/world/containers/managers/controllers/MapOutputType.h"
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"

// auto generated forward declare list
// clang-format off
class CartographyContainerManagerModel;
class ItemInstance;
class ItemStackBase;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct ContainerScreenActionResult;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
struct SelectedSlotInfo;
// clang-format on

class CartographyContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CartographyContainerManagerModel>> mCartographyContainerManagerModel;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mPreviewName;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mItemName;
    ::ll::TypedStorage<8, 32, ::std::string> mItemResultLocName;
    ::ll::TypedStorage<8, 40, ::SlotData const> mCreatedItemOutputSlot;
    ::ll::TypedStorage<1, 1, bool> mCurrentlyCrafting;
    ::ll::TypedStorage<1, 1, bool> mIsCurrentlyRenaming;
    ::ll::TypedStorage<1, 1, bool> mWasPreviouslyRenaming;
    ::ll::TypedStorage<4, 4, ::MapOutputType> mMapOutputType;
    ::ll::TypedStorage<8, 136, ::ItemResultPreview> mResultPreview;
    // NOLINTEND

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
    virtual int handleAutoPlace(::SlotData const&, int, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&) /*override*/;

    // vIndex: 34
    virtual void _onContainerScreenAction(::ContainerScreenActionResult const&) /*override*/;

    // vIndex: 29
    virtual ::CreateContainerItemScope _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&) /*override*/;

    // vIndex: 32
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&) /*override*/;

    // vIndex: 28
    virtual void _updateItemStackRequest(::ContainerScreenRequestActionType, ::ContainerScreenActionResult const&, ::ItemStackRequestScope&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
