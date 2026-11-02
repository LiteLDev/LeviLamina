#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/Task.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace Editor { class ProjectRegion; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct CoroutineStatus; }
namespace Editor::BlockUtils::FloodLevel { struct FloodResult; }
namespace Editor::BlockUtils::FloodLevel { struct FloodSearchOptions; }
namespace Editor::Coroutine { class CoroutineTaskContext; }
// clang-format on

namespace Editor::BlockUtils::FloodLevel {
// functions
// NOLINTBEGIN
MCNAPI ::Editor::
    Task<::Scripting::Result_deprecated<::Editor::BlockUtils::FloodLevel::FloodResult>, ::Editor::CoroutineStatus>
    searchFloodLevel(
        ::Editor::Coroutine::CoroutineTaskContext&              context,
        ::Editor::ServiceProviderCollection&                    services,
        ::WeakRef<::Editor::ProjectRegion>                      region,
        ::BlockPos                                              targetLocation,
        int                                                     currentWaterLevel,
        ::BlockSource*                                          expectedBlockSource,
        ::std::function<void(::std::vector<::BlockPos> const&)> positionProgress,
        ::Editor::BlockUtils::FloodLevel::FloodSearchOptions    searchOptions
    );
// NOLINTEND

} // namespace Editor::BlockUtils::FloodLevel
