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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ContainerScreenValidation() = default;

    // vIndex: 1, symbol:
    // ?tryCraft@ContainerScreenValidation@@UEAA?AUContainerValidationResult@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
    virtual struct ContainerValidationResult tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs>);

    // vIndex: 2, symbol:
    // ?getCraftResults@ContainerScreenValidation@@UEAA?AUContainerValidationCraftResult@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
    virtual struct ContainerValidationCraftResult
        getCraftResults(std::unique_ptr<struct ContainerValidationCraftInputs>);

    // vIndex: 3, symbol: ?tryActivate@ContainerScreenValidation@@UEAA?AUContainerValidationResult@@XZ
    virtual struct ContainerValidationResult tryActivate();

    // symbol:
    // ??0ContainerScreenValidation@@QEAA@AEBVContainerScreenContext@@W4ContainerValidationCaller@@V?$unordered_map@W4ContainerEnumName@@V?$shared_ptr@VContainer@@@std@@U?$hash@W4ContainerEnumName@@@3@U?$equal_to@W4ContainerEnumName@@@3@V?$allocator@U?$pair@$$CBW4ContainerEnumName@@V?$shared_ptr@VContainer@@@std@@@std@@@3@@std@@@Z
    MCAPI
    ContainerScreenValidation(class ContainerScreenContext const&, ::ContainerValidationCaller, std::unordered_map<::ContainerEnumName, std::shared_ptr<class Container>>);

    // symbol:
    // ?getOrCreateSparseContainer@ContainerScreenValidation@@QEAA?AV?$shared_ptr@VSimpleSparseContainer@@@std@@W4ContainerEnumName@@@Z
    MCAPI std::shared_ptr<class SimpleSparseContainer> getOrCreateSparseContainer(::ContainerEnumName);

    // symbol: ?isCraftingImplemented@ContainerScreenValidation@@QEAA_NXZ
    MCAPI bool isCraftingImplemented();

    // symbol:
    // ?logServerAuthUntrustedFail@ContainerScreenValidation@@QEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void logServerAuthUntrustedFail(std::string const&) const;

    // symbol: ?tryCommitActionResults@ContainerScreenValidation@@QEAA_NXZ
    MCAPI bool tryCommitActionResults();

    // symbol:
    // ?tryConsume@ContainerScreenValidation@@QEAA?AUContainerValidationResult@@AEBUContainerValidationSlotData@@H@Z
    MCAPI struct ContainerValidationResult tryConsume(struct ContainerValidationSlotData const&, int);

    // symbol:
    // ?tryDestroy@ContainerScreenValidation@@QEAA?AUContainerValidationResult@@AEBUContainerValidationSlotData@@H@Z
    MCAPI struct ContainerValidationResult tryDestroy(struct ContainerValidationSlotData const&, int);

    // symbol:
    // ?tryDrop@ContainerScreenValidation@@QEAA?AUContainerValidationResult@@AEBUContainerValidationSlotData@@H_N@Z
    MCAPI struct ContainerValidationResult tryDrop(struct ContainerValidationSlotData const&, int, bool);

    // symbol:
    // ?tryPlaceInItemContainer@ContainerScreenValidation@@QEAA?AUContainerValidationResult@@AEBUContainerValidationSlotData@@H@Z
    MCAPI struct ContainerValidationResult tryPlaceInItemContainer(struct ContainerValidationSlotData const&, int);

    // symbol:
    // ?trySwap@ContainerScreenValidation@@QEAA?AUContainerValidationResult@@AEBUContainerValidationSlotData@@0@Z
    MCAPI struct ContainerValidationResult
    trySwap(struct ContainerValidationSlotData const&, struct ContainerValidationSlotData const&);

    // symbol:
    // ?tryTransfer@ContainerScreenValidation@@QEAA?AUContainerValidationResult@@AEBUContainerValidationSlotData@@0H_N@Z
    MCAPI struct ContainerValidationResult
    tryTransfer(struct ContainerValidationSlotData const&, struct ContainerValidationSlotData const&, int, bool);

    // symbol:
    // ?makeContainerScreenValidation@ContainerScreenValidation@@SA?AV?$unique_ptr@VContainerScreenValidation@@U?$default_delete@VContainerScreenValidation@@@std@@@std@@AEBVContainerScreenContext@@W4ContainerValidationCaller@@V?$unordered_map@W4ContainerEnumName@@V?$shared_ptr@VContainer@@@std@@U?$hash@W4ContainerEnumName@@@3@U?$equal_to@W4ContainerEnumName@@@3@V?$allocator@U?$pair@$$CBW4ContainerEnumName@@V?$shared_ptr@VContainer@@@std@@@std@@@3@@3@@Z
    MCAPI static std::unique_ptr<class ContainerScreenValidation>
    makeContainerScreenValidation(class ContainerScreenContext const&, ::ContainerValidationCaller, std::unordered_map<::ContainerEnumName, std::shared_ptr<class Container>>);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_tryAddItem@ContainerScreenValidation@@IEAAHAEAUContainerValidationSlotInfo@@H_N@Z
    MCAPI int _tryAddItem(struct ContainerValidationSlotInfo&, int, bool);

    // symbol: ?_tryRemoveItem@ContainerScreenValidation@@IEAA?AVItemStack@@AEAUContainerValidationSlotInfo@@H@Z
    MCAPI class ItemStack _tryRemoveItem(struct ContainerValidationSlotInfo&, int);

    // symbol: ?_trySetItem@ContainerScreenValidation@@IEAAHAEAUContainerValidationSlotInfo@@AEBVItemStack@@_N2@Z
    MCAPI int _trySetItem(struct ContainerValidationSlotInfo&, class ItemStack const&, bool, bool);

    // symbol:
    // ?_tryTransferSpecial@ContainerScreenValidation@@IEAA?AUContainerValidationResult@@AEBUContainerValidationSlotData@@HW4ContainerScreenRequestActionType@@@Z
    MCAPI struct ContainerValidationResult
    _tryTransferSpecial(struct ContainerValidationSlotData const&, int, ::ContainerScreenRequestActionType);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_commit@ContainerScreenValidation@@AEAAXXZ
    MCAPI void _commit();

    // symbol:
    // ?_createContainerValidatorSlotInfo@ContainerScreenValidation@@AEAA?AUContainerValidationSlotInfo@@AEBUContainerValidationSlotData@@@Z
    MCAPI struct ContainerValidationSlotInfo
    _createContainerValidatorSlotInfo(struct ContainerValidationSlotData const&);

    // symbol: ?_dropItems@ContainerScreenValidation@@AEAA_NXZ
    MCAPI bool _dropItems();

    // symbol:
    // ?_getOrCreateContainerValidator@ContainerScreenValidation@@AEAA?AV?$shared_ptr@$$CBVContainerValidationBase@@@std@@W4ContainerEnumName@@@Z
    MCAPI std::shared_ptr<class ContainerValidationBase const> _getOrCreateContainerValidator(::ContainerEnumName);

    // symbol: ?_propagateContainers@ContainerScreenValidation@@AEAA_NXZ
    MCAPI bool _propagateContainers();

    // NOLINTEND
};
