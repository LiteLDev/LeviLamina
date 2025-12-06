#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/VisibilityNode.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
struct RenderChunkShared;
// clang-format on

class RenderChunkVisibilityBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>             mAllDark;
    ::ll::TypedStorage<1, 1, bool>             mSkyLit;
    ::ll::TypedStorage<1, 6, ::VisibilityNode> mVisibility;
    ::ll::TypedStorage<1, 1, bool>             mEmpty;
    ::ll::TypedStorage<8, 8, ::BlockSource&>   mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkVisibilityBuilder& operator=(RenderChunkVisibilityBuilder const&);
    RenderChunkVisibilityBuilder(RenderChunkVisibilityBuilder const&);
    RenderChunkVisibilityBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void buildVisibilityData(::RenderChunkShared& renderChunkShared);
    // NOLINTEND
};
