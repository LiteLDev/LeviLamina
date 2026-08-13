#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::CerealHelpers {
// functions
// NOLINTBEGIN
MCNAPI void bindHelpers(::cereal::ReflectionCtx& ctx);

MCNAPI void bindNetworPayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void glmvec2FromArray(::glm::vec2& vec, ::std::array<float, 2> arr);

MCNAPI void glmvec3FromArray(::glm::vec3& vec, ::std::array<float, 3> arr);

MCNAPI void ivec2FromArray(::glm::ivec2& vec, ::std::array<int, 2> arr);
// NOLINTEND

} // namespace Editor::CerealHelpers
