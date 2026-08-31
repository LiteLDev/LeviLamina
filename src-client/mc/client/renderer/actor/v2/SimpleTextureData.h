#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/resources/MERSUniformData.h"
#include "mc/deps/minecraft_renderer/resources/PBRTexturePtrs.h"

struct SimpleTextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::PBRTexturePtrs>                  mPBRTexturePtrs;
    ::ll::TypedStorage<4, 20, ::std::optional<::MERSUniformData>> mMERSUniforms;
    // NOLINTEND
};
