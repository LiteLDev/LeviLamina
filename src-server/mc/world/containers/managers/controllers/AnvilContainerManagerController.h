#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/containers/managers/controllers/ItemResultPreview.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"

// auto generated forward declare list
// clang-format off
class AnvilContainerManagerModel;
class ItemInstance;
class ItemStackBase;
class Recipe;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct ContainerScreenActionResult;
struct CreateContainerItemScope;
struct ItemStackRequestScope;
struct ItemTransferAmount;
struct RecipeNetIdTag;
// clang-format on

class AnvilContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::AnvilContainerManagerModel>> mAnvilContainerManagerModel;
    ::ll::TypedStorage<4, 4, int> mCost;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mPreviewName;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mItemName;
    ::ll::TypedStorage<1, 1, bool> mIsMapRecipe;
    ::ll::TypedStorage<8, 136, ::ItemResultPreview> mResultPreview;
    ::ll::TypedStorage<4, 4, int> mRepairItemCountCost;
    ::ll::TypedStorage<4, 4, ::RecipeNetId> mCurrentRecipeNetId;
    ::ll::TypedStorage<8, 8, ::Recipe const*> mMapCraftingRecipe;
    ::ll::TypedStorage<8, 40, ::SlotData const> mCreatedItemOutputSlot;
    // NOLINTEND

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
    virtual int handleAutoPlace(::SlotData const&, int, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&) /*override*/;

    // vIndex: 32
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&) /*override*/;

    // vIndex: 29
    virtual ::CreateContainerItemScope _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&) /*override*/;

    // vIndex: 28
    virtual void _updateItemStackRequest(::ContainerScreenRequestActionType, ::ContainerScreenActionResult const&, ::ItemStackRequestScope&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
