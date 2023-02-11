/**
 * @file  ContainerValidationSlotInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -728209873
     * @symbol  ??0ContainerValidationSlotInfo\@\@QEAA\@AEBUContainerValidationSlotData\@\@V?$shared_ptr\@VSimpleSparseContainer\@\@\@std\@\@V?$shared_ptr\@$$CBVContainerValidationBase\@\@\@3\@\@Z
     */
    MCAPI ContainerValidationSlotInfo(struct ContainerValidationSlotData const &, class std::shared_ptr<class SimpleSparseContainer>, class std::shared_ptr<class ContainerValidationBase const>);
    /**
     * @hash   1186323306
     * @symbol  ?getItem\@ContainerValidationSlotInfo\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const & getItem() const;
    /**
     * @hash   -1016507592
     * @symbol  ??BContainerValidationSlotInfo\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @hash   1449766764
     * @symbol  ?setItem\@ContainerValidationSlotInfo\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void setItem(class ItemStack const &);
    /**
     * @hash   1955179746
     * @symbol  ??1ContainerValidationSlotInfo\@\@QEAA\@XZ
     */
    MCAPI ~ContainerValidationSlotInfo();

};