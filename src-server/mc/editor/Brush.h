#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Brush { struct BlockPlacementSettings; }
namespace Editor::Brush { struct ItemPlacementSettings; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::Brush {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::EnumBinding bindBrushFlattenModes();

MCNAPI ::Scripting::EnumBinding bindBrushPaintCompletionStates();

MCNAPI ::Scripting::EnumBinding bindBrushPaintModes();

MCNAPI ::Scripting::EnumBinding bindDirectionalPlacementModes();

MCNAPI void placeAsBlock(::Editor::Brush::BlockPlacementSettings const& settings);

MCNAPI void placeWithItem(::Editor::Brush::ItemPlacementSettings const& settings);
// NOLINTEND

} // namespace Editor::Brush
