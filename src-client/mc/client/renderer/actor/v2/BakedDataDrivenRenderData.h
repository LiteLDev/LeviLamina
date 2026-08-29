#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"

// auto generated forward declare list
// clang-format off
class DataDrivenModel;
// clang-format on

struct BakedDataDrivenRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::bitset<15>>                   mBits;
    ::ll::TypedStorage<4, 4, uint>                                mSetupExpressionOffset;
    ::ll::TypedStorage<4, 4, uint>                                mScaleExpressionOffset;
    ::ll::TypedStorage<4, 4, uint>                                mScaleConstantOffset;
    ::ll::TypedStorage<4, 4, uint>                                mRenderControllerConditionOffset;
    ::ll::TypedStorage<4, 4, uint>                                mRenderControllerResourceOffset;
    ::ll::TypedStorage<4, 4, uint>                                mTempComponentOffset;
    ::ll::TypedStorage<1, 1, uchar>                               mTempComponentCount;
    ::ll::TypedStorage<1, 1, ::V2TempComponentRequirements>       mTempComponentsRequirements;
    ::ll::TypedStorage<2, 2, ushort>                              mRenderControllerCount;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenModel>> mLegacyModel;
    // NOLINTEND
};
