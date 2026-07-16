#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/IContentCatalogPackSource.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentCatalogPackSourceService;
class IEntitlementManager;
class IPackManifestFactory;
class TaskGroup;
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
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentCatalogPackSource() /*override*/ = default;

    virtual void setEnabled(bool) /*override*/;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&) /*override*/;

    virtual ::PackType getPackType() const /*override*/;

    virtual void refreshCatalogItems(::IPackManifestFactory&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
