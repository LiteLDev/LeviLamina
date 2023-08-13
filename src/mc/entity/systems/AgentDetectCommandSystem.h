#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class DetectObstacle; }
namespace AgentComponents { class DetectRedstone; }
// clang-format on

class AgentDetectCommandSystem : public ::ITickingSystem {

public:
    // prevent constructor by default
    AgentDetectCommandSystem& operator=(AgentDetectCommandSystem const&) = delete;
    AgentDetectCommandSystem(AgentDetectCommandSystem const&)            = delete;
    AgentDetectCommandSystem()                                           = delete;

public:
    // NOLINTBEGIN
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
     * @symbol ?tick\@AgentDetectCommandSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    /**
     * @symbol
     * ?initializeObstacle\@AgentDetectCommandSystem\@\@SAXAEAVEntityContext\@\@AEAVDetectObstacle\@AgentComponents\@\@\@Z
     */
    MCAPI static void initializeObstacle(class EntityContext&, class AgentComponents::DetectObstacle&);
    /**
     * @symbol
     * ?initializeRedstone\@AgentDetectCommandSystem\@\@SAXAEAVEntityContext\@\@AEAVDetectRedstone\@AgentComponents\@\@\@Z
     */
    MCAPI static void initializeRedstone(class EntityContext&, class AgentComponents::DetectRedstone&);
    // NOLINTEND
};
