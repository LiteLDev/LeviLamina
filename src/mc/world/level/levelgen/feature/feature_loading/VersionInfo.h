#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/VersionRange.h"
#include "mc/world/level/levelgen/feature/feature_loading/FeatureVersion.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace FeatureLoading {

struct VersionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::Puv::VersionRange>             mVersionRange;
    ::ll::TypedStorage<4, 4, ::FeatureLoading::FeatureVersion> mFeatureVersion;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SemVersion getMinFormatVersion(::FeatureLoading::FeatureVersion const& version);

    MCAPI static ::std::optional<::Puv::VersionRange>
    getRangeFromVersion(::FeatureLoading::FeatureVersion const& version);
    // NOLINTEND
};

} // namespace FeatureLoading
