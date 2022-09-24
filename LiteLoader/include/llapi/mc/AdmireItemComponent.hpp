/**
 * @file  AdmireItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1163163543
     * @symbol ??0AdmireItemComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI AdmireItemComponent(class AdmireItemComponent &&);
    /**
     * @hash   -1088248514
     * @symbol ?getAdmireItem@AdmireItemComponent@@QEBAAEBVItemStack@@XZ
     */
    MCAPI class ItemStack const & getAdmireItem() const;
    /**
     * @hash   1248784208
     * @symbol ?getAdmireUntil@AdmireItemComponent@@QEBAAEBUTick@@XZ
     */
    MCAPI struct Tick const & getAdmireUntil() const;
    /**
     * @hash   1684279312
     * @symbol ?getItemOwnerRef@AdmireItemComponent@@QEBA?AVWeakEntityRef@@XZ
     */
    MCAPI class WeakEntityRef getItemOwnerRef() const;
    /**
     * @hash   541773824
     * @symbol ?isAdmiring@AdmireItemComponent@@QEBA_NXZ
     */
    MCAPI bool isAdmiring() const;
    /**
     * @hash   1427485762
     * @symbol ?onAdmireItemPickedUp@AdmireItemComponent@@QEAAXAEBVActor@@AEBVItemStack@@PEAV2@@Z
     */
    MCAPI void onAdmireItemPickedUp(class Actor const &, class ItemStack const &, class Actor *);
    /**
     * @hash   1333270837
     * @symbol ?stopAdmiring@AdmireItemComponent@@QEAAXXZ
     */
    MCAPI void stopAdmiring();
    /**
     * @hash   -1959157468
     * @symbol ??1AdmireItemComponent@@QEAA@XZ
     */
    MCAPI ~AdmireItemComponent();

};