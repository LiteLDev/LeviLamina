#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/feature_loading/FeatureVersion.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class VersionRange; }
// clang-format on

namespace FeatureLoading {

struct VersionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk8fc99f;
    ::ll::UntypedStorage<4, 4>  mUnk291884;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionInfo& operator=(VersionInfo const&);
    VersionInfo(VersionInfo const&);
    VersionInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~VersionInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::Puv::VersionRange>
    getRangeFromVersion(::FeatureLoading::FeatureVersion const& version);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace FeatureLoading
