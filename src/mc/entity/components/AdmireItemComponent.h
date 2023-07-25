#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AdmireItemComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADMIREITEMCOMPONENT
public:
    AdmireItemComponent& operator=(AdmireItemComponent const&) = delete;
    AdmireItemComponent(AdmireItemComponent const&)            = delete;
    AdmireItemComponent()                                      = delete;
#endif

public:
    /**
     * @symbol ??0AdmireItemComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI AdmireItemComponent(class AdmireItemComponent&&);
    /**
     * @symbol ?getAdmireItem\@AdmireItemComponent\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const& getAdmireItem() const;
    /**
     * @symbol ?getAdmireUntil\@AdmireItemComponent\@\@QEBAAEBUTick\@\@XZ
     */
    MCAPI struct Tick const& getAdmireUntil() const;
    /**
     * @symbol ?getItemOwnerRef\@AdmireItemComponent\@\@QEBA?AVWeakEntityRef\@\@XZ
     */
    MCAPI class WeakEntityRef getItemOwnerRef() const;
    /**
     * @symbol ?isAdmiring\@AdmireItemComponent\@\@QEBA_NXZ
     */
    MCAPI bool isAdmiring() const;
    /**
     * @symbol ?onAdmireItemPickedUp\@AdmireItemComponent\@\@QEAAXAEBVActor\@\@AEBVItemStack\@\@PEAV2\@\@Z
     */
    MCAPI void onAdmireItemPickedUp(class Actor const&, class ItemStack const&, class Actor*);
    /**
     * @symbol ?stopAdmiring\@AdmireItemComponent\@\@QEAAXXZ
     */
    MCAPI void stopAdmiring();
    /**
     * @symbol ??1AdmireItemComponent\@\@QEAA\@XZ
     */
    MCAPI ~AdmireItemComponent();
};
