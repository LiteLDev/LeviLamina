#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayStateValueDiff.h"
#include "mc/entity/utilities/actor_data/ActorDataSimpleOperations.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct ActorDataSeatOffsetComponent;
// clang-format on

namespace ActorData {

struct ActorDataSeatOffsetOperations
: public ::ActorData::
      ActorDataSimpleOperations<::ReplayStateValueDiff<::Vec3>, ::ActorDataSeatOffsetComponent, ::Vec3> {
public:
    // prevent constructor by default
    ActorDataSeatOffsetOperations& operator=(ActorDataSeatOffsetOperations const&);
    ActorDataSeatOffsetOperations(ActorDataSeatOffsetOperations const&);
    ActorDataSeatOffsetOperations();
};

} // namespace ActorData
