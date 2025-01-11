#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenRequestActionType.h"
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class ContainerValidationBase;
class ItemStack;
class SimpleSparseContainer;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
struct ContainerValidationResult;
struct ContainerValidationSlotData;
struct ContainerValidationSlotInfo;
struct FullContainerName;
// clang-format on

class ContainerScreenValidation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk7e4898;
    ::ll::UntypedStorage<4, 4>  mUnk3f6c24;
    ::ll::UntypedStorage<8, 64> mUnkeb3752;
    ::ll::UntypedStorage<8, 64> mUnk3bbfa5;
    ::ll::UntypedStorage<8, 64> mUnk634049;
    ::ll::UntypedStorage<8, 8>  mUnkc71b5a;
    ::ll::UntypedStorage<8, 24> mUnk877768;
    ::ll::UntypedStorage<4, 12> mUnk6f491a;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenValidation& operator=(ContainerScreenValidation const&);
    ContainerScreenValidation(ContainerScreenValidation const&);
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
    MCAPI ContainerScreenValidation(
        ::ContainerScreenContext const&                                           screenContext,
        ::ContainerValidationCaller                                               caller,
        ::std::unordered_map<::FullContainerName, ::std::shared_ptr<::Container>> predictiveContainers
    );

    MCAPI void _commit();

    MCAPI ::ContainerValidationSlotInfo _createContainerValidatorSlotInfo(::ContainerValidationSlotData const& slotData
    );

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

    MCFOLD bool isCraftingImplemented();

    MCAPI bool tryCommitActionResults();

    MCAPI ::ContainerValidationResult tryConsume(::ContainerValidationSlotData const& srcSlotData, int transferAmount);

    MCAPI ::ContainerValidationResult tryDestroy(::ContainerValidationSlotData const& srcSlotData, int transferAmount);

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
    $tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const);

    MCAPI ::ContainerValidationCraftResult
    $getCraftResults(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar const);

    MCFOLD ::ContainerValidationResult $tryActivate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
