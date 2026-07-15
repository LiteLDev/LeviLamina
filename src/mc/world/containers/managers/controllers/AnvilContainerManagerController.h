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
struct SelectedSlotInfo;
// clang-format on

class AnvilContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::AnvilContainerManagerModel>> mAnvilContainerManagerModel;
    ::ll::TypedStorage<4, 4, int>                                            mCost;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>           mPreviewName;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>           mItemName;
    ::ll::TypedStorage<1, 1, bool>                                           mIsMapRecipe;
    ::ll::TypedStorage<8, 136, ::ItemResultPreview>                          mResultPreview;
    ::ll::TypedStorage<1, 1, bool>                                           mIsEnchantingBookRecipe;
    ::ll::TypedStorage<4, 4, int>                                            mRepairItemCountCost;
    ::ll::TypedStorage<4, 4, ::RecipeNetId>                                  mCurrentRecipeNetId;
    ::ll::TypedStorage<8, 8, ::Recipe const*>                                mMapCraftingRecipe;
    ::ll::TypedStorage<8, 40, ::SlotData const>                              mCreatedItemOutputSlot;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    AnvilContainerManagerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnvilContainerManagerController() /*override*/ = default;

    virtual void postInit(::std::weak_ptr<::ContainerManagerController>) /*override*/;

    virtual void updatePreviewItem() /*override*/;

    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const& name) /*override*/;

    virtual void setItemName(::Bedrock::Safety::RedactableString const& name) /*override*/;

    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const /*override*/;

    virtual ::Bedrock::Safety::RedactableString const& getItemName() const /*override*/;

    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;

    virtual bool handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot) /*override*/;

    virtual bool handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual bool handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual bool handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;

    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;

    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot) /*override*/;

    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&) /*override*/;

    virtual void _updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const&,
        ::ItemStackRequestScope&
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit AnvilContainerManagerController(
        ::std::weak_ptr<::AnvilContainerManagerModel> containerManagerModel
    );

    MCNAPI bool _mayPickup();

    MCNAPI bool areItemsIncompatible();

    MCNAPI ::std::string getCostText();

    MCNAPI bool shouldDrawGreen();

    MCNAPI bool shouldDrawRed();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::AnvilContainerManagerModel> containerManagerModel);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
