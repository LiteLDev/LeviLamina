#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
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
class ContainerScreenSimulation;
class ItemInstance;
class ItemStack;
class ItemStackBase;
struct ActorUniqueID;
struct AutoPlaceItem;
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

    virtual bool handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    virtual bool handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    virtual bool handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    virtual bool handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    virtual bool handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    virtual bool handlePlaceAmount(::SlotData const& srcSlot, int amount, ::SlotData const& dstSlot);

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

    virtual void
    handleSplitMultiple(::SlotData const& selected, ::ItemInstance const& itemTemplate, ::SlotData const& dstSlot);

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

    virtual bool handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type);

    virtual void closeContainers();

    virtual bool isOutputSlot(::std::string const& collectionName) const;

    virtual void _updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const&,
        ::ItemStackRequestScope&
    );

#ifdef LL_PLAT_S
    virtual ::CreateContainerItemScope _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);
#else // LL_PLAT_C
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount);
#endif

#ifdef LL_PLAT_S
    virtual void _onItemTransferredFrom(::ItemInstance const&, ::SlotData const&);
#else // LL_PLAT_C
    virtual void _onItemTransferredFrom(::ItemInstance const& stack, ::SlotData const& srcSlot);
#endif

#ifdef LL_PLAT_S
    virtual void _onItemTransferredTo(::ItemInstance const&, ::SlotData const&);
#else // LL_PLAT_C
    virtual void _onItemTransferredTo(::ItemInstance const& stack, ::SlotData const& dstSlot);
#endif

#ifdef LL_PLAT_S
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&);
#else // LL_PLAT_C
    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);
#endif

#ifdef LL_PLAT_S
    virtual void _onItemPlaced(::ItemInstance const&, ::SlotData const&);
#else // LL_PLAT_C
    virtual void _onItemPlaced(::ItemInstance const& stack, ::SlotData const& dstSlot);
#endif

#ifdef LL_PLAT_S
    virtual void _onContainerScreenAction(::ContainerScreenActionResult const&);
#else // LL_PLAT_C
    virtual void _onContainerScreenAction(::ContainerScreenActionResult const& result);
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit ContainerManagerController(::std::weak_ptr<::ContainerManagerModel> containerManagerModel);

    MCNAPI void _addContainer(::std::shared_ptr<::ContainerController> uiContainer);

    MCNAPI void _addOutputsAsDestinations(
        ::ContainerScreenActionResult const& result,
        ::std::vector<::AutoPlaceResult>&    destinations
    ) const;

    MCNAPI int _appendAutoPlaceOutputs(
        ::ItemTransferRequest&                request,
        ::ItemStackBase const&                itemToPlace,
        int                                   requestAmount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        int                                   placementGroup
    );

    MCNAPI void _autoPlaceOrDrop(
        ::SlotData const&                     srcSlot,
        ::ItemTransferAmount                  amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder
    );

    MCNAPI int _buildAutoPlaceRequest(
        ::SlotData const&                     srcSlot,
        ::ItemTransferAmount                  requestTakeAmount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::ItemTransferRequest&                request
    );

    MCNAPI int _bulkAutoPlaceOutput(
        int                                   craftableCount,
        int                                   amount,
        ::ItemInstance                        outputItem,
        ::SlotData const&                     srcSlot,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI bool _canCraftIntoStorageItem(::ItemInstance const& itemToCraft, ::ItemStack const& storageItem);

    MCNAPI void _clearCreativeHotbar();

    MCNAPI void _closeContainers(::ContainerManagerModel& containerModel);

    MCNAPI ::ContainerValidationSlotData _getContainerValidationSlotData(::SlotData const& slotData) const;

    MCNAPI ::ItemStack const& _getItem(::SlotData const& slot, bool canBeEmpty) const;

    MCNAPI ::ItemStack const& _getItem0(::ContainerEnumName collectionEnumName) const;

    MCNAPI ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> _getPredictiveContainers();

    MCNAPI ::SlotData _getSlotData(::ContainerValidationSlotData const& containerValidationSlotData) const;

    MCNAPI bool _handleAutoPlace(::ItemTransferRequest const& request);

    MCNAPI bool _isContainerSimulationEnabled() const;

    MCNAPI void _onItemTransferring(
        ::ItemStack const& stack,
        ::SlotData const&  srcSlot,
        ::ContainerModel*  srcModel,
        ::SlotData const&  dstSlot,
        ::ContainerModel*  dstModel
    );

    MCNAPI void _onTransfer(::ContainerScreenActionResult const& result);

    MCNAPI void _playCraftingSound(
        ::std::weak_ptr<::ContainerManagerModel> const& containerManagerModel,
        ::SharedTypes::Legacy::LevelSoundEvent          soundEvent
    );

    MCNAPI void _registerSetThisDirtyCallback(::std::shared_ptr<::ContainerModel> containerModel);

    MCNAPI ::ContainerCategory
    _resolveToRealSourceSlot(::ContainerModel* srcModel, ::SlotData const& srcSlot, ::SlotData& realSrcSlot) const;

    MCNAPI void _returnToPlayerOrDrop(::SlotData const& srcSlot, ::ItemTransferAmount amount);

    MCNAPI void _shiftLeftStorageItemContents(
        ::std::string const&              collectionName,
        int                               selectedItemIdx,
        ::std::vector<::ItemStack> const& items
    );

    MCNAPI bool _transfer(
        ::ItemTransferType   transferType,
        ::SlotData const&    dstSlot,
        ::SlotData const&    srcSlot,
        ::ItemTransferAmount transferAmount,
        bool                 allowSwap,
        bool                 allowVisualOnlySameItemSwap
    );

    MCNAPI bool _transferSpecial(
        ::SlotData const&          srcSlot,
        ::ItemTransferAmount const transferAmount,
        ::ItemSpecialLocation      location
    );

    MCNAPI ::ItemStackRequestScope _tryBeginItemStackRequest(::ContainerManagerModel const* managerModel);

    MCNAPI void
    _updateItemStackRequest(::ContainerScreenActionResult const& result, ::ItemStackRequestScope& requestScope);

    MCNAPI bool
    _updatePreviewItem(::ItemInstance& previewItem, ::ItemInstance const& newItem, ::std::string const& collectionName);

    MCNAPI bool blockHasCustomName(::BlockPos const& blockPos) const;

    MCNAPI ::std::string getBlockName(::BlockPos const& blockPos) const;

    MCNAPI ::std::shared_ptr<::ContainerController> getContainerController(::ContainerEnumName containerEnumName) const;

    MCNAPI ::std::shared_ptr<::ContainerController> getContainerController(::std::string const& containerName) const;

    MCAPI int getContainerSize(::std::string const& collectionName) const;

    MCAPI ::SharedTypes::Legacy::ContainerType getContainerType() const;

    MCNAPI void getCurrentContainerStateList(::std::vector<::ItemStateData>& inventoryState);

    MCAPI ::std::shared_ptr<::ContainerModel> getDynamicContainerModel(::FullContainerName const& name);

    MCNAPI ::std::string getEntityName(::ActorUniqueID const& entityUniqueID) const;

    MCNAPI ::std::string getExpandoGroupName(::std::string const& collectionName, int collectionIndex) const;

    MCNAPI ::ContainerExpandStatus getExpandoStatus(::std::string const& containerName, int collectionIndex) const;

    MCAPI ::ItemStack const& getItemStack(::std::string const& collectionName, int collectionIndex) const;

    MCAPI bool handleMoveItemFromSlotIntoStorageItem(
        ::SlotData const&      srcSlot,
        ::ItemStack const&     dstStorageItem,
        ::std::optional<uchar> requestedAmount
    );

    MCNAPI bool handleMoveSelectedItemFromStorageItem(
        ::ItemStack const& srcStorageItem,
        int                selectedItemIdx,
        ::SlotData const&  dstSlot
    );

    MCAPI bool handleMoveSelectedItemFromStorageItemToStorageItem(
        ::ItemStack const& srcStorageItem,
        int                selectedItemIdx,
        ::ItemStack const& dstStorageItem
    );

    MCNAPI bool handleMoveTopItemFromStorageItem(::ItemStack const& srcStorageItem, ::SlotData const& dstSlot);

    MCAPI bool hasContainerController(::std::string const& containerName) const;

    MCNAPI bool isExpandoItem(::std::string const& collectionName, int collectionIndex);

    MCNAPI bool isItemFiltered(::std::vector<::std::string> containerNames, ::ItemStackBase const& item) const;

    MCNAPI bool playerHasRoomForItem(::ItemInstance const& item) const;

    MCNAPI void resetSplitStack();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::ContainerManagerModel> containerManagerModel);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $postInit(::std::weak_ptr<::ContainerManagerController> self);

    MCNAPI void $registerContainerCallbacks();

    MCNAPI void $setPreviewItemName(::Bedrock::Safety::RedactableString const& name);

    MCNAPI void $setItemName(::Bedrock::Safety::RedactableString const& name);

    MCNAPI ::Bedrock::Safety::RedactableString const& $getPreviewItemName() const;

    MCNAPI ::Bedrock::Safety::RedactableString const& $getItemName() const;

    MCNAPI void $updatePreviewItem();

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCNAPI bool $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCNAPI bool $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI bool $handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI bool $handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI bool $handlePlaceAmount(::SlotData const& srcSlot, int amount, ::SlotData const& dstSlot);

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

    MCNAPI void
    $handleSplitMultiple(::SlotData const& selected, ::ItemInstance const& itemTemplate, ::SlotData const& dstSlot);

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

    MCNAPI bool $handleAddToStack(::SlotData const& dstSlot, ::SlotData const& srcSlot, ::ItemTakeType type);

    MCNAPI void $closeContainers();

    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI void $_updateItemStackRequest(
        ::ContainerScreenRequestActionType,
        ::ContainerScreenActionResult const&,
        ::ItemStackRequestScope&
    );

    MCNAPI ::CreateContainerItemScope
    $_makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount);

    MCNAPI void $_onItemTransferredFrom(::ItemInstance const& stack, ::SlotData const& srcSlot);

    MCNAPI void $_onItemTransferredTo(::ItemInstance const& stack, ::SlotData const& dstSlot);

    MCNAPI void $_onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);

    MCNAPI void $_onItemPlaced(::ItemInstance const& stack, ::SlotData const& dstSlot);

    MCNAPI void $_onContainerScreenAction(::ContainerScreenActionResult const& result);
#endif


    // NOLINTEND
};
