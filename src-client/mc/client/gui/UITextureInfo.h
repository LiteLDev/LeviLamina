#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SliceSize.h"

// auto generated forward declare list
// clang-format off
struct AsepriteFrameInformation;
namespace Json { class Value; }
// clang-format on

class UITextureInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::ui::SliceSize>                           mNineslice;
    ::ll::TypedStorage<1, 1, bool>                                       mHasNineslice;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                mBaseUVSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::AsepriteFrameInformation>> mAsepriteFrames;
    ::ll::TypedStorage<4, 4, int>                                        mTotalDurationInMilliseconds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _loadAseprite(::Json::Value const& value);

    MCAPI void _loadNineslice(::Json::Value const& value);
    // NOLINTEND
};
