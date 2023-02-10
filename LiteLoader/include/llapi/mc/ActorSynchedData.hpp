/**
 * @file  ActorSynchedData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ActorSynchedData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?updateAction\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
     */
    MCAPI void updateAction(class Actor &);
    /**
     * @symbol  ?updateAmbientSound\@ActorSynchedData\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void updateAmbientSound(class EntityContext &);
    /**
     * @symbol  ?updateBuoyancyData\@ActorSynchedData\@\@YAXAEAVEntityContext\@\@AEBVSynchedActorDataEntityWrapper\@\@\@Z
     */
    MCAPI void updateBuoyancyData(class EntityContext &, class SynchedActorDataEntityWrapper const &);
    /**
     * @symbol  ?updateCommandBlock\@ActorSynchedData\@\@YAXAEAVActor\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void updateCommandBlock(class Actor &, int, std::string &);
    /**
     * @symbol  ?updateContainer\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
     */
    MCAPI void updateContainer(class Actor &);
    /**
     * @symbol  ?updateHasNPC\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
     */
    MCAPI void updateHasNPC(class Actor &);
    /**
     * @symbol  ?updateHeartbeat\@ActorSynchedData\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void updateHeartbeat(class EntityContext &);
    /**
     * @symbol  ?updateHitbox\@ActorSynchedData\@\@YAXAEAVEntityContext\@\@AEBVSynchedActorDataEntityWrapper\@\@\@Z
     */
    MCAPI void updateHitbox(class EntityContext &, class SynchedActorDataEntityWrapper const &);
    /**
     * @symbol  ?updateInteractText\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
     */
    MCAPI void updateInteractText(class Actor &);
    /**
     * @symbol  ?updateIsBuoyant\@ActorSynchedData\@\@YAXAEAVEntityContext\@\@AEAVSynchedActorDataEntityWrapper\@\@\@Z
     */
    MCAPI void updateIsBuoyant(class EntityContext &, class SynchedActorDataEntityWrapper &);
    /**
     * @symbol  ?updateNPCData\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
     */
    MCAPI void updateNPCData(class Actor &);
    /**
     * @symbol  ?updateNameTag\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
     */
    MCAPI void updateNameTag(class Actor &);
    /**
     * @symbol  ?updateRawNameText\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
     */
    MCAPI void updateRawNameText(class Actor &);
    /**
     * @symbol  ?updateRuntimeID\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
     */
    MCAPI void updateRuntimeID(class Actor &);
    /**
     * @symbol  ?updateSize\@ActorSynchedData\@\@YAXAEAVActor\@\@\@Z
     */
    MCAPI void updateSize(class Actor &);
    /**
     * @symbol  ?updateTarget\@ActorSynchedData\@\@YAXAEAVActor\@\@AEAUActorUniqueID\@\@\@Z
     */
    MCAPI void updateTarget(class Actor &, struct ActorUniqueID &);
    /**
     * @symbol  ?updateTintColor\@ActorSynchedData\@\@YAXAEAVColor\@mce\@\@AEBW4PaletteColor\@\@\@Z
     */
    MCAPI void updateTintColor(class mce::Color &, enum class PaletteColor const &);

};