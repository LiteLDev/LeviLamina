/**
 * @file  ContainerScreenValidation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerScreenValidation.
 *
 */
class ContainerScreenValidation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENVALIDATION
public:
    class ContainerScreenValidation& operator=(class ContainerScreenValidation const &) = delete;
    ContainerScreenValidation(class ContainerScreenValidation const &) = delete;
    ContainerScreenValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ContainerScreenValidation();
    /**
     * @hash   580960740
     * @vftbl  1
     * @symbol ?tryCraft@ContainerScreenValidation@@UEAA?AUContainerValidationResult@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
     */
    virtual struct ContainerValidationResult tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs>);
    /**
     * @hash   1426523271
     * @vftbl  2
     * @symbol ?getCraftResults@ContainerScreenValidation@@UEAA?AUContainerValidationCraftResult@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
     */
    virtual struct ContainerValidationCraftResult getCraftResults(std::unique_ptr<struct ContainerValidationCraftInputs>);
    /**
     * @hash   649537436
     * @vftbl  3
     * @symbol ?tryActivate@ContainerScreenValidation@@UEAA?AUContainerValidationResult@@XZ
     */
    virtual struct ContainerValidationResult tryActivate();
    /**
     * @hash   981080280
     * @symbol ??0ContainerScreenValidation@@QEAA@AEBVContainerScreenContext@@W4ContainerValidationCaller@@V?$unordered_map@W4ContainerEnumName@@V?$shared_ptr@VContainer@@@std@@U?$hash@W4ContainerEnumName@@@3@U?$equal_to@W4ContainerEnumName@@@3@V?$allocator@U?$pair@$$CBW4ContainerEnumName@@V?$shared_ptr@VContainer@@@std@@@std@@@3@@std@@@Z
     */
    MCAPI ContainerScreenValidation(class ContainerScreenContext const &, enum ContainerValidationCaller, class std::unordered_map<enum ContainerEnumName, class std::shared_ptr<class Container>, struct std::hash<enum ContainerEnumName>, struct std::equal_to<enum ContainerEnumName>, class std::allocator<struct std::pair<enum ContainerEnumName const, class std::shared_ptr<class Container>>>>);
    /**
     * @hash   442371210
     * @symbol ?getOrCreateSparseContainer@ContainerScreenValidation@@QEAA?AV?$shared_ptr@VSimpleSparseContainer@@@std@@W4ContainerEnumName@@@Z
     */
    MCAPI class std::shared_ptr<class SimpleSparseContainer> getOrCreateSparseContainer(enum ContainerEnumName);
    /**
     * @hash   -2028064990
     * @symbol ?isCraftingImplemented@ContainerScreenValidation@@QEAA_NXZ
     */
    MCAPI bool isCraftingImplemented();
    /**
     * @hash   747341828
     * @symbol ?logServerAuthUntrustedFail@ContainerScreenValidation@@QEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void logServerAuthUntrustedFail(std::string const &) const;
    /**
     * @hash   629289364
     * @symbol ?tryCommitActionResults@ContainerScreenValidation@@QEAA_NXZ
     */
    MCAPI bool tryCommitActionResults();
    /**
     * @hash   776328858
     * @symbol ?tryConsume@ContainerScreenValidation@@QEAA?AUContainerValidationResult@@AEBUContainerValidationSlotData@@H@Z
     */
    MCAPI struct ContainerValidationResult tryConsume(struct ContainerValidationSlotData const &, int);
    /**
     * @hash   36326842
     * @symbol ?tryDestroy@ContainerScreenValidation@@QEAA?AUContainerValidationResult@@AEBUContainerValidationSlotData@@H@Z
     */
    MCAPI struct ContainerValidationResult tryDestroy(struct ContainerValidationSlotData const &, int);
    /**
     * @hash   279840045
     * @symbol ?tryDrop@ContainerScreenValidation@@QEAA?AUContainerValidationResult@@AEBUContainerValidationSlotData@@H_N@Z
     */
    MCAPI struct ContainerValidationResult tryDrop(struct ContainerValidationSlotData const &, int, bool);
    /**
     * @hash   1851937320
     * @symbol ?tryPlaceInItemContainer@ContainerScreenValidation@@QEAA?AUContainerValidationResult@@AEBUContainerValidationSlotData@@H@Z
     */
    MCAPI struct ContainerValidationResult tryPlaceInItemContainer(struct ContainerValidationSlotData const &, int);
    /**
     * @hash   1888646971
     * @symbol ?trySwap@ContainerScreenValidation@@QEAA?AUContainerValidationResult@@AEBUContainerValidationSlotData@@0@Z
     */
    MCAPI struct ContainerValidationResult trySwap(struct ContainerValidationSlotData const &, struct ContainerValidationSlotData const &);
    /**
     * @hash   -18580387
     * @symbol ?tryTransfer@ContainerScreenValidation@@QEAA?AUContainerValidationResult@@AEBUContainerValidationSlotData@@0H_N@Z
     */
    MCAPI struct ContainerValidationResult tryTransfer(struct ContainerValidationSlotData const &, struct ContainerValidationSlotData const &, int, bool);
    /**
     * @hash   -567760834
     * @symbol ?makeContainerScreenValidation@ContainerScreenValidation@@SA?AV?$unique_ptr@VContainerScreenValidation@@U?$default_delete@VContainerScreenValidation@@@std@@@std@@AEBVContainerScreenContext@@W4ContainerValidationCaller@@V?$unordered_map@W4ContainerEnumName@@V?$shared_ptr@VContainer@@@std@@U?$hash@W4ContainerEnumName@@@3@U?$equal_to@W4ContainerEnumName@@@3@V?$allocator@U?$pair@$$CBW4ContainerEnumName@@V?$shared_ptr@VContainer@@@std@@@std@@@3@@3@@Z
     */
    MCAPI static std::unique_ptr<class ContainerScreenValidation> makeContainerScreenValidation(class ContainerScreenContext const &, enum ContainerValidationCaller, class std::unordered_map<enum ContainerEnumName, class std::shared_ptr<class Container>, struct std::hash<enum ContainerEnumName>, struct std::equal_to<enum ContainerEnumName>, class std::allocator<struct std::pair<enum ContainerEnumName const, class std::shared_ptr<class Container>>>>);

//protected:
    /**
     * @hash   1276846164
     * @symbol ?_tryAddItem@ContainerScreenValidation@@IEAAHAEAUContainerValidationSlotInfo@@H_N@Z
     */
    MCAPI int _tryAddItem(struct ContainerValidationSlotInfo &, int, bool);
    /**
     * @hash   -1020647878
     * @symbol ?_tryRemoveItem@ContainerScreenValidation@@IEAA?AVItemStack@@AEAUContainerValidationSlotInfo@@H@Z
     */
    MCAPI class ItemStack _tryRemoveItem(struct ContainerValidationSlotInfo &, int);
    /**
     * @hash   -1343440730
     * @symbol ?_trySetItem@ContainerScreenValidation@@IEAAHAEAUContainerValidationSlotInfo@@AEBVItemStack@@_N2@Z
     */
    MCAPI int _trySetItem(struct ContainerValidationSlotInfo &, class ItemStack const &, bool, bool);
    /**
     * @hash   -493107567
     * @symbol ?_tryTransferSpecial@ContainerScreenValidation@@IEAA?AUContainerValidationResult@@AEBUContainerValidationSlotData@@HW4ContainerScreenRequestActionType@@@Z
     */
    MCAPI struct ContainerValidationResult _tryTransferSpecial(struct ContainerValidationSlotData const &, int, enum ContainerScreenRequestActionType);

//private:
    /**
     * @hash   -94262020
     * @symbol ?_commit@ContainerScreenValidation@@AEAAXXZ
     */
    MCAPI void _commit();
    /**
     * @hash   1717801462
     * @symbol ?_createContainerValidatorSlotInfo@ContainerScreenValidation@@AEAA?AUContainerValidationSlotInfo@@AEBUContainerValidationSlotData@@@Z
     */
    MCAPI struct ContainerValidationSlotInfo _createContainerValidatorSlotInfo(struct ContainerValidationSlotData const &);
    /**
     * @hash   910863620
     * @symbol ?_getOrCreateContainerValidator@ContainerScreenValidation@@AEAA?AV?$shared_ptr@$$CBVContainerValidationBase@@@std@@W4ContainerEnumName@@@Z
     */
    MCAPI class std::shared_ptr<class ContainerValidationBase const> _getOrCreateContainerValidator(enum ContainerEnumName);
    /**
     * @hash   1174660348
     * @symbol ?_propagateContainers@ContainerScreenValidation@@AEAA_NXZ
     */
    MCAPI bool _propagateContainers();

protected:

private:

};