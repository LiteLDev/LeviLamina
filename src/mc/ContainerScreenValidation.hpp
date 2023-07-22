/**
 * @file  ContainerScreenValidation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~ContainerScreenValidation();
    /**
     * @vftbl  1
     * @symbol  ?tryCraft\@ContainerScreenValidation\@\@UEAA?AUContainerValidationResult\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct ContainerValidationResult tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs>);
    /**
     * @vftbl  2
     * @symbol  ?getCraftResults\@ContainerScreenValidation\@\@UEAA?AUContainerValidationCraftResult\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct ContainerValidationCraftResult getCraftResults(std::unique_ptr<struct ContainerValidationCraftInputs>);
    /**
     * @vftbl  3
     * @symbol  ?tryActivate\@ContainerScreenValidation\@\@UEAA?AUContainerValidationResult\@\@XZ
     */
    virtual struct ContainerValidationResult tryActivate();
    /**
     * @symbol  ??0ContainerScreenValidation\@\@QEAA\@AEBVContainerScreenContext\@\@W4ContainerValidationCaller\@\@V?$unordered_map\@W4ContainerEnumName\@\@V?$shared_ptr\@VContainer\@\@\@std\@\@U?$hash\@W4ContainerEnumName\@\@\@3\@U?$equal_to\@W4ContainerEnumName\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4ContainerEnumName\@\@V?$shared_ptr\@VContainer\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI ContainerScreenValidation(class ContainerScreenContext const &, enum class ContainerValidationCaller, class std::unordered_map<enum class ContainerEnumName, class std::shared_ptr<class Container>, struct std::hash<enum class ContainerEnumName>, struct std::equal_to<enum class ContainerEnumName>, class std::allocator<struct std::pair<enum class ContainerEnumName const, class std::shared_ptr<class Container>>>>);
    /**
     * @symbol  ?getOrCreateSparseContainer\@ContainerScreenValidation\@\@QEAA?AV?$shared_ptr\@VSimpleSparseContainer\@\@\@std\@\@W4ContainerEnumName\@\@\@Z
     */
    MCAPI class std::shared_ptr<class SimpleSparseContainer> getOrCreateSparseContainer(enum class ContainerEnumName);
    /**
     * @symbol  ?isCraftingImplemented\@ContainerScreenValidation\@\@QEAA_NXZ
     */
    MCAPI bool isCraftingImplemented();
    /**
     * @symbol  ?logServerAuthUntrustedFail\@ContainerScreenValidation\@\@QEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void logServerAuthUntrustedFail(std::string const &) const;
    /**
     * @symbol  ?tryCommitActionResults\@ContainerScreenValidation\@\@QEAA_NXZ
     */
    MCAPI bool tryCommitActionResults();
    /**
     * @symbol  ?tryConsume\@ContainerScreenValidation\@\@QEAA?AUContainerValidationResult\@\@AEBUContainerValidationSlotData\@\@H\@Z
     */
    MCAPI struct ContainerValidationResult tryConsume(struct ContainerValidationSlotData const &, int);
    /**
     * @symbol  ?tryDestroy\@ContainerScreenValidation\@\@QEAA?AUContainerValidationResult\@\@AEBUContainerValidationSlotData\@\@H\@Z
     */
    MCAPI struct ContainerValidationResult tryDestroy(struct ContainerValidationSlotData const &, int);
    /**
     * @symbol  ?tryDrop\@ContainerScreenValidation\@\@QEAA?AUContainerValidationResult\@\@AEBUContainerValidationSlotData\@\@H_N\@Z
     */
    MCAPI struct ContainerValidationResult tryDrop(struct ContainerValidationSlotData const &, int, bool);
    /**
     * @symbol  ?tryPlaceInItemContainer\@ContainerScreenValidation\@\@QEAA?AUContainerValidationResult\@\@AEBUContainerValidationSlotData\@\@H\@Z
     */
    MCAPI struct ContainerValidationResult tryPlaceInItemContainer(struct ContainerValidationSlotData const &, int);
    /**
     * @symbol  ?trySwap\@ContainerScreenValidation\@\@QEAA?AUContainerValidationResult\@\@AEBUContainerValidationSlotData\@\@0\@Z
     */
    MCAPI struct ContainerValidationResult trySwap(struct ContainerValidationSlotData const &, struct ContainerValidationSlotData const &);
    /**
     * @symbol  ?tryTransfer\@ContainerScreenValidation\@\@QEAA?AUContainerValidationResult\@\@AEBUContainerValidationSlotData\@\@0H_N\@Z
     */
    MCAPI struct ContainerValidationResult tryTransfer(struct ContainerValidationSlotData const &, struct ContainerValidationSlotData const &, int, bool);
    /**
     * @symbol  ?makeContainerScreenValidation\@ContainerScreenValidation\@\@SA?AV?$unique_ptr\@VContainerScreenValidation\@\@U?$default_delete\@VContainerScreenValidation\@\@\@std\@\@\@std\@\@AEBVContainerScreenContext\@\@W4ContainerValidationCaller\@\@V?$unordered_map\@W4ContainerEnumName\@\@V?$shared_ptr\@VContainer\@\@\@std\@\@U?$hash\@W4ContainerEnumName\@\@\@3\@U?$equal_to\@W4ContainerEnumName\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4ContainerEnumName\@\@V?$shared_ptr\@VContainer\@\@\@std\@\@\@std\@\@\@3\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class ContainerScreenValidation> makeContainerScreenValidation(class ContainerScreenContext const &, enum class ContainerValidationCaller, class std::unordered_map<enum class ContainerEnumName, class std::shared_ptr<class Container>, struct std::hash<enum class ContainerEnumName>, struct std::equal_to<enum class ContainerEnumName>, class std::allocator<struct std::pair<enum class ContainerEnumName const, class std::shared_ptr<class Container>>>>);

//protected:
    /**
     * @symbol  ?_tryAddItem\@ContainerScreenValidation\@\@IEAAHAEAUContainerValidationSlotInfo\@\@H_N\@Z
     */
    MCAPI int _tryAddItem(struct ContainerValidationSlotInfo &, int, bool);
    /**
     * @symbol  ?_tryRemoveItem\@ContainerScreenValidation\@\@IEAA?AVItemStack\@\@AEAUContainerValidationSlotInfo\@\@H\@Z
     */
    MCAPI class ItemStack _tryRemoveItem(struct ContainerValidationSlotInfo &, int);
    /**
     * @symbol  ?_trySetItem\@ContainerScreenValidation\@\@IEAAHAEAUContainerValidationSlotInfo\@\@AEBVItemStack\@\@_N2\@Z
     */
    MCAPI int _trySetItem(struct ContainerValidationSlotInfo &, class ItemStack const &, bool, bool);
    /**
     * @symbol  ?_tryTransferSpecial\@ContainerScreenValidation\@\@IEAA?AUContainerValidationResult\@\@AEBUContainerValidationSlotData\@\@HW4ContainerScreenRequestActionType\@\@\@Z
     */
    MCAPI struct ContainerValidationResult _tryTransferSpecial(struct ContainerValidationSlotData const &, int, enum class ContainerScreenRequestActionType);

//private:
    /**
     * @symbol  ?_commit\@ContainerScreenValidation\@\@AEAAXXZ
     */
    MCAPI void _commit();
    /**
     * @symbol  ?_createContainerValidatorSlotInfo\@ContainerScreenValidation\@\@AEAA?AUContainerValidationSlotInfo\@\@AEBUContainerValidationSlotData\@\@\@Z
     */
    MCAPI struct ContainerValidationSlotInfo _createContainerValidatorSlotInfo(struct ContainerValidationSlotData const &);
    /**
     * @symbol  ?_getOrCreateContainerValidator\@ContainerScreenValidation\@\@AEAA?AV?$shared_ptr\@$$CBVContainerValidationBase\@\@\@std\@\@W4ContainerEnumName\@\@\@Z
     */
    MCAPI class std::shared_ptr<class ContainerValidationBase const> _getOrCreateContainerValidator(enum class ContainerEnumName);
    /**
     * @symbol  ?_propagateContainers\@ContainerScreenValidation\@\@AEAA_NXZ
     */
    MCAPI bool _propagateContainers();

protected:

private:

};