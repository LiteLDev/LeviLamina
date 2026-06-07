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
#ifdef LL_PLAT_S
    virtual ~AnvilContainerManagerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~AnvilContainerManagerController() /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void postInit(::std::weak_ptr<::ContainerManagerController>) /*override*/;
#else // LL_PLAT_C
    virtual void postInit(::std::weak_ptr<::ContainerManagerController> self) /*override*/;
#endif

    virtual void updatePreviewItem() /*override*/;

#ifdef LL_PLAT_S
    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const&) /*override*/;
#else // LL_PLAT_C
    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const& name) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void setItemName(::Bedrock::Safety::RedactableString const&) /*override*/;
#else // LL_PLAT_C
    virtual void setItemName(::Bedrock::Safety::RedactableString const& name) /*override*/;
#endif

    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const /*override*/;

    virtual ::Bedrock::Safety::RedactableString const& getItemName() const /*override*/;

#ifdef LL_PLAT_S
    virtual bool isOutputSlot(::std::string const&) const /*override*/;
#else // LL_PLAT_C
    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const /*override*/;
#else // LL_PLAT_C
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handleTakeAmount(::SlotData const&, int, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handleTakeAll(::SlotData const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handleTakeHalf(::SlotData const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual int handleAutoPlace(
        ::SlotData const&,
        int,
        ::std::vector<::AutoPlaceItem> const&,
        ::std::vector<::AutoPlaceResult>&
    ) /*override*/;
#else // LL_PLAT_C
    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&) /*override*/;
#else // LL_PLAT_C
    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&) /*override*/;
#else // LL_PLAT_C
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const&) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void _updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const&,
        ::ItemStackRequestScope&
    ) /*override*/;
#else // LL_PLAT_C
    virtual void _updateItemStackRequest(
        ::ContainerScreenRequestActionType   result,
        ::ContainerScreenActionResult const& requestScope,
        ::ItemStackRequestScope&
    ) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit AnvilContainerManagerController(
        ::std::weak_ptr<::AnvilContainerManagerModel> containerManagerModel
    );

    MCNAPI void _consumeMaterials();

    MCNAPI bool _consumeOneFromAnvilInputSlot();

    MCNAPI void _createCraftItem(::ItemInstance& stack, ::ItemStackRequestScope const& requestScope);

    MCNAPI bool _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI bool _mayPickup();

    MCNAPI void _onItemGrabbed();

    MCNAPI void _setupCallbacks();

    MCNAPI ::std::string getCostText();

    MCNAPI bool getHasInputItem();

    MCNAPI bool shouldCrossOutIconBeVisible();

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
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
        ::ContainerScreenRequestActionType   result,
        ::ContainerScreenActionResult const& requestScope,
        ::ItemStackRequestScope&
    );
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
