/**
 * @file  ContainerScreenValidationCrafting.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerScreenValidationCrafting.
 *
 */
class ContainerScreenValidationCrafting {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENVALIDATIONCRAFTING
public:
    class ContainerScreenValidationCrafting& operator=(class ContainerScreenValidationCrafting const &) = delete;
    ContainerScreenValidationCrafting(class ContainerScreenValidationCrafting const &) = delete;
    ContainerScreenValidationCrafting() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ContainerScreenValidationCrafting();
    /**
     * @vftbl  1
     * @symbol  ?tryCraft\@ContainerScreenValidationCrafting\@\@UEAA?AUContainerValidationResult\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct ContainerValidationResult tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs>);
    /**
     * @vftbl  2
     * @symbol  ?getCraftResults\@ContainerScreenValidationCrafting\@\@UEAA?AUContainerValidationCraftResult\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct ContainerValidationCraftResult getCraftResults(std::unique_ptr<struct ContainerValidationCraftInputs>);

//private:
    /**
     * @symbol  ?_appendCraftResult\@ContainerScreenValidationCrafting\@\@AEAAXAEAUContainerValidationCraftResult\@\@\@Z
     */
    MCAPI void _appendCraftResult(struct ContainerValidationCraftResult &);

private:

};