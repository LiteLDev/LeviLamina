#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"
#include "mc/world/inventory/network/ContainerScreenContext.h"
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"
#include "mc/world/inventory/simulation/ContainerValidationDebug.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenValidatorBase;
class ContainerValidationBase;
class ItemStack;
class SimpleSparseContainer;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
struct ContainerValidationLayer;
struct ContainerValidationResult;
struct ContainerValidationSlotData;
struct ContainerValidationSlotInfo;
// clang-format on

class ContainerScreenValidation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ContainerScreenContext>                          mScreenContext;
    ::ll::TypedStorage<4, 4, ::ContainerValidationCaller>                        mCaller;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::FullContainerName, uint64>> mContainerIndexMap;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::ContainerValidationBase const>>>
        mContainerValidatorMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>>>
                                                                                mPredictiveContainers;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContainerScreenValidatorBase>> mContainerScreenValidator;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerValidationLayer>>        mValidationStack;
    ::ll::TypedStorage<4, 12, ::ContainerValidationDebug const>                 mDebug;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerScreenValidation();

    virtual ::ContainerValidationResult
    tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts);

    virtual ::ContainerValidationCraftResult
    getCraftResults(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts);

    virtual ::ContainerValidationResult tryActivate();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerScreenValidation(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
    );

    MCAPI void _commit();

    MCAPI ::ContainerValidationSlotInfo
    _createContainerValidatorSlotInfo(::ContainerValidationSlotData const& slotData);

    MCAPI bool _dropItems();

    MCAPI ::std::shared_ptr<::ContainerValidationBase const>
    _getOrCreateContainerValidator(::FullContainerName const& containerEnumName);

    MCAPI bool _propagateContainers();

    MCAPI int _tryAddItem(::ContainerValidationSlotInfo& slotInfo, int addCount, bool allowPartialSuccess);

    MCAPI bool
    _tryMoveItem(::ContainerValidationSlotInfo& srcValidatorPair, ::ContainerValidationSlotInfo& dstValidatorPair);

    MCAPI ::ItemStack _tryRemoveItem(::ContainerValidationSlotInfo& slotInfo, int amount);

    MCAPI int _trySetItem(
        ::ContainerValidationSlotInfo& slotInfo,
        ::ItemStack const&             stack,
        bool                           isWholeStackTransfer,
        bool                           allowPartialSuccess,
        bool                           isInternalTransfer
    );

    MCAPI ::ContainerValidationResult _tryTransferSpecial(
        ::ContainerValidationSlotData const& srcSlotData,
        int                                  transferAmount,
        ::ContainerScreenRequestActionType   actionType
    );

    MCAPI ::std::shared_ptr<::SimpleSparseContainer>
    getOrCreateSparseContainer(::FullContainerName const& containerEnumName);

    MCAPI bool tryCommitActionResults();

    MCAPI ::ContainerValidationResult tryConsume(::ContainerValidationSlotData const& srcSlotData, int transferAmount);

    MCAPI ::ContainerValidationResult
    tryDrop(::ContainerValidationSlotData const& srcSlotData, int transferAmount, bool dropRandomly);

    MCAPI ::ContainerValidationResult
    trySwap(::ContainerValidationSlotData const& srcSlotData, ::ContainerValidationSlotData const& dstSlotData);

    MCAPI ::ContainerValidationResult tryTransfer(
        ::ContainerValidationSlotData const& srcSlotData,
        ::ContainerValidationSlotData const& dstSlotData,
        int                                  transferAmount,
        bool                                 isAllowingPartialTransfer
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::ContainerScreenValidation> makeContainerScreenValidation(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ContainerValidationResult
    $tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts);

    MCAPI ::ContainerValidationCraftResult
    $getCraftResults(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const numCrafts);

    MCFOLD ::ContainerValidationResult $tryActivate();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
