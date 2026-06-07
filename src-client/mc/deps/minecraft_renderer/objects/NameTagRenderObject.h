#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Quaternion.h"

// auto generated forward declare list
// clang-format off
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on

struct NameTagRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                       mNameTag;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                            mTagMat;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                            mTextMatOverride;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                        mTagColor;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                        mTextColor;
    ::ll::TypedStorage<4, 12, ::glm::vec3>                                         mPos;
    ::ll::TypedStorage<4, 4, float>                                                mScale;
    ::ll::TypedStorage<8, 24, ::std::variant<::std::shared_ptr<::mce::Mesh>, int>> mCustomNameplaceMeshOrBackgroundSize;
    ::ll::TypedStorage<4, 20, ::std::optional<::Quaternion>>                       mCustomRotation;
    // NOLINTEND

public:
    // prevent constructor by default
    NameTagRenderObject& operator=(NameTagRenderObject const&);
    NameTagRenderObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NameTagRenderObject(::NameTagRenderObject const&);

    MCAPI ::NameTagRenderObject& operator=(::NameTagRenderObject&&);

    MCAPI ~NameTagRenderObject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NameTagRenderObject const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
