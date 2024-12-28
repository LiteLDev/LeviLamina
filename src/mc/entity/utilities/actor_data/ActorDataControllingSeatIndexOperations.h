#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayStateValueDiff.h"
#include "mc/entity/utilities/actor_data/ActorDataSimpleOperations.h"

// auto generated forward declare list
// clang-format off
struct ActorDataControllingSeatIndexComponent;
// clang-format on

namespace ActorData {

struct ActorDataControllingSeatIndexOperations
: public ::ActorData::
      ActorDataSimpleOperations<::ReplayStateValueDiff<schar>, ::ActorDataControllingSeatIndexComponent, schar> {
public:
    // prevent constructor by default
    ActorDataControllingSeatIndexOperations& operator=(ActorDataControllingSeatIndexOperations const&);
    ActorDataControllingSeatIndexOperations(ActorDataControllingSeatIndexOperations const&);
    ActorDataControllingSeatIndexOperations();
};

} // namespace ActorData
