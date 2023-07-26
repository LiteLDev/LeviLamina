#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace AgentComponents { enum class Direction; }
// clang-format on

namespace AgentComponents {

class DetectObstacle {

public:
    // prevent constructor by default
    DetectObstacle& operator=(DetectObstacle const&) = delete;
    DetectObstacle(DetectObstacle const&)            = delete;
    DetectObstacle()                                 = delete;

public:
    /**
     * @symbol ?setup\@DetectObstacle\@AgentComponents\@\@SAXAEAV12\@AEAVEntityContext\@\@W4Direction\@2\@\@Z
     */
    MCAPI static void setup(
        class AgentComponents::DetectObstacle&,
        class EntityContext&,
        enum class AgentComponents::Direction
    ); // NOLINT
};

}; // namespace AgentComponents
