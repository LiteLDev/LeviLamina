#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace AgentComponents { enum class Direction; }
// clang-format on

namespace AgentComponents {

class DetectRedstone {

public:
    // prevent constructor by default
    DetectRedstone& operator=(DetectRedstone const&) = delete;
    DetectRedstone(DetectRedstone const&)            = delete;
    DetectRedstone()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?setup\@DetectRedstone\@AgentComponents\@\@SAXAEAV12\@AEAVEntityContext\@\@W4Direction\@2\@\@Z
     */
    MCAPI static void
    setup(class AgentComponents::DetectRedstone&, class EntityContext&, enum class AgentComponents::Direction);
    // NOLINTEND
};

}; // namespace AgentComponents
