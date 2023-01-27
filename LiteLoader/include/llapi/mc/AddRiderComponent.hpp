/**
 * @file  AddRiderComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AddRiderComponent.
 *
 */
class AddRiderComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDRIDERCOMPONENT
public:
    class AddRiderComponent& operator=(class AddRiderComponent const &) = delete;
    AddRiderComponent(class AddRiderComponent const &) = delete;
    AddRiderComponent() = delete;
#endif

public:
    /**
     * @hash   622425394
     * @symbol  ?reloadComponent\@AddRiderComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void reloadComponent(class Actor &);
    /**
     * @hash   -1065148624
     * @symbol  ??1AddRiderComponent\@\@QEAA\@XZ
     */
    MCAPI ~AddRiderComponent();

};