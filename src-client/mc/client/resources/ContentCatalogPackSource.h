#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/IContentCatalogPackSource.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IPackManifestFactory;
class TaskGroup;
struct ContentCatalogPackSourceOptions;
struct IContentCatalogPackSourceService;
struct IEntitlementManager;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
namespace ContentManagerUtils { class ISourcesAsyncReloader; }
// clang-format on

class ContentCatalogPackSource : public ::IContentCatalogPackSource,
                                 public ::std::enable_shared_from_this<::ContentCatalogPackSource> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>          mEntitlementManager;
    ::ll::TypedStorage<1, 1, bool>                                                           mEnabled;
    ::ll::TypedStorage<1, 1, ::PackType const>                                               mPackType;
    ::ll::TypedStorage<1, 1, bool const>                                                     mHighPriorityIconRequests;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::SharedAsync<void>>                       mActiveFetch;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                                 mTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentCatalogPackSourceService>>          mCatalogService;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContentManagerUtils::ISourcesAsyncReloader>> mWeakSourcesAsyncReloader;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentCatalogPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentCatalogPackSource() /*override*/;

    virtual void setEnabled(bool enabled) /*override*/;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&) /*override*/;

    virtual ::PackType getPackType() const /*override*/;

    virtual void refreshCatalogItems(::IPackManifestFactory&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ContentCatalogPackSource(::ContentCatalogPackSourceOptions options);

    MCAPI ::Bedrock::Threading::Async<void> _collectAllCatalogItems();

    MCAPI ::Bedrock::Threading::Async<void> _load();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContentCatalogPackSourceOptions options);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $setEnabled(bool enabled);

    MCAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);

    MCFOLD ::PackType $getPackType() const;

    MCAPI void $refreshCatalogItems(::IPackManifestFactory&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
