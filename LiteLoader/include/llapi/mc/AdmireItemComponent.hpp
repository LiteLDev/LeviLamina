/**
 * @file  AdmireItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AdmireItemComponent.
 *
 */
class AdmireItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADMIREITEMCOMPONENT
public:
    class AdmireItemComponent& operator=(class AdmireItemComponent const &) = delete;
    AdmireItemComponent(class AdmireItemComponent const &) = delete;
    AdmireItemComponent() = delete;
#endif

public:
    /**
     * @hash   -943594263
     * @symbol  ??0AdmireItemComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI AdmireItemComponent(class AdmireItemComponent &&);
    /**
     * @hash   -991625730
     * @symbol  ?getAdmireItem\@AdmireItemComponent\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const & getAdmireItem() const;
    /**
     * @hash   403211840
     * @symbol  ?getAdmireUntil\@AdmireItemComponent\@\@QEBAAEBUTick\@\@XZ
     */
    MCAPI struct Tick const & getAdmireUntil() const;
    /**
     * @hash   838706944
     * @symbol  ?getItemOwnerRef\@AdmireItemComponent\@\@QEBA?AVWeakEntityRef\@\@XZ
     */
    MCAPI class WeakEntityRef getItemOwnerRef() const;
    /**
     * @hash   673653776
     * @symbol  ?isAdmiring\@AdmireItemComponent\@\@QEBA_NXZ
     */
    MCAPI bool isAdmiring() const;
    /**
     * @hash   581913394
     * @symbol  ?onAdmireItemPickedUp\@AdmireItemComponent\@\@QEAAXAEBVActor\@\@AEBVItemStack\@\@PEAV2\@\@Z
     */
    MCAPI void onAdmireItemPickedUp(class Actor const &, class ItemStack const &, class Actor *);
    /**
     * @hash   487713845
     * @symbol  ?stopAdmiring\@AdmireItemComponent\@\@QEAAXXZ
     */
    MCAPI void stopAdmiring();
    /**
     * @hash   -1739588188
     * @symbol  ??1AdmireItemComponent\@\@QEAA\@XZ
     */
    MCAPI ~AdmireItemComponent();

};