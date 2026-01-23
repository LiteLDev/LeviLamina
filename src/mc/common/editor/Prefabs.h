#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/PrefabTemplateErrorState.h"
#include "mc/editor/prefabs/VisiblePrefabInstanceStructureRef.h"
#include "mc/editor/services/prefabs/PrefabInstanceErrorState.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Prefabs {
// functions
// NOLINTBEGIN
MCNAPI void bindType(::cereal::ReflectionCtx& ctx);

MCNAPI bool operator==(
    ::Editor::Prefabs::VisiblePrefabInstanceStructureRef const& __P0,
    ::Editor::Prefabs::VisiblePrefabInstanceStructureRef const& __P1
);

MCNAPI ::std::string toString(::Editor::Prefabs::PrefabInstanceErrorState state);

MCNAPI ::std::string toString(::Editor::Prefabs::PrefabTemplateErrorState state);
// NOLINTEND

} // namespace Editor::Prefabs
