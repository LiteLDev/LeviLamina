#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IItemHandle; }
// clang-format on

namespace GeometryAtlas {

struct ItemData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryAtlas::IItemHandle>> mItem;
    ::ll::TypedStorage<4, 4, float>                                            mPosX;
    ::ll::TypedStorage<4, 4, float>                                            mPosY;
    ::ll::TypedStorage<4, 4, float>                                            mLightMultiplier;
    ::ll::TypedStorage<4, 4, float>                                            mAlphaMultiplier;
    ::ll::TypedStorage<4, 4, float>                                            mScale;
    ::ll::TypedStorage<4, 4, int>                                              mFrame;
    ::ll::TypedStorage<1, 1, bool>                                             mAllowAnimation;
    // NOLINTEND
};

} // namespace GeometryAtlas
