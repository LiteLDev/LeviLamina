#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { enum class Direction; }
// clang-format on

namespace AgentComponents {

class DetectRedstone {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_DETECTREDSTONE
public:
    DetectRedstone& operator=(DetectRedstone const&) = delete;
    DetectRedstone(DetectRedstone const&)            = delete;
    DetectRedstone()                                 = delete;
#endif

public:
    /**
     * @symbol ?setup\@DetectRedstone\@AgentComponents\@\@SAXAEAV12\@AEAVEntityContext\@\@W4Direction\@2\@\@Z
     */
    MCAPI static void
    setup(class AgentComponents::DetectRedstone&, class EntityContext&, enum class AgentComponents::Direction);
};

}; // namespace AgentComponents
