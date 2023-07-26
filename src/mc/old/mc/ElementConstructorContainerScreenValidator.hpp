/**
 * @file  ElementConstructorContainerScreenValidator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "ContainerScreenValidatorBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ElementConstructorContainerScreenValidator.
 *
 */
class ElementConstructorContainerScreenValidator : public ContainerScreenValidatorBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ELEMENTCONSTRUCTORCONTAINERSCREENVALIDATOR
public:
    class ElementConstructorContainerScreenValidator& operator=(class ElementConstructorContainerScreenValidator const &) = delete;
    ElementConstructorContainerScreenValidator(class ElementConstructorContainerScreenValidator const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ElementConstructorContainerScreenValidator();
    /**
     * @symbol  ??0ElementConstructorContainerScreenValidator\@\@QEAA\@XZ
     */
    MCAPI ElementConstructorContainerScreenValidator();

};