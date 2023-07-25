#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class AutonomousActorManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUTONOMOUSACTORMANAGER
public:
    AutonomousActorManager& operator=(AutonomousActorManager const&) = delete;
    AutonomousActorManager(AutonomousActorManager const&)            = delete;
    AutonomousActorManager()                                         = delete;
#endif

public:
    /**
     * @symbol ??0AutonomousActorManager\@\@QEAA\@V?$WeakRefT\@UEntityRegistryRefTraits\@\@\@\@\@Z
     */
    MCAPI AutonomousActorManager(class WeakRefT<struct EntityRegistryRefTraits>);
    /**
     * @symbol
     * ?addAutonomousActorEntity\@AutonomousActorManager\@\@QEAAPEAVActor\@\@AEAVDimension\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI class Actor* addAutonomousActorEntity(class Dimension&, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol
     * ?addAutonomousActorEntity\@AutonomousActorManager\@\@QEAAPEAVActor\@\@AEAVIAddActorEntityProxy\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI class Actor* addAutonomousActorEntity(class IAddActorEntityProxy&, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol ?hasOwnedInactiveAutonomousActorWithUniqueID\@AutonomousActorManager\@\@QEBA_NUActorUniqueID\@\@\@Z
     */
    MCAPI bool hasOwnedInactiveAutonomousActorWithUniqueID(struct ActorUniqueID) const;
    /**
     * @symbol
     * ?initializeWithActorManager\@AutonomousActorManager\@\@QEAAXV?$not_null\@V?$NonOwnerPointer\@VActorManager\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI void initializeWithActorManager(class gsl::not_null<class Bedrock::NonOwnerPointer<class ActorManager>>);
    /**
     * @symbol ?loadAutonomousActorsFromDisk\@AutonomousActorManager\@\@QEAAXAEAVLevelStorage\@\@AEAVActorFactory\@\@\@Z
     */
    MCAPI void loadAutonomousActorsFromDisk(class LevelStorage&, class ActorFactory&);
    /**
     * @symbol ?onChunkDiscarded\@AutonomousActorManager\@\@QEAAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI void onChunkDiscarded(class LevelChunk&);
    /**
     * @symbol ?onChunkLoaded\@AutonomousActorManager\@\@QEAAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI void onChunkLoaded(class LevelChunk&);
    /**
     * @symbol ?registerLevelStorageManagerListener\@AutonomousActorManager\@\@QEAAXAEAVLevelStorageManager\@\@\@Z
     */
    MCAPI void registerLevelStorageManagerListener(class LevelStorageManager&);
    /**
     * @symbol ??1AutonomousActorManager\@\@QEAA\@XZ
     */
    MCAPI ~AutonomousActorManager();
    /**
     * @symbol
     * ?AUTONOMOUS_ACTOR_KEY\@AutonomousActorManager\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const AUTONOMOUS_ACTOR_KEY;
    /**
     * @symbol
     * ?AUTONOMOUS_ACTOR_LIST_KEY\@AutonomousActorManager\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const AUTONOMOUS_ACTOR_LIST_KEY;

    // private:
    /**
     * @symbol
     * ?_moveActiveAutonomousActorEntityToInactive\@AutonomousActorManager\@\@AEAAXAEAVActor\@\@AEAVLevelChunk\@\@\@Z
     */
    MCAPI void _moveActiveAutonomousActorEntityToInactive(class Actor&, class LevelChunk&);
    /**
     * @symbol ?_onRemoveActorEntityReferences\@AutonomousActorManager\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _onRemoveActorEntityReferences(class Actor&);
    /**
     * @symbol ?_saveAllAutonomousActors\@AutonomousActorManager\@\@AEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void _saveAllAutonomousActors(class LevelStorage&);
    /**
     * @symbol ?_deduplicateDuplicateActorsFromList\@AutonomousActorManager\@\@CAXAEAVListTag\@\@\@Z
     */
    MCAPI static void _deduplicateDuplicateActorsFromList(class ListTag&);

private:
};
