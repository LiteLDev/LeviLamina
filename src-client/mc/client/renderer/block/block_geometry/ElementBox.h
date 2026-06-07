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
    // prevent constructor by default
    ElementBox& operator=(ElementBox const&);
    ElementBox();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ElementBox(::BlockGeometry::ElementBox const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockGeometry::ElementBox const&);
    // NOLINTEND
};

} // namespace BlockGeometry
