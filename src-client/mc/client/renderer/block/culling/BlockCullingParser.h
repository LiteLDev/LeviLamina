#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockCullingData;
namespace PuvLoadData { struct LoadResultWithTiming; }
namespace SharedTypes::v1_21_80 { struct BlockCulling; }
// clang-format on

struct BlockCullingParser {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::BlockCullingData> prepareCullingData(
        ::SharedTypes::v1_21_80::BlockCulling const& cerealParsedCullingData,
        bool                                         isBaseGamePack,
        ::PuvLoadData::LoadResultWithTiming          loadTime
    );
    // NOLINTEND
};
