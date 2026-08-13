#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::rendering { struct BufferClear; }
// clang-format on

namespace GeometryAtlas {

struct GetTileRenderConfig {
public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::dragon::rendering::BufferClear const& CLEAR();

    MCAPI static ::glm::mat4x4 const& PROJ();
    // NOLINTEND
};

} // namespace GeometryAtlas
