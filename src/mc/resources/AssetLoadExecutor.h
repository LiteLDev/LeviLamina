#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/ResourceLoadType.h"

// auto generated forward declare list
// clang-format off
class IAssetLoadWorkQueue;
class ResourceLoadManager;
struct AssetLoadWorkOptions;
struct AssetWorkExecutionPolicy;
// clang-format on

namespace AssetLoadExecutor {
// functions
// NOLINTBEGIN
MCNAPI void executeImmediately(::gsl::not_null<::std::shared_ptr<::IAssetLoadWorkQueue>> work);

MCNAPI void executeWithResourceLoadManager(
    ::AssetLoadWorkOptions const&                             ops,
    ::ResourceLoadType                                        type,
    ::AssetWorkExecutionPolicy                                policy,
    ::gsl::not_null<::std::shared_ptr<::IAssetLoadWorkQueue>> work,
    ::ResourceLoadManager&                                    loader
);
// NOLINTEND

} // namespace AssetLoadExecutor
