#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Shader {
public:
    // Shader inner types define
    enum class Type : int {
        FragmentShader = 4294937392,
        VertexShader   = 4294937393,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk73bba4;
    ::ll::UntypedStorage<4, 4>  mUnk38e2d1;
    ::ll::UntypedStorage<8, 32> mUnk98f018;
    ::ll::UntypedStorage<4, 4>  mUnk34516e;
    // NOLINTEND

public:
    // prevent constructor by default
    Shader& operator=(Shader const&);
    Shader(Shader const&);
    Shader();
};

} // namespace glTF
