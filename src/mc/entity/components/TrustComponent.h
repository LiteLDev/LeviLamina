#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrustComponent {

public:
    // prevent constructor by default
    TrustComponent& operator=(TrustComponent const&) = delete;
    TrustComponent(TrustComponent const&)            = delete;

public:
    /**
     * @symbol ??0TrustComponent\@\@QEAA\@XZ
     */
    MCAPI TrustComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@TrustComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?assignTrustedPlayer\@TrustComponent\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void assignTrustedPlayer(struct ActorUniqueID); // NOLINT
    /**
     * @symbol
     * ?getTrustedPlayerIDs\@TrustComponent\@\@QEBAAEBV?$unordered_set\@UActorUniqueID\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@UActorUniqueID\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_set<
        struct ActorUniqueID,
        struct std::hash<struct ActorUniqueID>,
        struct std::equal_to<struct ActorUniqueID>,
        class std::allocator<struct ActorUniqueID>> const&
    getTrustedPlayerIDs() const; // NOLINT
    /**
     * @symbol ?initFromDefinition\@TrustComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ?readAdditionalSaveData\@TrustComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
};
