#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

// auto generated forward declare list
// clang-format off
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on

struct NameTagRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                  mNameTag;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>> mCustomNameplateMesh;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>       mTagMat;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>       mTextMatOverride;
    ::ll::TypedStorage<4, 16, ::mce::Color>                   mTagColor;
    ::ll::TypedStorage<4, 16, ::mce::Color>                   mTextColor;
    ::ll::TypedStorage<4, 12, ::glm::vec3>                    mPos;
    ::ll::TypedStorage<4, 4, float>                           scale;
    ::ll::TypedStorage<4, 4, int>                             mBackgroundSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~NameTagRenderObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
