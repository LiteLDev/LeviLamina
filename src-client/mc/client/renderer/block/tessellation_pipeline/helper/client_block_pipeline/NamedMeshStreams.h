#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockRenderLayer.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct SimpleMesh; }
// clang-format on

namespace ClientBlockPipeline {

struct NamedMeshStreams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockRenderLayer, ::ClientBlockPipeline::SimpleMesh>> mStreams;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
