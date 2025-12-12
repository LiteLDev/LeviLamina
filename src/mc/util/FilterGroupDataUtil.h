#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FilterGroup;
class FilterTest;
namespace SharedTypes::v1_21_20 { struct FilterGroupData; }
namespace SharedTypes::v1_21_20 { struct FilterTestData; }
// clang-format on

namespace FilterGroupDataUtil {
// functions
// NOLINTBEGIN
MCNAPI ::SharedTypes::v1_21_20::FilterTestData
convertLegacyTestToFilterTestData(::std::shared_ptr<::FilterTest> const& filterTest);

MCNAPI void convertToFilterGroupData(
    ::SharedTypes::v1_21_20::FilterGroupData& filterGroupData,
    ::FilterGroup const&                      actorFilterGroup
);
// NOLINTEND

} // namespace FilterGroupDataUtil
