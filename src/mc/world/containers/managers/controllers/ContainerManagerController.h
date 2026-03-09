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
    MCAPI_C void _addContainer(::std::shared_ptr<::ContainerController> uiContainer);

    MCAPI_C void _addOutputsAsDestinations(
        ::ContainerScreenActionResult const& result,
        ::std::vector<::AutoPlaceResult>&    destinations
    ) const;

    MCAPI_C int _appendAutoPlaceOutputs(
        ::ItemTransferRequest&                request,
        ::ItemStackBase const&                itemToPlace,
        int                                   requestAmount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        int                                   placementGroup
    );

    MCAPI_C void _autoPlaceOrDrop(
        ::SlotData const&                     srcSlot,
        ::ItemTransferAmount                  amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder
    );

    MCAPI_C int _buildAutoPlaceRequest(
        ::SlotData const&                     srcSlot,
        ::ItemTransferAmount                  requestTakeAmount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::ItemTransferRequest&                request
    );

    MCAPI_C int _bulkAutoPlaceOutput(
        int                                   craftableCount,
        int                                   amount,
        ::ItemInstance                        outputItem,
        ::SlotData const&                     srcSlot,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCAPI_C ::AutoPlaceRequest const _canAutoPlace(
        ::SlotData const&                     srcSlot,
        ::ItemTransferAmount                  requestTakeAmount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder
    );

    MCAPI_C bool _canCraftIntoStorageItem(::ItemInstance const& itemToCraft, ::ItemStack const& storageItem);

    MCAPI_C void _clearCreativeHotbar();

    MCAPI_C void _closeContainers(::ContainerManagerModel& containerModel);

    MCAPI_C ::ContainerValidationSlotData _getContainerValidationSlotData(::SlotData const& slotData) const;

    MCAPI_C ::ItemStack const& _getItem(::SlotData const& slot, bool canBeEmpty) const;

    MCAPI_C ::ItemStack const& _getItem0(::ContainerEnumName collectionEnumName) const;

    MCAPI_C ::std::tuple<::ItemStack const&, ::std::shared_ptr<::ContainerController>>
    _getItemAndContainerController(::SlotData const& slot, bool canBeEmpty) const;

    MCAPI_C ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> _getPredictiveContainers();

    MCAPI_C ::ContainerScreenContext _getScreenContext() const;

    MCAPI_C ::SlotData _getSlotData(::ContainerValidationSlotData const& containerValidationSlotData) const;

    MCAPI_C bool _handleAutoPlace(::ItemTransferRequest const& request);

    MCAPI_C void _handleSplitMultiple(
        ::SelectedSlotInfo const& selected,
        ::ItemInstance const&     itemTemplate,
        ::SlotData const&         dstSlot
    );

    MCAPI_C bool _isContainerSimulationEnabled() const;

    MCAPI_C void _onItemTransferring(
        ::ItemStack const& stack,
        ::SlotData const&  srcSlot,
        ::ContainerModel*  srcModel,
        ::SlotData const&  dstSlot,
        ::ContainerModel*  dstModel
    );

    MCAPI_C void _onTransfer(::ContainerScreenActionResult const& result);

    MCAPI_C void _playCraftingSound(
        ::std::weak_ptr<::ContainerManagerModel> const& containerManagerModel,
        ::SharedTypes::Legacy::LevelSoundEvent          soundEvent
    );

    MCAPI_C void _registerSetThisDirtyCallback(::std::shared_ptr<::ContainerModel> containerModel);

    MCAPI_C ::ContainerCategory
    _resolveToRealSourceSlot(::ContainerModel* srcModel, ::SlotData const& srcSlot, ::SlotData& realSrcSlot) const;

    MCAPI_C void _returnToPlayerOrDrop(::SlotData const& srcSlot, ::ItemTransferAmount amount);

    MCAPI_C void _shiftLeftStorageItemContents(
        ::std::string const&              collectionName,
        int                               selectedItemIdx,
        ::std::vector<::ItemStack> const& items
    );

    MCAPI_C bool _transfer(
        ::ItemTransferType   transferType,
        ::SlotData const&    dstSlot,
        ::SlotData const&    srcSlot,
        ::ItemTransferAmount transferAmount,
        bool                 allowSwap,
        bool                 allowVisualOnlySameItemSwap
    );

    MCAPI_C bool _transferAll(::ItemTransferType transferType, ::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCAPI_C bool
    _transferSpecial(::SlotData const& srcSlot, ::ItemTransferAmount transferAmount, ::ItemSpecialLocation location);

    MCAPI_C ::ItemStackRequestScope _tryBeginItemStackRequest(::ContainerManagerModel const* managerModel);

    MCAPI_C void
    _updateItemStackRequest(::ContainerScreenActionResult const& result, ::ItemStackRequestScope& requestScope);

    MCAPI_C bool
    _updatePreviewItem(::ItemInstance& previewItem, ::ItemInstance const& newItem, ::std::string const& collectionName);

    MCAPI_C ::std::string getBlockName(::BlockPos const& blockPos) const;

    MCAPI_C ::std::shared_ptr<::ContainerController> getContainerController(::std::string const& containerName) const;

    MCAPI_C ::std::weak_ptr<::ContainerModel> getContainerModel(::std::string const& containerName) const;

    MCAPI_C int getContainerSize(::std::string const& collectionName) const;

    MCAPI_C void getCurrentContainerStateList(::std::vector<::ItemStateData>& inventoryState);

    MCAPI_C ::std::shared_ptr<::ContainerModel> getDynamicContainerModel(::FullContainerName const& name);

    MCAPI_C ::std::string getEntityName(::ActorUniqueID const& entityUniqueID) const;

    MCAPI_C ::std::string getExpandoGroupName(::std::string const& collectionName, int collectionIndex) const;

    MCAPI_C ::ContainerExpandStatus getExpandoStatus(::std::string const& containerName, int collectionIndex) const;

    MCAPI_C ::ItemStack const& getItemStack(::std::string const& collectionName, int collectionIndex) const;

    MCAPI_C bool handleMoveItemFromSlotIntoStorageItem(
        ::SlotData const&      srcSlot,
        ::ItemStack const&     dstStorageItem,
        ::std::optional<uchar> requestedAmount
    );

    MCAPI_C bool handleMoveSelectedItemFromStorageItem(
        ::ItemStack const& srcStorageItem,
        int                selectedItemIdx,
        ::SlotData const&  dstSlot
    );

    MCAPI_C bool handleMoveSelectedItemFromStorageItemToStorageItem(
        ::ItemStack const& srcStorageItem,
        int                selectedItemIdx,
        ::ItemStack const& dstStorageItem
    );

    MCAPI_C bool handleMoveTopItemFromStorageItem(::ItemStack const& srcStorageItem, ::SlotData const& dstSlot);

    MCAPI_C bool hasContainerController(::std::string const& containerName) const;

    MCAPI_C bool isExpandoItem(::std::string const& collectionName, int collectionIndex);

    MCAPI_C bool isItemFiltered(::std::vector<::std::string> containerNames, ::ItemStackBase const& item) const;

    MCAPI_C bool isValid(float pickRange);

    MCAPI_C bool playerHasRoomForItem(::ItemInstance const& item) const;

    MCAPI_C void resetSplitStack();

    MCAPI_C void sortStorageContainer(::std::string const& storageName);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI_C static ::std::string_view const& TRANSFER_NO_DESTINATION();

    MCAPI_C static ::std::string_view const& TRANSFER_NO_ORIGIN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::std::weak_ptr<::ContainerManagerModel> containerManagerModel);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $postInit(::std::weak_ptr<::ContainerManagerController>);

    MCAPI void $registerContainerCallbacks();

    MCFOLD void $setPreviewItemName(::Bedrock::Safety::RedactableString const& name);

    MCFOLD void $setItemName(::Bedrock::Safety::RedactableString const& name);

    MCFOLD ::Bedrock::Safety::RedactableString const& $getPreviewItemName() const;

    MCFOLD ::Bedrock::Safety::RedactableString const& $getItemName() const;

    MCFOLD void $updatePreviewItem();

    MCAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCAPI void $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCAPI void $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCAPI void $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCAPI void $handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCAPI void $handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCAPI void $handlePlaceAmount(::SlotData const& srcSlot, int amount, ::SlotData const& dstSlot);

    MCAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCAPI int $handleAutoPlaceStack(
        ::SlotData const&                     srcSlot,
        ::ItemTakeType                        takeType,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCAPI void $handleSplitSingle(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCAPI void $handleSplitMultiple(
        ::SelectedSlotInfo const& selected,
        ::ItemInstance const&     itemTemplate,
        ::SlotData const&         dstSlot
    );

    MCAPI bool $handleCoalesce(
        ::SlotData const&                   dstSlot,
        ::std::vector<::std::string> const& coalesceOrder,
        ::std::string const&                coalesceSrc
    );

    MCAPI bool $handleSwap(::SlotData const& slotA, ::SlotData const& slotB);

    MCAPI bool $handleDrop(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCAPI bool $handleDestroy(::SelectedSlotInfo const& selected, ::ItemTransferAmount const transferAmount);

    MCAPI bool $handleDestroy(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCAPI bool $handleConsume(::SlotData const& srcSlot, ::ItemTransferAmount const transferAmount);

    MCAPI void $handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type);

    MCAPI void $closeContainers();

    MCFOLD bool $isOutputSlot(::std::string const& collectionName) const;

    MCFOLD void $_updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const&,
        ::ItemStackRequestScope&
    );

    MCAPI ::CreateContainerItemScope $_makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);

    MCAPI void $_onItemTransferredFrom(::ItemInstance const& stack, ::SlotData const& srcSlot);

    MCAPI void $_onItemTransferredTo(::ItemInstance const& stack, ::SlotData const& dstSlot);

    MCFOLD void $_onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);

    MCFOLD void $_onItemPlaced(::ItemInstance const& stack, ::SlotData const& dstSlot);

    MCFOLD void $_onContainerScreenAction(::ContainerScreenActionResult const& result);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
