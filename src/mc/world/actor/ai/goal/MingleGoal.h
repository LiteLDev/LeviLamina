#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/POIType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

class MingleGoal : public ::MoveToPOIGoal {
public:
    // prevent constructor by default
    MingleGoal& operator=(MingleGoal const&);
    MingleGoal(MingleGoal const&);
    MingleGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MingleGoal@@UEAA@XZ
    virtual ~MingleGoal() = default;

    // vIndex: 1, symbol: ?canUse@MingleGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MingleGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@MingleGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@MingleGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@MingleGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MingleGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0MingleGoal@@QEAA@AEAVMob@@MMMUActorDefinitionIdentifier@@M@Z
    MCAPI MingleGoal(
        class Mob&                       actor,
        float                            speedModifier,
        float                            mingleDurationSecs,
        float                            cooldownDurationSecs,
        struct ActorDefinitionIdentifier desiredPartnerType,
        float                            mingleDistance
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_findNewPartner@MingleGoal@@AEAAXUActorUniqueID@@@Z
    MCAPI void _findNewPartner(struct ActorUniqueID previousPartnerId);

    // symbol: ?_getMingleComponent@MingleGoal@@AEBAAEAVMingleComponent@@XZ
    MCAPI class MingleComponent& _getMingleComponent() const;

    // symbol: ?_isWithinInteractRange@MingleGoal@@AEBA_NAEAVActor@@@Z
    MCAPI bool _isWithinInteractRange(class Actor& partner) const;

    // symbol: ?_tryGetMingleComponent@MingleGoal@@CAPEAVMingleComponent@@AEAVActor@@@Z
    MCAPI static class MingleComponent* _tryGetMingleComponent(class Actor& actor);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?FIND_PARTNER_INTERVAL_TICKS@MingleGoal@@0HB
    MCAPI static int const FIND_PARTNER_INTERVAL_TICKS;

    // symbol: ?SPEAK_INTERVAL_TICKS_MAX@MingleGoal@@0HB
    MCAPI static int const SPEAK_INTERVAL_TICKS_MAX;

    // symbol: ?SPEAK_INTERVAL_TICKS_MIN@MingleGoal@@0HB
    MCAPI static int const SPEAK_INTERVAL_TICKS_MIN;

    // NOLINTEND
};
