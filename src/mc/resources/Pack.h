#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/SubpackInfoCollection.h"

// auto generated forward declare list
// clang-format off
class I18n;
class IContentKeyProvider;
class IPackIOProvider;
class IPackManifestFactory;
class PackAccessStrategy;
class PackManifest;
class PackMetadata;
class PackReport;
class PackSourceReport;
class ResourceLocation;
struct PackIdVersion;
namespace Core { class Path; }
// clang-format on

class Pack {
public:
    // Pack inner types define
    using UpgradeLegacyDependencies = ::std::vector<::PackIdVersion>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackManifest>>                       mManifest;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackAccessStrategy>>                 mAccessStrategy;
    ::ll::TypedStorage<8, 24, ::SubpackInfoCollection>                                mSubpackInfoStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackMetadata>>                       mMetadata;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::vector<::PackIdVersion> const>> mDependenciesUpgrade;
    ::ll::TypedStorage<1, 1, uchar>                                                   mRevision;
    // NOLINTEND

public:
    // prevent constructor by default
    Pack();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Pack(
        ::I18n&                                 loc,
        ::std::unique_ptr<::PackManifest>       manifest,
        ::std::unique_ptr<::PackAccessStrategy> accessStrategy,
        ::SubpackInfoCollection                 subpacks,
        ::std::unique_ptr<::PackMetadata>       metadata
    );

    MCAPI void move(::Pack&& pack);

    MCAPI void upgradeLegacyDependencies(::std::unique_ptr<::std::vector<::PackIdVersion> const> upgrade);

    MCAPI ~Pack();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
        ::I18n&                                 loc,
        ::std::unique_ptr<::PackManifest>       manifest,
        ::std::unique_ptr<::PackAccessStrategy> accessStrategy,
        ::SubpackInfoCollection                 subpacks,
        ::std::unique_ptr<::PackMetadata>       metadata
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
