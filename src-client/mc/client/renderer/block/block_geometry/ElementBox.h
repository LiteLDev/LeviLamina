#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/block_geometry/Face.h"

namespace BlockGeometry {

struct ElementBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3>                             mOrigin;
    ::ll::TypedStorage<4, 12, ::glm::vec3>                             mSize;
    ::ll::TypedStorage<8, 384, ::std::array<::BlockGeometry::Face, 6>> mFaces;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ElementBox();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace BlockGeometry
