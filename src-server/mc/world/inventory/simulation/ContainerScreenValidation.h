#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
struct FullContainerName;
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
    // vIndex: 0
    virtual ~ContainerScreenValidation();

    // vIndex: 1
    virtual ::ContainerValidationResult
    tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const);

    // vIndex: 2
    virtual ::ContainerValidationCraftResult
    getCraftResults(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const);

    // vIndex: 3
    virtual ::ContainerValidationResult tryActivate();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerScreenValidation(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
    );

    MCNAPI void _commit();

    MCNAPI ::ContainerValidationSlotInfo
    _createContainerValidatorSlotInfo(::ContainerValidationSlotData const& slotData);

    MCNAPI bool _dropItems();

    MCNAPI ::std::shared_ptr<::ContainerValidationBase const>
    _getOrCreateContainerValidator(::FullContainerName const& containerEnumName);

    MCNAPI bool _propagateContainers();

    MCNAPI int _tryAddItem(::ContainerValidationSlotInfo& slotInfo, int addCount, bool allowPartialSuccess);

    MCNAPI ::ItemStack _tryRemoveItem(::ContainerValidationSlotInfo& slotInfo, int amount);

    MCNAPI int _trySetItem(
        ::ContainerValidationSlotInfo& slotInfo,
        ::ItemStack const&             stack,
        bool                           isWholeStackTransfer,
        bool                           allowPartialSuccess,
        bool                           isInternalTransfer
    );

    MCNAPI ::ContainerValidationResult _tryTransferSpecial(
        ::ContainerValidationSlotData const& srcSlotData,
        int                                  transferAmount,
        ::ContainerScreenRequestActionType   actionType
    );

    MCNAPI ::std::shared_ptr<::SimpleSparseContainer>
    getOrCreateSparseContainer(::FullContainerName const& containerEnumName);

    MCNAPI bool tryCommitActionResults();

    MCNAPI ::ContainerValidationResult tryConsume(::ContainerValidationSlotData const& srcSlotData, int transferAmount);

    MCNAPI ::ContainerValidationResult
    tryDrop(::ContainerValidationSlotData const& srcSlotData, int transferAmount, bool dropRandomly);

    MCNAPI ::ContainerValidationResult
    trySwap(::ContainerValidationSlotData const& srcSlotData, ::ContainerValidationSlotData const& dstSlotData);

    MCNAPI ::ContainerValidationResult tryTransfer(
        ::ContainerValidationSlotData const& srcSlotData,
        ::ContainerValidationSlotData const& dstSlotData,
        int                                  transferAmount,
        bool                                 isAllowingPartialTransfer
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::ContainerScreenValidation> makeContainerScreenValidation(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ContainerValidationResult
    $tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const);

    MCNAPI ::ContainerValidationCraftResult
    $getCraftResults(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const);

    MCNAPI ::ContainerValidationResult $tryActivate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
