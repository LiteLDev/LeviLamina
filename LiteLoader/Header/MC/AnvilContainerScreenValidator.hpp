// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AnvilContainerScreenValidator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANVILCONTAINERSCREENVALIDATOR
public:
    class AnvilContainerScreenValidator& operator=(class AnvilContainerScreenValidator const &) = delete;
    AnvilContainerScreenValidator(class AnvilContainerScreenValidator const &) = delete;
#endif

public:
    /*0*/ virtual ~AnvilContainerScreenValidator();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual bool isCraftingImplemented();
    /*3*/ virtual struct ContainerValidationCraftResult getCraftResult(class ContainerScreenContext const &, class ContainerScreenValidation &, std::unique_ptr<struct ContainerValidationCraftInputs>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANVILCONTAINERSCREENVALIDATOR
public:
#endif
    MCAPI AnvilContainerScreenValidator();



};