#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

struct TextureAtlasTileUVs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk91ce98;
    ::ll::UntypedStorage<4, 4> mUnk56c951;
    ::ll::UntypedStorage<4, 4> mUnk7b5bf2;
    ::ll::UntypedStorage<4, 4> mUnk2f9c04;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlasTileUVs& operator=(TextureAtlasTileUVs const&);
    TextureAtlasTileUVs(TextureAtlasTileUVs const&);
    TextureAtlasTileUVs();
};

} // namespace cg
