#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerLimboActorManager {

public:
    // prevent constructor by default
    PlayerLimboActorManager& operator=(PlayerLimboActorManager const&) = delete;
    PlayerLimboActorManager(PlayerLimboActorManager const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0PlayerLimboActorManager\@\@QEAA\@XZ
     */
    MCAPI PlayerLimboActorManager();
    /**
     * @symbol
     * ?addOwnedLimboActor\@PlayerLimboActorManager\@\@QEAAXUActorUniqueID\@\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addOwnedLimboActor(struct ActorUniqueID, std::unique_ptr<class CompoundTag>);
    /**
     * @symbol
     * ?getOwnedActorsDimensionTransferLimbo\@PlayerLimboActorManager\@\@QEAAAEAV?$unordered_map\@UActorUniqueID\@\@V?$vector\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@U?$hash\@UActorUniqueID\@\@\@3\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@U?$pair\@$$CBUActorUniqueID\@\@V?$vector\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI std::unordered_map<struct ActorUniqueID, std::vector<std::unique_ptr<class CompoundTag>>>&
          getOwnedActorsDimensionTransferLimbo();
    /**
     * @symbol ?loadAllOwnedLimboActors\@PlayerLimboActorManager\@\@QEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void loadAllOwnedLimboActors(class LevelStorage&);
    /**
     * @symbol ?saveOwnedLimboActorsForPlayer\@PlayerLimboActorManager\@\@QEBAXUActorUniqueID\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void saveOwnedLimboActorsForPlayer(struct ActorUniqueID, class LevelStorage&) const;
    /**
     * @symbol ??1PlayerLimboActorManager\@\@QEAA\@XZ
     */
    MCAPI ~PlayerLimboActorManager();
    /**
     * @symbol
     * ?getOwnedEntityLimboStorageKeyForPlayer\@PlayerLimboActorManager\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI static std::string getOwnedEntityLimboStorageKeyForPlayer(struct ActorUniqueID);
    // NOLINTEND
};
