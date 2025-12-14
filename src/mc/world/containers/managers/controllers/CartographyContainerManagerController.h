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
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>                 mPreviewName;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>                 mItemName;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mItemResultLocName;
    ::ll::TypedStorage<8, 40, ::SlotData const>                                    mCreatedItemOutputSlot;
    ::ll::TypedStorage<1, 1, bool>                                                 mCurrentlyCrafting;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsCurrentlyRenaming;
    ::ll::TypedStorage<1, 1, bool>                                                 mWasPreviouslyRenaming;
    ::ll::TypedStorage<4, 4, ::MapOutputType>                                      mMapOutputType;
    ::ll::TypedStorage<8, 136, ::ItemResultPreview>                                mResultPreview;
    // NOLINTEND

public:
    // prevent constructor by default
    CartographyContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~CartographyContainerManagerController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CartographyContainerManagerController() /*override*/;
#endif

    virtual void postInit(::std::weak_ptr<::ContainerManagerController> self) /*override*/;

    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;

    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const& name) /*override*/;

    virtual void setItemName(::Bedrock::Safety::RedactableString const& name) /*override*/;

    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const /*override*/;

    virtual ::Bedrock::Safety::RedactableString const& getItemName() const /*override*/;

    virtual void updatePreviewItem() /*override*/;

    virtual void handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot) /*override*/;

    virtual void handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual void handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;

    virtual void handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual void handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot) /*override*/;

    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;

    virtual void _onContainerScreenAction(::ContainerScreenActionResult const& result) /*override*/;

    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const&) /*override*/;

    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot) /*override*/;

    virtual void _updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const& result,
        ::ItemStackRequestScope&             requestScope
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit CartographyContainerManagerController(
        ::std::weak_ptr<::CartographyContainerManagerModel> containerManagerModel
    );

    MCNAPI_C ::ItemInstance _buildResultItem();

    MCNAPI_C void _clearName();

    MCNAPI_C bool _createCraftItem(::ItemInstance& instance, ::ItemStackRequestScope const& requestScope);

    MCNAPI_C bool _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI_C void _setName(::Bedrock::Safety::RedactableString const& name);

    MCNAPI_C void _setupCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::CartographyContainerManagerModel> containerManagerModel);
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

    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCNAPI void $setPreviewItemName(::Bedrock::Safety::RedactableString const& name);

    MCNAPI void $setItemName(::Bedrock::Safety::RedactableString const& name);

    MCNAPI ::Bedrock::Safety::RedactableString const& $getPreviewItemName() const;

    MCNAPI ::Bedrock::Safety::RedactableString const& $getItemName() const;

    MCNAPI void $updatePreviewItem();

    MCNAPI void $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCNAPI void $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI void $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI void $handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI void $handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI void $_onContainerScreenAction(::ContainerScreenActionResult const& result);

    MCNAPI ::CreateContainerItemScope $_makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const&);

    MCNAPI void $_onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);

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
