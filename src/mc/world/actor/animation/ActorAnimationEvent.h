#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/util/molang/MolangVersion.h"

class ActorAnimationEvent {
public:
    // prevent constructor by default
    ActorAnimationEvent& operator=(ActorAnimationEvent const&);
    ActorAnimationEvent(ActorAnimationEvent const&);
    ActorAnimationEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ActorAnimationEvent@@QEAA@$$QEAV0@@Z
    MCAPI ActorAnimationEvent(class ActorAnimationEvent&&);

    // symbol:
    // ??0ActorAnimationEvent@@QEAA@MAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CurrentCmdVersion@@W4MolangVersion@@@Z
    MCAPI ActorAnimationEvent(
        float               time,
        std::string const&  event,
        ::CurrentCmdVersion commandVersion,
        ::MolangVersion     molangVersion
    );

    // symbol: ?fire@ActorAnimationEvent@@QEBAXAEAVRenderParams@@PEAVActor@@@Z
    MCAPI void fire(class RenderParams& renderParams, class Actor* actor) const;

    // symbol: ??1ActorAnimationEvent@@QEAA@XZ
    MCAPI ~ActorAnimationEvent();

    // NOLINTEND
};
