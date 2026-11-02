#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/Rect.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class PaperDollHandle; }
// clang-format on

namespace GeometryAtlas {

struct PaperDollData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryAtlas::PaperDollHandle>> mDoll;
    ::ll::TypedStorage<4, 4, float>                                                mPosX;
    ::ll::TypedStorage<4, 4, float>                                                mPosY;
    ::ll::TypedStorage<4, 4, float>                                                mScaleX;
    ::ll::TypedStorage<4, 4, float>                                                mScaleY;
    ::ll::TypedStorage<4, 16, ::GeometryAtlas::Rect>                               mProjectionBounds;
    ::ll::TypedStorage<4, 16, ::GeometryAtlas::Rect>                               mScreenBounds;
    // NOLINTEND
};

} // namespace GeometryAtlas
