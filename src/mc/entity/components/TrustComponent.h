#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrustComponent {

public:
    // prevent constructor by default
    TrustComponent& operator=(TrustComponent const&) = delete;
    TrustComponent(TrustComponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0TrustComponent\@\@QEAA\@XZ
     */
    MCAPI TrustComponent();
    /**
     * @symbol ?addAdditionalSaveData\@TrustComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?assignTrustedPlayer\@TrustComponent\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void assignTrustedPlayer(struct ActorUniqueID);
    /**
     * @symbol
     * ?getTrustedPlayerIDs\@TrustComponent\@\@QEBAAEBV?$unordered_set\@UActorUniqueID\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@UActorUniqueID\@\@\@3\@\@std\@\@XZ
     */
    MCAPI std::unordered_set<struct ActorUniqueID> const& getTrustedPlayerIDs() const;
    /**
     * @symbol ?initFromDefinition\@TrustComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    /**
     * @symbol ?readAdditionalSaveData\@TrustComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    // NOLINTEND
};
