#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/dragon/RenderMetadata.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedIndexBufferResource; }
// clang-format on

struct RenderChunkDirectIndexData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::std::optional<::dragon::RenderMetadata> const> mRenderMetadata;
    ::ll::TypedStorage<8, 32, ::std::optional<::mce::ServerResourcePointer<::dragon::ResolvedIndexBufferResource>>>
                                  mIndexData;
    ::ll::TypedStorage<4, 4, int> mIterationCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RenderChunkDirectIndexData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
