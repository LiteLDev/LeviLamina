#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class Replica3; }
namespace RakNet { struct LastSerializationResultBS; }
// clang-format on

namespace RakNet {

struct LastSerializationResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::Replica3*>                  replica;
    ::ll::TypedStorage<8, 8, uint64>                               whenLastSerialized;
    ::ll::TypedStorage<8, 8, ::RakNet::LastSerializationResultBS*> lastSerializationResultBS;
    // NOLINTEND
};

} // namespace RakNet
