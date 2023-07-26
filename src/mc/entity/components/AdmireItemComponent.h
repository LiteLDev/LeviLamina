#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AdmireItemComponent {

public:
    // prevent constructor by default
    AdmireItemComponent& operator=(AdmireItemComponent const&) = delete;
    AdmireItemComponent(AdmireItemComponent const&)            = delete;
    AdmireItemComponent()                                      = delete;

public:
    /**
     * @symbol ??0AdmireItemComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI AdmireItemComponent(class AdmireItemComponent&&); // NOLINT
    /**
     * @symbol ?getAdmireItem\@AdmireItemComponent\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const& getAdmireItem() const; // NOLINT
    /**
     * @symbol ?getAdmireUntil\@AdmireItemComponent\@\@QEBAAEBUTick\@\@XZ
     */
    MCAPI struct Tick const& getAdmireUntil() const; // NOLINT
    /**
     * @symbol ?getItemOwnerRef\@AdmireItemComponent\@\@QEBA?AVWeakEntityRef\@\@XZ
     */
    MCAPI class WeakEntityRef getItemOwnerRef() const; // NOLINT
    /**
     * @symbol ?isAdmiring\@AdmireItemComponent\@\@QEBA_NXZ
     */
    MCAPI bool isAdmiring() const; // NOLINT
    /**
     * @symbol ?onAdmireItemPickedUp\@AdmireItemComponent\@\@QEAAXAEBVActor\@\@AEBVItemStack\@\@PEAV2\@\@Z
     */
    MCAPI void onAdmireItemPickedUp(class Actor const&, class ItemStack const&, class Actor*); // NOLINT
    /**
     * @symbol ?stopAdmiring\@AdmireItemComponent\@\@QEAAXXZ
     */
    MCAPI void stopAdmiring(); // NOLINT
    /**
     * @symbol ??1AdmireItemComponent\@\@QEAA\@XZ
     */
    MCAPI ~AdmireItemComponent(); // NOLINT
};
