#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackIOProvider;
class IPackManifestFactory;
class PackAccessStrategy;
class PackManifest;
class PackMetadata;
class PackReport;
class PackSourceReport;
class ResourceLocation;
class SubpackInfoCollection;
namespace Core { class Path; }
namespace PackCommand { struct UpgradeLegacyDependencies; }
// clang-format on

class Pack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackManifest>>                                 mManifest;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackAccessStrategy>>                           mAccessStrategy;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SubpackInfoCollection>>                        mSubpackInfoStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackMetadata>>                                 mMetadata;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackCommand::UpgradeLegacyDependencies const>> mDependenciesUpgrade;
    // NOLINTEND

public:
    // prevent constructor by default
    Pack();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Pack(
        ::std::unique_ptr<::PackManifest>          manifest,
        ::std::unique_ptr<::PackAccessStrategy>    accessStrategy,
        ::std::unique_ptr<::SubpackInfoCollection> subpacks,
        ::std::unique_ptr<::PackMetadata>          metadata
    );

    MCAPI void _loadLocalizationFiles();

    MCAPI void move(::Pack&& pack);

    MCAPI void upgradeLegacyDependencies(::std::unique_ptr<::PackCommand::UpgradeLegacyDependencies const> upgrade);

    MCAPI ~Pack();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::std::unique_ptr<::Pack> createPack(
        ::ResourceLocation const&                               fileLocation,
        ::PackType                                              type,
        ::PackOrigin                                            origin,
        ::IPackManifestFactory&                                 manifestFactory,
        ::Bedrock::NonOwnerPointer<::IContentKeyProvider const> keyProvider,
        ::PackSourceReport*                                     report,
        ::Core::Path const&                                     zipSubDir
    );

    MCAPI static ::std::unique_ptr<::Pack> createPack(
        ::IPackIOProvider const&                                io,
        ::ResourceLocation const&                               fileLocation,
        ::PackType                                              type,
        ::PackOrigin                                            origin,
        ::IPackManifestFactory&                                 manifestFactory,
        ::Bedrock::NonOwnerPointer<::IContentKeyProvider const> keyProvider,
        ::PackSourceReport*                                     report,
        ::Core::Path const&                                     zipSubDir
    );

    MCAPI static ::std::unique_ptr<::PackMetadata> createPackMetadata(
        ::PackType                  type,
        ::PackManifest&             manifest,
        ::PackAccessStrategy const& accessStrategy,
        ::PackReport&               report
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::std::string> const& EDUCATION_METADATA_FILE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::PackManifest>          manifest,
        ::std::unique_ptr<::PackAccessStrategy>    accessStrategy,
        ::std::unique_ptr<::SubpackInfoCollection> subpacks,
        ::std::unique_ptr<::PackMetadata>          metadata
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
