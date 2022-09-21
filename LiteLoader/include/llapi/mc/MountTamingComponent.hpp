/**
 * @file  MC/MountTamingComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MountTamingComponent.
 *
 */
class MountTamingComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOUNTTAMINGCOMPONENT
public:
    class MountTamingComponent& operator=(class MountTamingComponent const &) = delete;
    MountTamingComponent(class MountTamingComponent const &) = delete;
#endif

public:
    /**
     * @hash   -1737612242
     * @symbol ??0MountTamingComponent@@QEAA@XZ
     */
    MCAPI MountTamingComponent();
    /**
     * @hash   908452728
     * @symbol ?addAdditionalSaveData@MountTamingComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   193414697
     * @symbol ?becomeTame@MountTamingComponent@@QEAAXAEAVActor@@_N@Z
     */
    MCAPI void becomeTame(class Actor &, bool);
    /**
     * @hash   -987188549
     * @symbol ?getCounter@MountTamingComponent@@QEAAAEAHXZ
     */
    MCAPI int & getCounter();
    /**
     * @hash   1502934593
     * @symbol ?getInteraction@MountTamingComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   -862238369
     * @symbol ?getTemper@MountTamingComponent@@QEAAAEAHXZ
     */
    MCAPI int & getTemper();
    /**
     * @hash   -1300282264
     * @symbol ?getTemperMod@MountTamingComponent@@QEBAHXZ
     */
    MCAPI int getTemperMod() const;
    /**
     * @hash   1899246648
     * @symbol ?getWaitCount@MountTamingComponent@@QEBAHXZ
     */
    MCAPI int getWaitCount() const;
    /**
     * @hash   -1929647138
     * @symbol ?readAdditionalSaveData@MountTamingComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1383168314
     * @symbol ?tameToPlayer@MountTamingComponent@@QEAAXAEAVActor@@AEAVPlayer@@_N@Z
     */
    MCAPI void tameToPlayer(class Actor &, class Player &, bool);

//private:
    /**
     * @hash   -742626783
     * @symbol ?_feedItem@MountTamingComponent@@AEAAXAEAVActor@@AEAVPlayer@@H@Z
     */
    MCAPI void _feedItem(class Actor &, class Player &, int);
    /**
     * @hash   290582379
     * @symbol ?_autoReject@MountTamingComponent@@CA_NAEBVItemStack@@PEBVMountTameableDefinition@@@Z
     */
    MCAPI static bool _autoReject(class ItemStack const &, class MountTameableDefinition const *);

private:

};