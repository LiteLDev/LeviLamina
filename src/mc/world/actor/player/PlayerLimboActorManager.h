#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerLimboActorManager {

public:
    // prevent constructor by default
    PlayerLimboActorManager& operator=(PlayerLimboActorManager const&) = delete;
    PlayerLimboActorManager(PlayerLimboActorManager const&)            = delete;

public:
    /**
     * @symbol ??0PlayerLimboActorManager\@\@QEAA\@XZ
     */
    MCAPI PlayerLimboActorManager(); // NOLINT
    /**
     * @symbol
     * ?addOwnedLimboActor\@PlayerLimboActorManager\@\@QEAAXUActorUniqueID\@\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addOwnedLimboActor(struct ActorUniqueID, std::unique_ptr<class CompoundTag>); // NOLINT
    /**
     * @symbol
     * ?getOwnedActorsDimensionTransferLimbo\@PlayerLimboActorManager\@\@QEAAAEAV?$unordered_map\@UActorUniqueID\@\@V?$vector\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@U?$hash\@UActorUniqueID\@\@\@3\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@U?$pair\@$$CBUActorUniqueID\@\@V?$vector\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        struct ActorUniqueID,
        std::vector<std::unique_ptr<class CompoundTag>>,
        struct std::hash<struct ActorUniqueID>,
        struct std::equal_to<struct ActorUniqueID>,
        class std::allocator<
            struct std::pair<struct ActorUniqueID const, std::vector<std::unique_ptr<class CompoundTag>>>>>&
    getOwnedActorsDimensionTransferLimbo(); // NOLINT
    /**
     * @symbol ?loadAllOwnedLimboActors\@PlayerLimboActorManager\@\@QEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void loadAllOwnedLimboActors(class LevelStorage&); // NOLINT
    /**
     * @symbol ?saveOwnedLimboActorsForPlayer\@PlayerLimboActorManager\@\@QEBAXUActorUniqueID\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void saveOwnedLimboActorsForPlayer(struct ActorUniqueID, class LevelStorage&) const; // NOLINT
    /**
     * @symbol ??1PlayerLimboActorManager\@\@QEAA\@XZ
     */
    MCAPI ~PlayerLimboActorManager(); // NOLINT
    /**
     * @symbol
     * ?getOwnedEntityLimboStorageKeyForPlayer\@PlayerLimboActorManager\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI static std::string getOwnedEntityLimboStorageKeyForPlayer(struct ActorUniqueID); // NOLINT
};
