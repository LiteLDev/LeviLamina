/**
 * @file  ContainerScreenValidationActivate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "ContainerScreenValidation.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerScreenValidationActivate.
 *
 */
class ContainerScreenValidationActivate : public ContainerScreenValidation {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENVALIDATIONACTIVATE
public:
    class ContainerScreenValidationActivate& operator=(class ContainerScreenValidationActivate const &) = delete;
    ContainerScreenValidationActivate(class ContainerScreenValidationActivate const &) = delete;
    ContainerScreenValidationActivate() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ContainerScreenValidationActivate();
    /**
     * @vftbl  3
     * @symbol  ?tryActivate\@ContainerScreenValidationActivate\@\@EEAA?AUContainerValidationResult\@\@XZ
     */
    virtual struct ContainerValidationResult tryActivate();

};