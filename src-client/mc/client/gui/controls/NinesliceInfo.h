#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ImageInfo.h"
#include "mc/deps/core/container/small_vector.h"

struct NinesliceInfo {
public:
    // NinesliceInfo inner types define
    using MultiSlice = ::Bedrock::small_vector<::ImageInfo, 1>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 32, ::ImageInfo>                             mTopLeft;
    ::ll::TypedStorage<4, 32, ::ImageInfo>                             mTopRight;
    ::ll::TypedStorage<4, 32, ::ImageInfo>                             mBottomLeft;
    ::ll::TypedStorage<4, 32, ::ImageInfo>                             mBottomRight;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                              mUVScale;
    ::ll::TypedStorage<8, 48, ::Bedrock::small_vector<::ImageInfo, 1>> mLeft;
    ::ll::TypedStorage<8, 48, ::Bedrock::small_vector<::ImageInfo, 1>> mTop;
    ::ll::TypedStorage<8, 48, ::Bedrock::small_vector<::ImageInfo, 1>> mRight;
    ::ll::TypedStorage<8, 48, ::Bedrock::small_vector<::ImageInfo, 1>> mBottom;
    ::ll::TypedStorage<8, 48, ::Bedrock::small_vector<::ImageInfo, 1>> mMiddle;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~NinesliceInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
