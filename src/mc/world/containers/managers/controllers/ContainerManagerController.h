#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ItemSpecialLocation.h"
#include "mc/world/containers/managers/controllers/ItemTransferType.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Container;
class ContainerController;
class ContainerManagerModel;
class ContainerModel;
class ContainerScreenContext;
class ContainerScreenSimulation;
class ItemInstance;
class ItemStack;
class ItemStackBase;
struct ActorUniqueID;
struct AutoPlaceItem;
struct AutoPlaceRequest;
struct AutoPlaceResult;
struct ContainerScreenActionResult;
struct ContainerSimulationSplitStack;
struct ContainerSplitControl;
struct ContainerValidationSlotData;
struct CreateContainerItemScope;
struct FullContainerName;
struct ItemStackRequestScope;
struct ItemStateData;
struct ItemTransferAmount;
struct ItemTransferRequest;
struct SelectedSlotInfo;
struct SlotData;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class ContainerManagerController : public ::std::enable_shared_from_this<::ContainerManagerController> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContainerManagerModel>> mContainerManagerModel;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::shared_ptr<::ContainerController>>>
                                                                              mContainers;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerSplitControl>>         mContainerSplitItemStackItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerSimulationSplitStack>> mContainerSimulationSplitItemStacks;
    ::ll::TypedStorage<4, 4, int>                                             mSplitItemRemainder;
    ::ll::TypedStorage<1, 1, bool>                                            mContainerDirty;
    ::ll::TypedStorage<1, 1, bool>                                            mContainersClosed;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContainerScreenSimulation>>  mSimulation;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mDynamicContainerNotifier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ContainerManagerController() = default;
#else // LL_PLAT_C
    virtual ~ContainerManagerController();
#endif

    virtual void postInit(::std::weak_ptr<::ContainerManagerController>);

    virtual void registerContainerCallbacks();

    virtual void setPreviewItemName(::Bedrock::Safety::RedactableString const& name);

    virtual void setItemName(::Bedrock::Safety::RedactableString const& name);

    virtual ::Bedrock::Safety::RedactableString const& getPreviewItemName() const;

    virtual ::Bedrock::Safety::RedactableString const& getItemName() const;

    virtual void updatePreviewItem();

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const;

    virtual void handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    virtual void handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    virtual void handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    virtual void handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    virtual void handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    virtual void handlePlaceAmount(::SlotData const& srcSlot, int amount, ::SlotData const& dstSlot);

    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    virtual int handleAutoPlaceStack(
        ::SlotData const&                     srcSlot,
        ::ItemTakeType                        takeType,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    virtual void handleSplitSingle(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    virtual void handleSplitMultiple(
        ::SelectedSlotInfo const& selected,
        ::ItemInstance const&     itemTemplate,
        ::SlotData const&         dstSlot
    );

    virtual bool handleCoalesce(
        ::SlotData const&                   dstSlot,
        ::std::vector<::std::string> const& coalesceOrder,
        ::std::string const&                coalesceSrc
    );

    virtual bool handleSwap(::SlotData const& slotA, ::SlotData const& slotB);

    virtual bool handleDrop(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    virtual bool handleDestroy(::SelectedSlotInfo const& selected, ::ItemTransferAmount const transferAmount);

    virtual bool handleDestroy(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    virtual bool handleConsume(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    virtual void handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type);

    virtual void closeContainers();

    virtual bool isOutputSlot(::std::string const& collectionName) const;

    virtual void _updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const&,
        ::ItemStackRequestScope&
    );

    virtual ::CreateContainerItemScope _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);

    virtual void _onItemTransferredFrom(::ItemInstance const& stack, ::SlotData const& srcSlot);

    virtual void _onItemTransferredTo(::ItemInstance const& stack, ::SlotData const& dstSlot);

    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);

    virtual void _onItemPlaced(::ItemInstance const& stack, ::SlotData const& dstSlot);

    virtual void _onContainerScreenAction(::ContainerScreenActionResult const& result);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _addContainer(::std::shared_ptr<::ContainerController> uiContainer);

    MCNAPI_C void _addOutputsAsDestinations(
        ::ContainerScreenActionResult const& result,
        ::std::vector<::AutoPlaceResult>&    destinations
    ) const;

    MCNAPI_C int _appendAutoPlaceOutputs(
        ::ItemTransferRequest&                request,
        ::ItemStackBase const&                itemToPlace,
        int                                   requestAmount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        int                                   placementGroup
    );

    MCNAPI_C void _autoPlaceOrDrop(
        ::SlotData const&                     srcSlot,
        ::ItemTransferAmount                  amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder
    );

    MCNAPI_C int _buildAutoPlaceRequest(
        ::SlotData const&                     srcSlot,
        ::ItemTransferAmount                  requestTakeAmount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::ItemTransferRequest&                request
    );

    MCNAPI_C int _bulkAutoPlaceOutput(
        int                                   craftableCount,
        int                                   amount,
        ::ItemInstance                        outputItem,
        ::SlotData const&                     srcSlot,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI_C ::AutoPlaceRequest const _canAutoPlace(
        ::SlotData const&                     srcSlot,
        ::ItemTransferAmount                  requestTakeAmount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder
    );

    MCNAPI_C bool _canCraftIntoStorageItem(::ItemInstance const& itemToCraft, ::ItemStack const& storageItem);

    MCNAPI_C void _clearCreativeHotbar();

    MCNAPI_C void _closeContainers(::ContainerManagerModel& containerModel);

    MCNAPI_C ::ContainerValidationSlotData _getContainerValidationSlotData(::SlotData const& slotData) const;

    MCNAPI_C ::ItemStack const& _getItem(::SlotData const& slot, bool canBeEmpty) const;

    MCNAPI_C ::ItemStack const& _getItem0(::ContainerEnumName collectionEnumName) const;

    MCNAPI_C ::std::tuple<::ItemStack const&, ::std::shared_ptr<::ContainerController>>
    _getItemAndContainerController(::SlotData const& slot, bool canBeEmpty) const;

    MCNAPI_C ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> _getPredictiveContainers();

    MCNAPI_C ::ContainerScreenContext _getScreenContext() const;

    MCNAPI_C ::SlotData _getSlotData(::ContainerValidationSlotData const& containerValidationSlotData) const;

    MCNAPI_C bool _handleAutoPlace(::ItemTransferRequest const& request);

    MCNAPI_C void _handleSplitMultiple(
        ::SelectedSlotInfo const& selected,
        ::ItemInstance const&     itemTemplate,
        ::SlotData const&         dstSlot
    );

    MCNAPI_C bool _isContainerSimulationEnabled() const;

    MCNAPI_C void _onItemTransferring(
        ::ItemStack const& stack,
        ::SlotData const&  srcSlot,
        ::ContainerModel*  srcModel,
        ::SlotData const&  dstSlot,
        ::ContainerModel*  dstModel
    );

    MCNAPI_C void _onTransfer(::ContainerScreenActionResult const& result);

    MCNAPI_C void _playCraftingSound(
        ::std::weak_ptr<::ContainerManagerModel> const& containerManagerModel,
        ::SharedTypes::Legacy::LevelSoundEvent          soundEvent
    );

    MCNAPI_C void _registerSetThisDirtyCallback(::std::shared_ptr<::ContainerModel> containerModel);

    MCNAPI_C ::ContainerCategory
    _resolveToRealSourceSlot(::ContainerModel* srcModel, ::SlotData const& srcSlot, ::SlotData& realSrcSlot) const;

    MCNAPI_C void _returnToPlayerOrDrop(::SlotData const& srcSlot, ::ItemTransferAmount amount);

    MCNAPI_C void _shiftLeftStorageItemContents(
        ::std::string const&              collectionName,
        int                               selectedItemIdx,
        ::std::vector<::ItemStack> const& items
    );

    MCNAPI_C bool _transfer(
        ::ItemTransferType   transferType,
        ::SlotData const&    dstSlot,
        ::SlotData const&    srcSlot,
        ::ItemTransferAmount transferAmount,
        bool                 allowSwap,
        bool                 allowVisualOnlySameItemSwap
    );

    MCNAPI_C bool _transferAll(::ItemTransferType transferType, ::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI_C bool
    _transferSpecial(::SlotData const& srcSlot, ::ItemTransferAmount transferAmount, ::ItemSpecialLocation location);

    MCNAPI_C ::ItemStackRequestScope _tryBeginItemStackRequest(::ContainerManagerModel const* managerModel);

    MCNAPI_C void
    _updateItemStackRequest(::ContainerScreenActionResult const& result, ::ItemStackRequestScope& requestScope);

    MCNAPI_C bool
    _updatePreviewItem(::ItemInstance& previewItem, ::ItemInstance const& newItem, ::std::string const& collectionName);

    MCNAPI_C ::std::string getBlockName(::BlockPos const& blockPos) const;

    MCNAPI_C ::std::shared_ptr<::ContainerController> getContainerController(::std::string const& containerName) const;

    MCNAPI_C ::std::weak_ptr<::ContainerModel> getContainerModel(::std::string const& containerName) const;

    MCNAPI_C int getContainerSize(::std::string const& collectionName) const;

    MCNAPI_C void getCurrentContainerStateList(::std::vector<::ItemStateData>& inventoryState);

    MCNAPI_C ::std::shared_ptr<::ContainerModel> getDynamicContainerModel(::FullContainerName const& name);

    MCNAPI_C ::std::string getEntityName(::ActorUniqueID const& entityUniqueID) const;

    MCNAPI_C ::std::string getExpandoGroupName(::std::string const& collectionName, int collectionIndex) const;

    MCNAPI_C ::ContainerExpandStatus getExpandoStatus(::std::string const& containerName, int collectionIndex) const;

    MCNAPI_C ::ItemStack const& getItemStack(::std::string const& collectionName, int collectionIndex) const;

    MCNAPI_C bool handleMoveItemFromSlotIntoStorageItem(
        ::SlotData const&      srcSlot,
        ::ItemStack const&     dstStorageItem,
        ::std::optional<uchar> requestedAmount
    );

    MCNAPI_C bool handleMoveSelectedItemFromStorageItem(
        ::ItemStack const& srcStorageItem,
        int                selectedItemIdx,
        ::SlotData const&  dstSlot
    );

    MCNAPI_C bool handleMoveSelectedItemFromStorageItemToStorageItem(
        ::ItemStack const& srcStorageItem,
        int                selectedItemIdx,
        ::ItemStack const& dstStorageItem
    );

    MCNAPI_C bool handleMoveTopItemFromStorageItem(::ItemStack const& srcStorageItem, ::SlotData const& dstSlot);

    MCNAPI_C bool hasContainerController(::std::string const& containerName) const;

    MCNAPI_C bool isExpandoItem(::std::string const& collectionName, int collectionIndex);

    MCNAPI_C bool isItemFiltered(::std::vector<::std::string> containerNames, ::ItemStackBase const& item) const;

    MCNAPI_C bool isValid(float pickRange);

    MCNAPI_C bool playerHasRoomForItem(::ItemInstance const& item) const;

    MCNAPI_C void resetSplitStack();

    MCNAPI_C void sortStorageContainer(::std::string const& storageName);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::std::string_view const& TRANSFER_NO_DESTINATION();

    MCNAPI_C static ::std::string_view const& TRANSFER_NO_ORIGIN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::weak_ptr<::ContainerManagerModel> containerManagerModel);
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
    MCNAPI void $postInit(::std::weak_ptr<::ContainerManagerController>);

    MCNAPI void $registerContainerCallbacks();

    MCNAPI void $setPreviewItemName(::Bedrock::Safety::RedactableString const& name);

    MCNAPI void $setItemName(::Bedrock::Safety::RedactableString const& name);

    MCNAPI ::Bedrock::Safety::RedactableString const& $getPreviewItemName() const;

    MCNAPI ::Bedrock::Safety::RedactableString const& $getItemName() const;

    MCNAPI void $updatePreviewItem();

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCNAPI void $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCNAPI void $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI void $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI void $handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI void $handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI void $handlePlaceAmount(::SlotData const& srcSlot, int amount, ::SlotData const& dstSlot);

    MCNAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI int $handleAutoPlaceStack(
        ::SlotData const&                     srcSlot,
        ::ItemTakeType                        takeType,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI void $handleSplitSingle(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI void $handleSplitMultiple(
        ::SelectedSlotInfo const& selected,
        ::ItemInstance const&     itemTemplate,
        ::SlotData const&         dstSlot
    );

    MCNAPI bool $handleCoalesce(
        ::SlotData const&                   dstSlot,
        ::std::vector<::std::string> const& coalesceOrder,
        ::std::string const&                coalesceSrc
    );

    MCNAPI bool $handleSwap(::SlotData const& slotA, ::SlotData const& slotB);

    MCNAPI bool $handleDrop(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCNAPI bool $handleDestroy(::SelectedSlotInfo const& selected, ::ItemTransferAmount const transferAmount);

    MCNAPI bool $handleDestroy(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCNAPI bool $handleConsume(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCNAPI void $handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type);

    MCNAPI void $closeContainers();

    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI void $_updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const&,
        ::ItemStackRequestScope&
    );

    MCNAPI ::CreateContainerItemScope $_makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);

    MCNAPI void $_onItemTransferredFrom(::ItemInstance const& stack, ::SlotData const& srcSlot);

    MCNAPI void $_onItemTransferredTo(::ItemInstance const& stack, ::SlotData const& dstSlot);

    MCNAPI void $_onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);

    MCNAPI void $_onItemPlaced(::ItemInstance const& stack, ::SlotData const& dstSlot);

    MCNAPI void $_onContainerScreenAction(::ContainerScreenActionResult const& result);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
