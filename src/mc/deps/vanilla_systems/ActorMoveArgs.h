#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace VanillaSystems { class IActorAdapter; }
namespace VanillaSystems { class IBlockSourceFactoryAdapter; }
// clang-format on

namespace VanillaSystems {

struct ActorMoveArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::VanillaSystems::IActorAdapter*>              mActorAdapter;
    ::ll::TypedStorage<8, 8, ::VanillaSystems::IBlockSourceFactoryAdapter*> mBlockSourceFactoryAdapter;
    // NOLINTEND
};

} // namespace VanillaSystems
