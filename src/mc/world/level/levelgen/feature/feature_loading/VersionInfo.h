#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/VersionRange.h"
#include "mc/world/level/levelgen/feature/feature_loading/FeatureVersion.h"

namespace FeatureLoading {

struct VersionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::Puv::VersionRange>             mVersionRange;
    ::ll::TypedStorage<4, 4, ::FeatureLoading::FeatureVersion> mFeatureVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~VersionInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::Puv::VersionRange>
    getRangeFromVersion(::FeatureLoading::FeatureVersion const& version);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace FeatureLoading
