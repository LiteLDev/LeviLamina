#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IFileAccess;
class IPackIOProvider;
class PackAccessStrategy;
class PackReport;
class ResourceLocation;
namespace Core { class Path; }
// clang-format on

class PackAccessStrategyFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::PackAccessStrategy> create(
        ::ResourceLocation&                                     location,
        ::Bedrock::NonOwnerPointer<::IContentKeyProvider const> keyProvider,
        ::PackReport&                                           report,
        bool                                                    optimizeForSpeedOverMemory,
        ::Core::Path const&                                     zipSubDir,
        ::IPackIOProvider const&                                io
    );

    MCNAPI static ::std::unique_ptr<::PackAccessStrategy>
    createForDirectory(::ResourceLocation const& location, bool canRecurse, ::IPackIOProvider const& io);

    MCNAPI static ::std::unique_ptr<::PackAccessStrategy> createForEncryptedZip(
        ::ResourceLocation const&                                         location,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::IFileAccess&                                                    fileAccess
    );

    MCNAPI static ::std::unique_ptr<::PackAccessStrategy>
    createForZip(::ResourceLocation const& location, bool zipSubDir, ::Core::Path const& optimizeForSpeedOverMemory);

    MCNAPI static ::std::unique_ptr<::PackAccessStrategy> createForZip(
        ::ResourceLocation const& location,
        bool                      optimizeForSpeedOverMemory,
        ::Core::Path const&       zipSubDir,
        ::IFileAccess&            fileAccess
    );
    // NOLINTEND
};
