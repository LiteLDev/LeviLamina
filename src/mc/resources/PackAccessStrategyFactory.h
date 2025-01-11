#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class PackAccessStrategy;
class PackReport;
class ResourceLocation;
namespace Core { class Path; }
// clang-format on

class PackAccessStrategyFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::Path _reconcileZipSubdir(::ResourceLocation const& location, ::Core::Path const& zipSubDir);

    MCAPI static ::std::unique_ptr<::PackAccessStrategy> create(
        ::ResourceLocation&                                               location,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::PackReport&                                                     report,
        bool                                                              optimizeForSpeedOverMemory,
        ::Core::Path const&                                               zipSubDir
    );

    MCAPI static ::std::unique_ptr<::PackAccessStrategy>
    createForDirectory(::ResourceLocation const& location, bool canRecurse);

    MCAPI static ::std::unique_ptr<::PackAccessStrategy> createForEncrypted(
        ::ResourceLocation const&                                         location,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        bool                                                              canRecurse
    );

    MCAPI static ::std::unique_ptr<::PackAccessStrategy> createForEncryptedZip(
        ::ResourceLocation const&                                         location,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );

    MCAPI static ::std::unique_ptr<::PackAccessStrategy>
    createForZip(::ResourceLocation const& location, bool optimizeForSpeedOverMemory, ::Core::Path const& zipSubDir);
    // NOLINTEND
};
