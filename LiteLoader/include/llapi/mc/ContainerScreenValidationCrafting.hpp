/**
 * @file  MC/ContainerScreenValidationCrafting.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~ContainerScreenValidationCrafting();
    /**
     * @hash   -1564258058
     * @vftbl  1
     * @symbol ?tryCraft@ContainerScreenValidationCrafting@@UEAA?AUContainerValidationResult@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
     */
    virtual struct ContainerValidationResult tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs>);
    /**
     * @hash   -1914234055
     * @vftbl  2
     * @symbol ?getCraftResults@ContainerScreenValidationCrafting@@UEAA?AUContainerValidationCraftResult@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
     */
    virtual struct ContainerValidationCraftResult getCraftResults(std::unique_ptr<struct ContainerValidationCraftInputs>);

//private:
    /**
     * @hash   1196611518
     * @symbol ?_appendCraftResult@ContainerScreenValidationCrafting@@AEAAXAEAUContainerValidationCraftResult@@@Z
     */
    MCAPI void _appendCraftResult(struct ContainerValidationCraftResult &);

private:

};