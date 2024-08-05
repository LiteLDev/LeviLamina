#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/ContainerScreenRequestActionType.h"
#include "mc/world/containers/ContainerValidationCaller.h"

class ContainerScreenValidation {
public:
    // prevent constructor by default
    ContainerScreenValidation& operator=(ContainerScreenValidation const&);
    ContainerScreenValidation(ContainerScreenValidation const&);
    ContainerScreenValidation();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerScreenValidation() = default;

    // vIndex: 1
    virtual struct ContainerValidationResult tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs>);

    // vIndex: 2
    virtual struct ContainerValidationCraftResult
        getCraftResults(std::unique_ptr<struct ContainerValidationCraftInputs>);

    // vIndex: 3
    virtual struct ContainerValidationResult tryActivate();

    MCAPI
    ContainerScreenValidation(class ContainerScreenContext const& screenContext, ::ContainerValidationCaller, std::unordered_map<::ContainerEnumName, std::shared_ptr<class Container>>);

    MCAPI std::shared_ptr<class SimpleSparseContainer> getOrCreateSparseContainer(::ContainerEnumName containerEnumName
    );

    MCAPI bool isCraftingImplemented();

    MCAPI void logServerAuthUntrustedFail(std::string const& message) const;

    MCAPI bool tryCommitActionResults();

    MCAPI struct ContainerValidationResult tryConsume(struct ContainerValidationSlotData const&, int transferAmount);

    MCAPI struct ContainerValidationResult tryDestroy(struct ContainerValidationSlotData const&, int transferAmount);

    MCAPI struct ContainerValidationResult tryDrop(struct ContainerValidationSlotData const&, int transferAmount, bool);

    MCAPI struct ContainerValidationResult
    tryPlaceInItemContainer(struct ContainerValidationSlotData const&, int transferAmount);

    MCAPI struct ContainerValidationResult
    trySwap(struct ContainerValidationSlotData const&, struct ContainerValidationSlotData const&);

    MCAPI struct ContainerValidationResult tryTransfer(
        struct ContainerValidationSlotData const&,
        struct ContainerValidationSlotData const&,
        int transferAmount,
        bool
    );

    MCAPI static std::unique_ptr<class ContainerScreenValidation>
    makeContainerScreenValidation(class ContainerScreenContext const& screenContext, ::ContainerValidationCaller, std::unordered_map<::ContainerEnumName, std::shared_ptr<class Container>>);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI int _tryAddItem(struct ContainerValidationSlotInfo& slotInfo, int addCount, bool);

    MCAPI class ItemStack _tryRemoveItem(struct ContainerValidationSlotInfo& slotInfo, int amount);

    MCAPI int _trySetItem(struct ContainerValidationSlotInfo& slotInfo, class ItemStack const& stack, bool, bool);

    MCAPI struct ContainerValidationResult _tryTransferSpecial(
        struct ContainerValidationSlotData const&,
        int                                transferAmount,
        ::ContainerScreenRequestActionType actionType
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _commit();

    MCAPI struct ContainerValidationSlotInfo
    _createContainerValidatorSlotInfo(struct ContainerValidationSlotData const&);

    MCAPI bool _dropItems();

    MCAPI std::shared_ptr<class ContainerValidationBase const>
          _getOrCreateContainerValidator(::ContainerEnumName containerEnumName);

    MCAPI bool _propagateContainers();

    // NOLINTEND
};
