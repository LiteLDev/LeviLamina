#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class RepositoryPacks;
struct PackIdVersion;
namespace mce { class UUID; }
// clang-format on

namespace PackDependencyManager {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<::PackIdVersion> getMissingDependencyIdentities(
    ::brstd::function_ref<bool(::PackIdVersion const&) const, bool(::PackIdVersion const&)> hasPack,
    ::std::vector<::PackIdVersion> const&                                                   dependencyIdentities
);

MCNAPI_C bool hasMissingDependencies(::RepositoryPacks const& source, ::PackManifest const& manifest);

MCNAPI_C bool isNativeModule(::mce::UUID const& uuid);
// NOLINTEND

} // namespace PackDependencyManager
