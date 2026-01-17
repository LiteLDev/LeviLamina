#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct ConstantBufferObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk862781;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstantBufferObject& operator=(ConstantBufferObject const&);
    ConstantBufferObject(ConstantBufferObject const&);
    ConstantBufferObject();
};

} // namespace renoir
