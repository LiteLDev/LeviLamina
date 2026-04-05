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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ContainerManagerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ContainerManagerController() = default;
#else // LL_PLAT_C
    virtual ~ContainerManagerController();
#endif

    virtual void postInit(::std::weak_ptr<::ContainerManagerController> self);

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

    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& amount);

    virtual void _onItemTransferredFrom(::ItemInstance const& stack, ::SlotData const& srcSlot);

    virtual void _onItemTransferredTo(::ItemInstance const& stack, ::SlotData const& dstSlot);

    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);

    virtual void _onItemPlaced(::ItemInstance const& stack, ::SlotData const& dstSlot);

    virtual void _onContainerScreenAction(::ContainerScreenActionResult const& result);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit ContainerManagerController(::std::weak_ptr<::ContainerManagerModel> containerManagerModel);

    MCAPI void _addContainer(::std::shared_ptr<::ContainerController> uiContainer);

    MCAPI void _addOutputsAsDestinations(
        ::ContainerScreenActionResult const& result,
        ::std::vector<::AutoPlaceResult>&    destinations
    ) const;

    MCAPI int _appendAutoPlaceOutputs(
        ::ItemTransferRequest&                request,
        ::ItemStackBase const&                itemToPlace,
        int                                   requestAmount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        int                                   placementGroup
    );

    MCAPI void _autoPlaceOrDrop(
        ::SlotData const&                     srcSlot,
        ::ItemTransferAmount                  amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder
    );

    MCAPI int _buildAutoPlaceRequest(
        ::SlotData const&                     srcSlot,
        ::ItemTransferAmount                  requestTakeAmount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::ItemTransferRequest&                request
    );

    MCAPI int _bulkAutoPlaceOutput(
        int                                   craftableCount,
        int                                   amount,
        ::ItemInstance                        outputItem,
        ::SlotData const&                     srcSlot,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCAPI ::AutoPlaceRequest const _canAutoPlace(
        ::SlotData const&                     srcSlot,
        ::ItemTransferAmount                  requestTakeAmount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder
    );

    MCAPI bool _canCraftIntoStorageItem(::ItemInstance const& itemToCraft, ::ItemStack const& storageItem);

    MCAPI void _clearCreativeHotbar();

    MCAPI void _closeContainers(::ContainerManagerModel& containerModel);

    MCAPI ::ContainerValidationSlotData _getContainerValidationSlotData(::SlotData const& slotData) const;

    MCAPI ::ItemStack const& _getItem(::SlotData const& slot, bool canBeEmpty) const;

    MCAPI ::ItemStack const& _getItem0(::ContainerEnumName collectionEnumName) const;

    MCAPI ::std::tuple<::ItemStack const&, ::std::shared_ptr<::ContainerController>>
    _getItemAndContainerController(::SlotData const& slot, bool canBeEmpty) const;

    MCAPI ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> _getPredictiveContainers();

    MCAPI ::ContainerScreenContext _getScreenContext() const;

    MCAPI ::SlotData _getSlotData(::ContainerValidationSlotData const& containerValidationSlotData) const;

    MCAPI bool _handleAutoPlace(::ItemTransferRequest const& request);

    MCAPI void _handleSplitMultiple(
        ::SelectedSlotInfo const& selected,
        ::ItemInstance const&     itemTemplate,
        ::SlotData const&         dstSlot
    );

    MCAPI bool _isContainerSimulationEnabled() const;

    MCAPI void _onItemTransferring(
        ::ItemStack const& stack,
        ::SlotData const&  srcSlot,
        ::ContainerModel*  srcModel,
        ::SlotData const&  dstSlot,
        ::ContainerModel*  dstModel
    );

    MCAPI void _onTransfer(::ContainerScreenActionResult const& result);

    MCAPI void _playCraftingSound(
        ::std::weak_ptr<::ContainerManagerModel> const& containerManagerModel,
        ::SharedTypes::Legacy::LevelSoundEvent          soundEvent
    );

    MCAPI void _registerSetThisDirtyCallback(::std::shared_ptr<::ContainerModel> containerModel);

    MCAPI ::ContainerCategory
    _resolveToRealSourceSlot(::ContainerModel* srcModel, ::SlotData const& srcSlot, ::SlotData& realSrcSlot) const;

    MCAPI void _returnToPlayerOrDrop(::SlotData const& srcSlot, ::ItemTransferAmount amount);

    MCAPI void _shiftLeftStorageItemContents(
        ::std::string const&              collectionName,
        int                               selectedItemIdx,
        ::std::vector<::ItemStack> const& items
    );

    MCAPI bool _transfer(
        ::ItemTransferType   transferType,
        ::SlotData const&    dstSlot,
        ::SlotData const&    srcSlot,
        ::ItemTransferAmount transferAmount,
        bool                 allowSwap,
        bool                 allowVisualOnlySameItemSwap
    );

    MCAPI bool _transferAll(::ItemTransferType transferType, ::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCAPI bool
    _transferSpecial(::SlotData const& srcSlot, ::ItemTransferAmount transferAmount, ::ItemSpecialLocation location);

    MCAPI ::ItemStackRequestScope _tryBeginItemStackRequest(::ContainerManagerModel const* managerModel);

    MCAPI void
    _updateItemStackRequest(::ContainerScreenActionResult const& result, ::ItemStackRequestScope& requestScope);

    MCAPI bool
    _updatePreviewItem(::ItemInstance& previewItem, ::ItemInstance const& newItem, ::std::string const& collectionName);

    MCAPI ::std::string getBlockName(::BlockPos const& blockPos) const;

    MCAPI ::std::shared_ptr<::ContainerController> getContainerController(::std::string const& containerName) const;

    MCAPI ::std::weak_ptr<::ContainerModel> getContainerModel(::std::string const& containerName) const;

    MCAPI int getContainerSize(::std::string const& collectionName) const;

    MCAPI void getCurrentContainerStateList(::std::vector<::ItemStateData>& inventoryState);

    MCAPI ::std::shared_ptr<::ContainerModel> getDynamicContainerModel(::FullContainerName const& name);

    MCAPI ::std::string getEntityName(::ActorUniqueID const& entityUniqueID) const;

    MCAPI ::std::string getExpandoGroupName(::std::string const& collectionName, int collectionIndex) const;

    MCAPI ::ContainerExpandStatus getExpandoStatus(::std::string const& containerName, int collectionIndex) const;

    MCAPI ::ItemStack const& getItemStack(::std::string const& collectionName, int collectionIndex) const;

    MCAPI bool handleMoveItemFromSlotIntoStorageItem(
        ::SlotData const&      srcSlot,
        ::ItemStack const&     dstStorageItem,
        ::std::optional<uchar> requestedAmount
    );

    MCAPI bool handleMoveSelectedItemFromStorageItem(
        ::ItemStack const& srcStorageItem,
        int                selectedItemIdx,
        ::SlotData const&  dstSlot
    );

    MCAPI bool handleMoveSelectedItemFromStorageItemToStorageItem(
        ::ItemStack const& srcStorageItem,
        int                selectedItemIdx,
        ::ItemStack const& dstStorageItem
    );

    MCAPI bool handleMoveTopItemFromStorageItem(::ItemStack const& srcStorageItem, ::SlotData const& dstSlot);

    MCAPI bool hasContainerController(::std::string const& containerName) const;

    MCAPI bool isExpandoItem(::std::string const& collectionName, int collectionIndex);

    MCAPI bool isItemFiltered(::std::vector<::std::string> containerNames, ::ItemStackBase const& item) const;

    MCAPI bool isValid(float pickRange);

    MCAPI bool playerHasRoomForItem(::ItemInstance const& item) const;

    MCAPI void resetSplitStack();

    MCAPI void sortStorageContainer(::std::string const& storageName);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& TRANSFER_NO_DESTINATION();

    MCAPI static ::std::string_view const& TRANSFER_NO_ORIGIN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::weak_ptr<::ContainerManagerModel> containerManagerModel);
#endif
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
    MCFOLD void $postInit(::std::weak_ptr<::ContainerManagerController> self);

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

    MCAPI ::CreateContainerItemScope
    $_makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& amount);

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
