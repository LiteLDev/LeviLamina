/**
 * @file  MC/ContainerValidationSlotInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ContainerValidationSlotInfo.
 *
 */
struct ContainerValidationSlotInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERVALIDATIONSLOTINFO
public:
    struct ContainerValidationSlotInfo& operator=(struct ContainerValidationSlotInfo const &) = delete;
    ContainerValidationSlotInfo(struct ContainerValidationSlotInfo const &) = delete;
    ContainerValidationSlotInfo() = delete;
#endif

public:
    /**
     * @hash   1931616671
     * @symbol ??0ContainerValidationSlotInfo@@QEAA@AEBUContainerValidationSlotData@@V?$shared_ptr@VSimpleSparseContainer@@@std@@V?$shared_ptr@$$CBVContainerValidationBase@@@3@@Z
     */
    MCAPI ContainerValidationSlotInfo(struct ContainerValidationSlotData const &, class std::shared_ptr<class SimpleSparseContainer>, class std::shared_ptr<class ContainerValidationBase const>);
    /**
     * @hash   -448848198
     * @symbol ?getItem@ContainerValidationSlotInfo@@QEBAAEBVItemStack@@XZ
     */
    MCAPI class ItemStack const & getItem() const;
    /**
     * @hash   1643288200
     * @symbol ??BContainerValidationSlotInfo@@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @hash   -185404740
     * @symbol ?setItem@ContainerValidationSlotInfo@@QEAAXAEBVItemStack@@@Z
     */
    MCAPI void setItem(class ItemStack const &);
    /**
     * @hash   1709686530
     * @symbol ??1ContainerValidationSlotInfo@@QEAA@XZ
     */
    MCAPI ~ContainerValidationSlotInfo();

};