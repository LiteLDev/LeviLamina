#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/CatalogRequestType.h"
#include "mc/client/services/SearchCacheDuration.h"
#include "mc/client/services/ServiceClient.h"
#include "mc/deps/core/http/RequestPriority.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class EduContentCallbackObject;
class FetchImageParams;
class HttpRequestHandler;
class HydrateParams;
class ReviewSummaryParams;
class ReviewSummaryResponse;
class SearchQuery;
namespace Bedrock::Http { class Status; }
namespace Core { class Path; }
struct DurableDocument;
struct DurableSearchResults;
struct FileDataRequest;
struct OwnedDurablesPagingCache;
struct PersonaAppearance;
struct PersonaProfile;
// clang-format on

class ContentCatalogService : public ::ServiceClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb0808b;
    ::ll::UntypedStorage<8, 16> mUnkef09fe;
    ::ll::UntypedStorage<8, 16> mUnka9f584;
    ::ll::UntypedStorage<8, 24> mUnk578611;
    ::ll::UntypedStorage<8, 8>  mUnk9f4191;
    ::ll::UntypedStorage<8, 32> mUnk991292;
    ::ll::UntypedStorage<8, 32> mUnk9b7efd;
    ::ll::UntypedStorage<8, 64> mUnk4c488a;
    ::ll::UntypedStorage<8, 32> mUnk33e157;
    ::ll::UntypedStorage<8, 16> mUnk990b4e;
    ::ll::UntypedStorage<4, 4>  mUnkef4e90;
    ::ll::UntypedStorage<4, 4>  mUnk9cd61f;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentCatalogService& operator=(ContentCatalogService const&);
    ContentCatalogService(ContentCatalogService const&);
    ContentCatalogService();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ContentCatalogService() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ContentCatalogService() /*override*/;
#endif

    virtual void
    reviewSummary(::ReviewSummaryParams const& params, ::std::function<void(::ReviewSummaryResponse&)> callback);

    virtual void _submitRequest(::std::shared_ptr<::HttpRequestHandler> request) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ContentCatalogService(
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const> dateManager,
        ::Core::Path const&                                cacheLocation,
        ::SearchCacheDuration                              cacheDurationSec
    );

    MCNAPI_C void
    _handleDurableSearch(::SearchQuery const& query, ::std::function<void(::DurableSearchResults const&)> callback);

    MCNAPI_C void fetchFileData(
        ::std::string const&                                                        fileUrl,
        ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)> callback
    );

    MCNAPI_C ::std::shared_ptr<::FileDataRequest> fetchImageData(
        ::std::string const&                                                        fileUrl,
        ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)> callback
    );

    MCNAPI_C void fetchImageData(
        ::FetchImageParams const&                                                   imageParams,
        ::std::function<void(::Bedrock::Http::Status, ::Core::Path const&, uint64)> callback,
        ::Bedrock::Http::RequestPriority                                            priority
    );

    MCNAPI_C ::OwnedDurablesPagingCache& getOwnedDurablesPagingInterface();

    MCNAPI_C void hydrateItem(
        ::HydrateParams const&                                                          params,
        ::std::function<void(::Bedrock::Http::Status const&, ::DurableDocument const&)> callback
    );

    MCNAPI_C void hydrateItem(::HydrateParams const& params, ::EduContentCallbackObject callback);

    MCNAPI_C void searchCatalog(::SearchQuery const& query, ::EduContentCallbackObject callback);

    MCNAPI_C void searchCatalog(
        ::SearchQuery const&                                                      query,
        ::std::string const&                                                      platformOverride,
        ::std::shared_ptr<::PersonaProfile>                                       userProfile,
        ::std::function<void(::PersonaAppearance const&, ::persona::ProfileType)> callback,
        ::std::string const&                                                      legacySkinId
    );

    MCNAPI_C void searchCatalog(
        ::SearchQuery const&                                                      query,
        ::std::string const&                                                      platformOverride,
        ::std::shared_ptr<::PersonaProfile>                                       userProfile,
        ::PersonaAppearance&                                                      personaAppearance,
        ::persona::ProfileType                                                    profileType,
        uint                                                                      desiredResultCount,
        ::std::function<void(::PersonaAppearance const&, ::persona::ProfileType)> callback
    );

    MCNAPI_C void
    setCacheLocationForTypes(::std::vector<::CatalogRequestType> const& types, ::Core::Path const& cacheLocation);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const> dateManager,
        ::Core::Path const&                                cacheLocation,
        ::SearchCacheDuration                              cacheDurationSec
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void
    $reviewSummary(::ReviewSummaryParams const& params, ::std::function<void(::ReviewSummaryResponse&)> callback);

    MCNAPI void $_submitRequest(::std::shared_ptr<::HttpRequestHandler> request);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
