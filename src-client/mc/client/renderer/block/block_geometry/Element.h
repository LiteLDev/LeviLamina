#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockGeometry { struct ElementBox; }
// clang-format on

namespace BlockGeometry {

struct Element {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                              mName;
    ::ll::TypedStorage<8, 32, ::std::string>                              mParent;
    ::ll::TypedStorage<4, 12, ::glm::vec3>                                mPivot;
    ::ll::TypedStorage<4, 12, ::glm::vec3>                                mRotation;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockGeometry::ElementBox>> mBoxes;
    // NOLINTEND
};

} // namespace BlockGeometry
