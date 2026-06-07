#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
namespace ECSModule { class IECSModule; }
namespace VanillaSystems { struct ActorMoveArgs; }
namespace VanillaSystems { struct BlockSourceFactoryAdapterComponent; }
// clang-format on

namespace VanillaSystems {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::ECSModule::IECSModule> createActorMoveModule(::VanillaSystems::ActorMoveArgs args);

MCAPI void
createTemporaryBlockSource(::OptionalGlobal<::VanillaSystems::BlockSourceFactoryAdapterComponent> adapterComponent);

MCAPI void
resetTemporaryBlockSource(::OptionalGlobal<::VanillaSystems::BlockSourceFactoryAdapterComponent> adapterComponent);
// NOLINTEND

} // namespace VanillaSystems
