#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PointLighting::Detail { struct ColorGroup; }
// clang-format on

namespace PointLighting::Detail {

class ColorGroupTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PointLighting::Detail::ColorGroup>> mGroups;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, short>>                   mColorToGroup;
    // NOLINTEND
};

} // namespace PointLighting::Detail
