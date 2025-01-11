#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class PackAccessStrategy;
class PackManifest;
class PackMetadata;
class PackReport;
class PackSourceReport;
class ResourceLocation;
class SubpackInfoCollection;
namespace Core { class Path; }
// clang-format on

class Pack : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackManifest>>                  mManifest;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackAccessStrategy>>            mAccessStrategy;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SubpackInfoCollection>>         mSubpackInfoStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackMetadata>>                  mMetadata;
    ::ll::TypedStorage<8, 16, ::std::map<void*, ::std::function<void(::Pack&)>>> mPackUpdatedCallbacks;
    ::ll::TypedStorage<8, 16, ::std::map<void*, ::std::function<void(::Pack&)>>> mPackDeletedCallbacks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Pack() /*override*/;
    // NOLINTEND

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

    MCAPI ::PackAccessStrategy const* getAccessStrategy() const;

    MCFOLD ::PackAccessStrategy* getAccessStrategy();

    MCAPI ::PackManifest const& getManifest() const;

    MCFOLD ::PackManifest& getManifest();

    MCAPI ::Bedrock::NonOwnerPointer<::PackManifest> getManifestPtr();

    MCFOLD ::SubpackInfoCollection* getSubpackInfoStack();

    MCAPI void move(::Pack&& pack);

    MCAPI void notifyDeleted();

    MCAPI void notifyUpdated();

    MCAPI void registerPackDeletedCallback(void* ptr, ::std::function<void(::Pack&)> callback);

    MCAPI void registerPackUpdatedCallback(void* ptr, ::std::function<void(::Pack&)> callback);

    MCAPI void unregisterPackDeletedCallback(void* ptr);

    MCAPI void unregisterPackUpdatedCallback(void* ptr);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::Pack> createPack(
        ::ResourceLocation const&                                         fileLocation,
        ::PackType                                                        type,
        ::PackOrigin                                                      origin,
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::PackSourceReport*                                               report,
        ::Core::Path const&                                               zipSubDir
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

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
