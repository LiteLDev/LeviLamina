/**
 * @file  ContainerValidatorFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerValidatorFactory.
 *
 */
class ContainerValidatorFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERVALIDATORFACTORY
public:
    class ContainerValidatorFactory& operator=(class ContainerValidatorFactory const &) = delete;
    ContainerValidatorFactory(class ContainerValidatorFactory const &) = delete;
    ContainerValidatorFactory() = delete;
#endif

public:
    /**
     * @hash   -1105748465
     * @symbol ?createContainerScreenValidator@ContainerValidatorFactory@@SA?AV?$unique_ptr@VContainerScreenValidatorBase@@U?$default_delete@VContainerScreenValidatorBase@@@std@@@std@@AEBVContainerScreenContext@@@Z
     */
    MCAPI static std::unique_ptr<class ContainerScreenValidatorBase> createContainerScreenValidator(class ContainerScreenContext const &);
    /**
     * @hash   -1153241252
     * @symbol ?createContainerValidator@ContainerValidatorFactory@@SA?AV?$shared_ptr@$$CBVContainerValidationBase@@@std@@W4ContainerEnumName@@AEBVContainerScreenContext@@W4ContainerValidationCaller@@@Z
     */
    MCAPI static class std::shared_ptr<class ContainerValidationBase const> createContainerValidator(enum ContainerEnumName, class ContainerScreenContext const &, enum ContainerValidationCaller);
    /**
     * @hash   359875975
     * @symbol ?getBackingContainer@ContainerValidatorFactory@@SAPEAVContainer@@W4ContainerEnumName@@AEBVContainerScreenContext@@@Z
     */
    MCAPI static class Container * getBackingContainer(enum ContainerEnumName, class ContainerScreenContext const &);

};