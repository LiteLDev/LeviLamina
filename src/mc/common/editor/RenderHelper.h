#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/render_helper/PrimitiveType.h"
#include "mc/editor/services/render_helper/SplineType.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"

namespace Editor::ScriptModule::RenderHelper {
// functions
// NOLINTBEGIN
MCAPI ::Scripting::EnumBindingBuilder<::Editor::RenderHelper::PrimitiveType, ::Editor::RenderHelper::PrimitiveType>
bindPrimitiveTypeEnums();

MCAPI ::Scripting::EnumBindingBuilder<::Editor::RenderHelper::SplineType, ::Editor::RenderHelper::SplineType>
bindSplineEnums();
// NOLINTEND

} // namespace Editor::ScriptModule::RenderHelper
