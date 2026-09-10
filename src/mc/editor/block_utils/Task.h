#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/Task.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
struct Bounds;
namespace Editor { class ProjectRegion; }
namespace Editor { struct CoroutineStatus; }
// clang-format on

namespace Editor::BlockUtils::Task {
// functions
// NOLINTBEGIN
MCNAPI ::Editor::Task<::Scripting::Result_deprecated<void>, ::Editor::CoroutineStatus>
awaitRegionAvailable(::WeakRef<::Editor::ProjectRegion> region, ::std::optional<::Bounds> bounds);
// NOLINTEND

} // namespace Editor::BlockUtils::Task
