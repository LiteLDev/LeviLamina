/**
 * @file  ContainerValidationOperation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ContainerValidationOperation.
 *
 */
struct ContainerValidationOperation {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERVALIDATIONOPERATION
public:
    struct ContainerValidationOperation& operator=(struct ContainerValidationOperation const &) = delete;
    ContainerValidationOperation(struct ContainerValidationOperation const &) = delete;
    ContainerValidationOperation() = delete;
#endif

public:
    /**
     * @symbol  ??0ContainerValidationOperation\@\@QEAA\@W4ContainerValidationOperationType\@\@AEBUContainerValidationSlotData\@\@HAEBVItemStack\@\@\@Z
     */
    MCAPI ContainerValidationOperation(enum class ContainerValidationOperationType, struct ContainerValidationSlotData const &, int, class ItemStack const &);

};