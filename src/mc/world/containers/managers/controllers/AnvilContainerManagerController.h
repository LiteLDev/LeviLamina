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

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnvilContainerManagerController() /*override*/ = default;

    virtual void postInit(::std::weak_ptr<::ContainerManagerController> self) /*override*/;

    virtual void updatePreviewItem() /*override*/;

    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const& name) /*override*/;

    virtual void setItemName(::Bedrock::Safety::RedactableString const& name) /*override*/;

    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const /*override*/;

    virtual ::Bedrock::Safety::RedactableString const& getItemName() const /*override*/;

    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;

    virtual void handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot) /*override*/;

    virtual void handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual void handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual void handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;

    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;

    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot) /*override*/;

    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const&) /*override*/;

    virtual void _updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const& result,
        ::ItemStackRequestScope&             requestScope
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _consumeMaterials();

    MCNAPI_C bool _consumeOneFromAnvilInputSlot();

    MCNAPI_C void _createCraftItem(::ItemInstance& stack, ::ItemStackRequestScope const& requestScope);

    MCNAPI_C bool _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI_C bool _isTooExpensive();

    MCNAPI_C void _onItemGrabbed();

    MCNAPI_C bool _playerHasEnoughXP();

    MCNAPI_C void _setupCallbacks();

    MCNAPI_C ::std::string getCostText();

    MCNAPI_C bool shouldDrawRed();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::AnvilContainerManagerModel> containerManagerModel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $postInit(::std::weak_ptr<::ContainerManagerController> self);

    MCNAPI void $updatePreviewItem();

    MCNAPI void $setPreviewItemName(::Bedrock::Safety::RedactableString const& name);

    MCNAPI void $setItemName(::Bedrock::Safety::RedactableString const& name);

    MCNAPI ::Bedrock::Safety::RedactableString const& $getPreviewItemName() const;

    MCNAPI ::Bedrock::Safety::RedactableString const& $getItemName() const;

    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCNAPI void $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCNAPI void $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI void $handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI void $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI void $_onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);

    MCNAPI ::CreateContainerItemScope $_makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const&);

    MCNAPI void $_updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const& result,
        ::ItemStackRequestScope&             requestScope
    );
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
