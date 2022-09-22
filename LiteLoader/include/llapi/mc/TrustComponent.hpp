/**
 * @file  TrustComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TrustComponent.
 *
 */
class TrustComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRUSTCOMPONENT
public:
    class TrustComponent& operator=(class TrustComponent const &) = delete;
    TrustComponent(class TrustComponent const &) = delete;
#endif

public:
    /**
     * @hash   590168369
     * @symbol ??0TrustComponent@@QEAA@XZ
     */
    MCAPI TrustComponent();
    /**
     * @hash   1679295219
     * @symbol ??0TrustComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI TrustComponent(class TrustComponent &&);
    /**
     * @hash   72834696
     * @symbol ?addAdditionalSaveData@TrustComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -861761096
     * @symbol ?assignTrustedPlayer@TrustComponent@@QEAAXUActorUniqueID@@@Z
     */
    MCAPI void assignTrustedPlayer(struct ActorUniqueID);
    /**
     * @hash   -1058782144
     * @symbol ?getTrustedPlayerIDs@TrustComponent@@QEBAAEBV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@XZ
     */
    MCAPI class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> const & getTrustedPlayerIDs() const;
    /**
     * @hash   -2130420870
     * @symbol ?initFromDefinition@TrustComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   918910614
     * @symbol ??4TrustComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class TrustComponent & operator=(class TrustComponent &&);
    /**
     * @hash   -2057964812
     * @symbol ?readAdditionalSaveData@TrustComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);

};