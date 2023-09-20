/**
 * @file  ClientRewind.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ClientRewind {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?applyData\@ClientRewind\@\@YAXAEBUReplayStateTrackerDiff\@\@AEAUSynchedActorDataComponent\@\@\@Z
     */
    MCAPI void applyData(struct ReplayStateTrackerDiff const &, struct SynchedActorDataComponent &);
    /**
     * @symbol ?applyData\@ClientRewind\@\@YAXAEBUReplayStateFlagDiff\@\@AEAUSynchedActorDataComponent\@\@W4ActorDataIDs\@\@\@Z
     */
    MCAPI void applyData(struct ReplayStateFlagDiff const &, struct SynchedActorDataComponent &, enum class ActorDataIDs);
    /**
     * @symbol ?extractSnapshot\@ClientRewind\@\@YA?AUReplayStateTrackerDiff\@\@AEBUSynchedActorDataComponent\@\@\@Z
     */
    MCAPI struct ReplayStateTrackerDiff extractSnapshot(struct SynchedActorDataComponent const &);
    /**
     * @symbol ?tickAccumulate\@ClientRewind\@\@YAXU?$type_list\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@\@entt\@\@AEAUReplayStateTrackerComponent\@\@AEBUSynchedActorDataComponent\@\@\@Z
     */
    MCAPI void tickAccumulate(struct entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>, struct ReplayStateTrackerComponent &, struct SynchedActorDataComponent const &);

};