#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { enum class Direction; }
// clang-format on

namespace AgentComponents {

class DetectObstacle {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_DETECTOBSTACLE
public:
    DetectObstacle& operator=(DetectObstacle const&) = delete;
    DetectObstacle(DetectObstacle const&)            = delete;
    DetectObstacle()                                 = delete;
#endif

public:
    /**
     * @symbol ?setup\@DetectObstacle\@AgentComponents\@\@SAXAEAV12\@AEAVEntityContext\@\@W4Direction\@2\@\@Z
     */
    MCAPI static void
    setup(class AgentComponents::DetectObstacle&, class EntityContext&, enum class AgentComponents::Direction);
};

}; // namespace AgentComponents
