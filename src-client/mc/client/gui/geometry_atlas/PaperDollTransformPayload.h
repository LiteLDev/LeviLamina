#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class PaperDollHandle; }
// clang-format on

namespace GeometryAtlas {

struct PaperDollTransformPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryAtlas::PaperDollHandle>> mDoll;
    ::ll::TypedStorage<4, 4, float>                                                mPosX;
    ::ll::TypedStorage<4, 4, float>                                                mPosY;
    ::ll::TypedStorage<4, 4, float>                                                mScaleX;
    ::ll::TypedStorage<4, 4, float>                                                mScaleY;
    // NOLINTEND
};

} // namespace GeometryAtlas
