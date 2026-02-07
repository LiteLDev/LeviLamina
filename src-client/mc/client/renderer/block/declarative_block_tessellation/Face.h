#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/declarative_block_tessellation/TextureSlot.h"
#include "mc/client/renderer/block/declarative_block_tessellation/UVMap.h"
#include "mc/legacy/facing/Name.h"

namespace DeclarativeBlockTessellation {

struct Face {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Facing::Name>                              mFace;
    ::ll::TypedStorage<4, 16, ::DeclarativeBlockTessellation::UVMap>      mUVMap;
    ::ll::TypedStorage<8, 8, ::DeclarativeBlockTessellation::TextureSlot> mTextureSlot;
    // NOLINTEND
};

} // namespace DeclarativeBlockTessellation
