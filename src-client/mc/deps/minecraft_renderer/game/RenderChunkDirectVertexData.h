#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/dragon/RenderMetadata.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedVertexBufferResource; }
// clang-format on

struct RenderChunkDirectVertexData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::optional<::dragon::RenderMetadata> const> mRenderMetadata;
    ::ll::TypedStorage<1, 1, bool>                                             mSplitStream;
    ::ll::TypedStorage<8, 24, ::std::optional<::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource>>>
        mVertexData;
    ::ll::TypedStorage<8, 24, ::std::optional<::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource>>>
        mAttributeData;
    ::ll::TypedStorage<8, 24, ::std::optional<::mce::ServerResourcePointer<::dragon::ResolvedVertexBufferResource>>>
                                     mAdditionalVertexStream;
    ::ll::TypedStorage<8, 8, uint64> mVertexCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RenderChunkDirectVertexData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
