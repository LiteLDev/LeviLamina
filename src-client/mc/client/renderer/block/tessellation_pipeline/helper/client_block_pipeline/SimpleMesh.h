#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/MeshData.h"

// auto generated forward declare list
// clang-format off
struct TessellatorQuadInfo;
// clang-format on

namespace ClientBlockPipeline {

struct SimpleMesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 288, ::mce::MeshData>                     mMeshData;
    ::ll::TypedStorage<8, 24, ::std::vector<::TessellatorQuadInfo>> mQuadInfoList;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
