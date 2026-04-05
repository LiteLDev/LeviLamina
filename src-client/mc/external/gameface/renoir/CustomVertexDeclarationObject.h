#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct CustomVertexDeclarationObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk28a724;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomVertexDeclarationObject& operator=(CustomVertexDeclarationObject const&);
    CustomVertexDeclarationObject(CustomVertexDeclarationObject const&);
    CustomVertexDeclarationObject();
};

} // namespace renoir
