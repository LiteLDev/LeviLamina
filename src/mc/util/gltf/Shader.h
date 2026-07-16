#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Shader {
public:
    // Shader inner types define
    enum class Type : int {
        FragmentShader = 35632,
        VertexShader   = 35633,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4c1920;
    ::ll::UntypedStorage<4, 4>  mUnk38e2d1;
    ::ll::UntypedStorage<8, 32> mUnke56583;
    ::ll::UntypedStorage<4, 4>  mUnk34516e;
    // NOLINTEND

public:
    // prevent constructor by default
    Shader& operator=(Shader const&);
    Shader(Shader const&);
    Shader();
};

} // namespace glTF
