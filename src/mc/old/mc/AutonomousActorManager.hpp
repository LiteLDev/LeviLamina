/**
 * @file  AutonomousActorManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class AutonomousActorManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUTONOMOUSACTORMANAGER
public:
    class AutonomousActorManager& operator=(class AutonomousActorManager const &) = delete;
    AutonomousActorManager(class AutonomousActorManager const &) = delete;
#endif

public:
    /**
     * @symbol  ??0AutonomousActorManager\@\@QEAA\@XZ
     */
    MCAPI AutonomousActorManager();
    /**
     * @symbol  ?addAutonomousActorEntity\@AutonomousActorManager\@\@QEAAPEAVActor\@\@AEAVDimension\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI class Actor * addAutonomousActorEntity(class Dimension &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?addAutonomousActorEntity\@AutonomousActorManager\@\@QEAAPEAVActor\@\@AEAVIAddActorEntityProxy\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI class Actor * addAutonomousActorEntity(class IAddActorEntityProxy &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?addOwnedInactiveAutonomousActorEntity\@AutonomousActorManager\@\@QEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI void addOwnedInactiveAutonomousActorEntity(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?hasOwnedInactiveAutonomousActorWithUniqueID\@AutonomousActorManager\@\@QEBA_NUActorUniqueID\@\@\@Z
     */
    MCAPI bool hasOwnedInactiveAutonomousActorWithUniqueID(struct ActorUniqueID) const;
    /**
     * @symbol  ?initializeWithActorManager\@AutonomousActorManager\@\@QEAAXV?$not_null\@V?$NonOwnerPointer\@VActorManager\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI void initializeWithActorManager(class gsl::not_null<class Bedrock::NonOwnerPointer<class ActorManager>>);
    /**
     * @symbol  ?onChunkDiscarded\@AutonomousActorManager\@\@QEAAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI void onChunkDiscarded(class LevelChunk &);
    /**
     * @symbol  ?onChunkLoaded\@AutonomousActorManager\@\@QEAAXAEAVLevelChunk\@\@\@Z
     */
    MCAPI void onChunkLoaded(class LevelChunk &);
    /**
     * @symbol  ??1AutonomousActorManager\@\@QEAA\@XZ
     */
    MCAPI ~AutonomousActorManager();

//private:
    /**
     * @symbol  ?_moveActiveAutonomousActorEntityToInactive\@AutonomousActorManager\@\@AEAAXAEAVActor\@\@AEAVLevelChunk\@\@\@Z
     */
    MCAPI void _moveActiveAutonomousActorEntityToInactive(class Actor &, class LevelChunk &);
    /**
     * @symbol  ?_onRemoveActorEntityReferences\@AutonomousActorManager\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _onRemoveActorEntityReferences(class Actor &);

private:

};