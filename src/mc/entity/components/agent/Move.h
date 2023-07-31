#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace AgentComponents { enum class Direction; }
// clang-format on

namespace AgentComponents {

class Move {

public:
    // prevent constructor by default
    Move& operator=(Move const&) = delete;
    Move(Move const&)            = delete;
    Move()                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?setup\@Move\@AgentComponents\@\@SAXAEAV12\@AEAVEntityContext\@\@W4Direction\@2\@\@Z
     */
    MCAPI static void setup(class AgentComponents::Move&, class EntityContext&, enum class AgentComponents::Direction);
    // NOLINTEND
};

}; // namespace AgentComponents
