#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { enum class Direction; }
// clang-format on

namespace AgentComponents {

class Move {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_MOVE
public:
    Move& operator=(Move const&) = delete;
    Move(Move const&)            = delete;
    Move()                       = delete;
#endif

public:
    /**
     * @symbol ?setup\@Move\@AgentComponents\@\@SAXAEAV12\@AEAVEntityContext\@\@W4Direction\@2\@\@Z
     */
    MCAPI static void setup(class AgentComponents::Move&, class EntityContext&, enum class AgentComponents::Direction);
};

}; // namespace AgentComponents
