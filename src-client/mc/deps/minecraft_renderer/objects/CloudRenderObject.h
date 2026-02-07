#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

// auto generated forward declare list
// clang-format off
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on

struct CloudRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::vector<::mce::Mesh>>> mCloudMeshes;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                      mCloudMaterial;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                  mCloudColor;
    ::ll::TypedStorage<4, 12, ::glm::vec3>                                   mCloudDiff;
    ::ll::TypedStorage<4, 4, float>                                          mYTranslation;
    ::ll::TypedStorage<1, 1, bool>                                           mIsFancy;
    ::ll::TypedStorage<4, 4, int>                                            mMeshSize;
    ::ll::TypedStorage<4, 4, int>                                            mGridSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CloudRenderObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
