#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/VerticalAnchorValue.h"

namespace SharedTypes::v1_21_20 {

struct UniformHeight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        2,
        4,
        ::std::variant<
            ::SharedTypes::v1_21_20::VerticalAnchorValue<0>,
            ::SharedTypes::v1_21_20::VerticalAnchorValue<1>,
            ::SharedTypes::v1_21_20::VerticalAnchorValue<2>,
            ::SharedTypes::v1_21_20::VerticalAnchorValue<3>>>
        mMin;
    ::ll::TypedStorage<
        2,
        4,
        ::std::variant<
            ::SharedTypes::v1_21_20::VerticalAnchorValue<0>,
            ::SharedTypes::v1_21_20::VerticalAnchorValue<1>,
            ::SharedTypes::v1_21_20::VerticalAnchorValue<2>,
            ::SharedTypes::v1_21_20::VerticalAnchorValue<3>>>
        mMax;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
