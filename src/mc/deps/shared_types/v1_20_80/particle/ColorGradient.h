#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct ColorExpr; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ColorGradient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::SharedTypes::v1_20_80::ColorExpr>>>     mColorArray;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<float, ::SharedTypes::v1_20_80::ColorExpr>>> mColorMap;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
