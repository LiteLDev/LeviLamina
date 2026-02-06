#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentTierManager;
class ILevelListCache;
class IResourcePackRepository;
class PackManifestFactory;
class ResourcePackManager;
class WorldTemplateManager;
struct ClientPackSourceFactory;
struct ContentCatalogService;
struct IEntitlementManager;
struct StoreCatalogRepository;
namespace Core { class FilePathManager; }
// clang-format on

struct ContentManagerFactoryArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                                mLevelListCache;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const>      mWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&>                                        mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                            mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&>                                            mPackManifestFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>             mEntitlementManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const> mContentTierManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> const>    mStoreCatalog;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const>     mContentCatalogService;
    ::ll::TypedStorage<8, 8, ::ClientPackSourceFactory&>                                        mPackSourceFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const>     mFilePathManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentManagerFactoryArgs& operator=(ContentManagerFactoryArgs const&);
    ContentManagerFactoryArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContentManagerFactoryArgs(::ContentManagerFactoryArgs const&);

    MCAPI ~ContentManagerFactoryArgs();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContentManagerFactoryArgs const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
