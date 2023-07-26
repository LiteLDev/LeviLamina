#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

struct ClientStopGlidingSystem {

public:
    // prevent constructor by default
    ClientStopGlidingSystem& operator=(ClientStopGlidingSystem const&) = delete;
    ClientStopGlidingSystem(ClientStopGlidingSystem const&)            = delete;
    ClientStopGlidingSystem()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?tick\@ClientStopGlidingSystem\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Read\@$$V\@\@U?$Write\@UOffsetsComponent\@\@UPlayerActionComponent\@\@USynchedActorDataComponent\@\@\@\@U?$AddRemove\@V?$FlagComponent\@UStopGlidingRequestFlag\@\@\@\@UShouldUpdateBoundingBoxRequestComponent\@\@\@\@U?$GlobalRead\@$$V\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void
    tick(class StrictExecutionContext<
         struct Filter<
             class FlagComponent<struct ActorMovementTickNeededFlag>,
             class FlagComponent<struct PlayerComponentFlag>>,
         struct Read<>,
         struct Write<struct OffsetsComponent, struct PlayerActionComponent, struct SynchedActorDataComponent>,
         struct AddRemove<
             class FlagComponent<struct StopGlidingRequestFlag>,
             struct ShouldUpdateBoundingBoxRequestComponent>,
         struct GlobalRead<>,
         struct GlobalWrite<>,
         struct EntityFactoryT<>>&); // NOLINT
    /**
     * @symbol ?createClientStopGlidingSystem\@ClientStopGlidingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createClientStopGlidingSystem(); // NOLINT
};
