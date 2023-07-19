/**
 * @file  ClientStopGlidingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct ClientStopGlidingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTSTOPGLIDINGSYSTEM
public:
    struct ClientStopGlidingSystem& operator=(struct ClientStopGlidingSystem const &) = delete;
    ClientStopGlidingSystem(struct ClientStopGlidingSystem const &) = delete;
    ClientStopGlidingSystem() = delete;
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
     * @symbol ?tick\@ClientStopGlidingSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@$$V\@\@U?$Write\@UOffsetsComponent\@\@UPlayerActionComponent\@\@USynchedActorDataComponent\@\@\@\@U?$AddRemove\@V?$FlagComponent\@UStopGlidingRequestFlag\@\@\@\@UShouldUpdateBoundingBoxRequestComponent\@\@\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct Read<>, struct Write<struct OffsetsComponent, struct PlayerActionComponent, struct SynchedActorDataComponent>, struct AddRemove<class FlagComponent<struct StopGlidingRequestFlag>, struct ShouldUpdateBoundingBoxRequestComponent>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol ?createClientStopGlidingSystem\@ClientStopGlidingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createClientStopGlidingSystem();

};