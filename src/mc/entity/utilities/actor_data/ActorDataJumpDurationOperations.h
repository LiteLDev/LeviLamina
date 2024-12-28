#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayStateValueDiff.h"
#include "mc/entity/utilities/actor_data/ActorDataSimpleOperations.h"

// auto generated forward declare list
// clang-format off
struct ActorDataJumpDurationComponent;
// clang-format on

namespace ActorData {

struct ActorDataJumpDurationOperations
: public ::ActorData::
      ActorDataSimpleOperations<::ReplayStateValueDiff<schar>, ::ActorDataJumpDurationComponent, schar> {
public:
    // prevent constructor by default
    ActorDataJumpDurationOperations& operator=(ActorDataJumpDurationOperations const&);
    ActorDataJumpDurationOperations(ActorDataJumpDurationOperations const&);
    ActorDataJumpDurationOperations();
};

} // namespace ActorData
