/**
 * @file  ActorSetPosSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ActorSetPosSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSETPOSSYSTEM
public:
    class ActorSetPosSystem& operator=(class ActorSetPosSystem const &) = delete;
    ActorSetPosSystem(class ActorSetPosSystem const &) = delete;
    ActorSetPosSystem() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?tick\@ActorSetPosSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorAddedFlag\@\@\@\@V?$FlagComponent\@UActorRemovedFlag\@\@\@\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UPaintingFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UShulkerFlag\@\@\@\@\@\@U?$Read\@VActorOwnerComponent\@\@UChunkPositionComponent\@\@UOffsetsComponent\@\@USlideOffsetComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@UActorSetPositionRequestComponent\@\@VHitboxComponent\@\@UStateVectorComponent\@\@USynchedActorDataComponent\@\@\@\@U?$AddRemove\@V?$FlagComponent\@UActorChunkMoveFlag\@\@\@\@V?$FlagComponent\@UActorLocalPlayerEntityMovedFlag\@\@\@\@UActorSetPositionRequestComponent\@\@\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorAddedFlag>, class FlagComponent<struct ActorRemovedFlag>, class FlagComponent<struct LocalPlayerComponentFlag>, class FlagComponent<struct PaintingFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct ShulkerFlag>>, struct Read<class ActorOwnerComponent, struct ChunkPositionComponent, struct OffsetsComponent, struct SlideOffsetComponent>, struct Write<struct AABBShapeComponent, struct ActorSetPositionRequestComponent, class HitboxComponent, struct StateVectorComponent, struct SynchedActorDataComponent>, struct AddRemove<class FlagComponent<struct ActorChunkMoveFlag>, class FlagComponent<struct ActorLocalPlayerEntityMovedFlag>, struct ActorSetPositionRequestComponent>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @vftbl 5
     * @symbol ?singleTick\@ActorSetPosSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorAddedFlag\@\@\@\@V?$FlagComponent\@UActorRemovedFlag\@\@\@\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UPaintingFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UShulkerFlag\@\@\@\@\@\@U?$Read\@VActorOwnerComponent\@\@UChunkPositionComponent\@\@UOffsetsComponent\@\@USlideOffsetComponent\@\@\@\@U?$Write\@UAABBShapeComponent\@\@UActorSetPositionRequestComponent\@\@VHitboxComponent\@\@UStateVectorComponent\@\@USynchedActorDataComponent\@\@\@\@U?$AddRemove\@V?$FlagComponent\@UActorChunkMoveFlag\@\@\@\@V?$FlagComponent\@UActorLocalPlayerEntityMovedFlag\@\@\@\@UActorSetPositionRequestComponent\@\@\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEAVStrictEntityContext\@\@\@Z
     */
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorAddedFlag>, class FlagComponent<struct ActorRemovedFlag>, class FlagComponent<struct LocalPlayerComponentFlag>, class FlagComponent<struct PaintingFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct ShulkerFlag>>, struct Read<class ActorOwnerComponent, struct ChunkPositionComponent, struct OffsetsComponent, struct SlideOffsetComponent>, struct Write<struct AABBShapeComponent, struct ActorSetPositionRequestComponent, class HitboxComponent, struct StateVectorComponent, struct SynchedActorDataComponent>, struct AddRemove<class FlagComponent<struct ActorChunkMoveFlag>, class FlagComponent<struct ActorLocalPlayerEntityMovedFlag>, struct ActorSetPositionRequestComponent>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &, class StrictEntityContext &);
    /**
     * @symbol ?actorUpdateOwnerChunk\@ActorSetPosSystem\@\@SAXAEAVEntityContext\@\@\@Z
     */
    MCAPI static void actorUpdateOwnerChunk(class EntityContext &);
    /**
     * @symbol ?createSystem\@ActorSetPosSystem\@\@SA?AUTickingSystemWithInfo\@\@_N\@Z
     */
    MCAPI static struct TickingSystemWithInfo createSystem(bool);
    /**
     * @symbol ?moveHitboxTo\@ActorSetPosSystem\@\@SAXAEBVVec3\@\@AEAV?$vector\@UHitbox\@\@V?$allocator\@UHitbox\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void moveHitboxTo(class Vec3 const &, std::vector<struct Hitbox> &);
    /**
     * @symbol ?refreshAABB\@ActorSetPosSystem\@\@SA?AVAABB\@\@MAEBVVec3\@\@AEBVVec2\@\@1\@Z
     */
    MCAPI static class AABB refreshAABB(float, class Vec3 const &, class Vec2 const &, class Vec2 const &);

};
