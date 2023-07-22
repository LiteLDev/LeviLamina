/**
 * @file  TrustComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0TrustComponent\@\@QEAA\@XZ
     */
    MCAPI TrustComponent();
    /**
     * @symbol  ??0TrustComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI TrustComponent(class TrustComponent &&);
    /**
     * @symbol  ?addAdditionalSaveData\@TrustComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?assignTrustedPlayer\@TrustComponent\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void assignTrustedPlayer(struct ActorUniqueID);
    /**
     * @symbol  ?getTrustedPlayerIDs\@TrustComponent\@\@QEBAAEBV?$unordered_set\@UActorUniqueID\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@UActorUniqueID\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> const & getTrustedPlayerIDs() const;
    /**
     * @symbol  ?initFromDefinition\@TrustComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol  ??4TrustComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class TrustComponent & operator=(class TrustComponent &&);
    /**
     * @symbol  ?readAdditionalSaveData\@TrustComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);

};