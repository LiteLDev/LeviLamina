#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct TextureUVs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb6c70e;
    ::ll::UntypedStorage<4, 4> mUnk797a8c;
    ::ll::UntypedStorage<4, 4> mUnkc59890;
    ::ll::UntypedStorage<4, 4> mUnk6817ce;
    ::ll::UntypedStorage<4, 4> mUnk595bb7;
    ::ll::UntypedStorage<2, 2> mUnk931fcb;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureUVs& operator=(TextureUVs const&);
    TextureUVs(TextureUVs const&);
    TextureUVs();

};

}
