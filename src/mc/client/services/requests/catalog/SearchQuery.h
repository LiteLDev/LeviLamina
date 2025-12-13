#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/catalog/SortBy.h"
#include "mc/client/services/requests/catalog/SortDirection.h"

// auto generated forward declare list
// clang-format off
struct QueryDocument;
namespace catalog { class PositiveRange; }
// clang-format on

class SearchQuery {
public:
    // SearchQuery inner types define
    enum class TagType : schar {
        And  = 0,
        Or   = 1,
        Not  = 2,
        Sale = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf3342d;
    ::ll::UntypedStorage<8, 24> mUnkef8060;
    ::ll::UntypedStorage<8, 32> mUnk856fe1;
    ::ll::UntypedStorage<8, 32> mUnkc9d495;
    ::ll::UntypedStorage<8, 32> mUnk875fb4;
    ::ll::UntypedStorage<8, 32> mUnka81e35;
    ::ll::UntypedStorage<8, 32> mUnk346f11;
    ::ll::UntypedStorage<8, 24> mUnk2c9f8e;
    ::ll::UntypedStorage<8, 24> mUnk762ca6;
    ::ll::UntypedStorage<8, 24> mUnk35d297;
    ::ll::UntypedStorage<8, 24> mUnk39661e;
    ::ll::UntypedStorage<8, 24> mUnk9ec8c4;
    ::ll::UntypedStorage<8, 24> mUnk6b1095;
    ::ll::UntypedStorage<8, 24> mUnk80876c;
    ::ll::UntypedStorage<8, 24> mUnk64bd6f;
    ::ll::UntypedStorage<8, 24> mUnk4705db;
    ::ll::UntypedStorage<8, 24> mUnkaca05e;
    ::ll::UntypedStorage<8, 24> mUnkf777c3;
    ::ll::UntypedStorage<8, 24> mUnk62afa1;
    ::ll::UntypedStorage<8, 24> mUnkc14acd;
    ::ll::UntypedStorage<8, 24> mUnkb9f971;
    ::ll::UntypedStorage<4, 8>  mUnkbd2672;
    ::ll::UntypedStorage<4, 8>  mUnkfcf2e3;
    ::ll::UntypedStorage<4, 4>  mUnk61d9d8;
    ::ll::UntypedStorage<4, 4>  mUnk609839;
    ::ll::UntypedStorage<1, 1>  mUnkc1236e;
    ::ll::UntypedStorage<8, 32> mUnked7b0d;
    ::ll::UntypedStorage<1, 1>  mUnk11365b;
    ::ll::UntypedStorage<1, 1>  mUnk1ea95a;
    ::ll::UntypedStorage<1, 1>  mUnk452638;
    ::ll::UntypedStorage<1, 1>  mUnk43c6db;
    ::ll::UntypedStorage<1, 1>  mUnk8a03d7;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C SearchQuery();

    MCNAPI_C explicit SearchQuery(::QueryDocument const& queryDoc);

    MCNAPI_C SearchQuery(::SearchQuery const& searchQuery);

    MCNAPI_C
    SearchQuery(::std::string const& contentType, ::catalog::SortBy sortBy, ::catalog::SortDirection sortDirection);

    MCNAPI_C SearchQuery(
        ::std::vector<::std::string> const& contentTypes,
        ::catalog::SortBy                   sortBy,
        ::catalog::SortDirection            sortDirection
    );

    MCNAPI_C void _appendClientVersionFilter(::std::string& tagFilter) const;

    MCNAPI_C void _appendTagFilterArrays(
        ::std::string&                                            tagFilter,
        ::SearchQuery::TagType                                    type,
        ::std::vector<::std::vector<::std::string> const*> const& tagArrays
    ) const;

    MCNAPI_C void _appendTagFilters(
        ::std::string&                      tagFilter,
        ::SearchQuery::TagType              type,
        ::std::vector<::std::string> const& tagsToAppend
    ) const;

    MCNAPI_C ::std::string _buildPostBody(::std::string const& acceptLang) const;

    MCNAPI_C ::std::string _generateTagsString() const;

    MCNAPI_C void addCreatorId(::std::string const& id);

    MCNAPI_C void addPriceRangeFilter(::catalog::PositiveRange const& priceRange);

    MCNAPI_C void clearAllTags();

    MCNAPI_C uint generateSearchAndFilterIdentifier() const;

    MCNAPI_C ::std::string getSortByAndSortDirectionStr() const;

    MCNAPI_C ::SearchQuery& operator=(::SearchQuery const&);

    MCNAPI_C ~SearchQuery();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static int const& MAX_SEARCH_RESULTS_PER_REQUEST();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::QueryDocument const& queryDoc);

    MCNAPI_C void* $ctor(::SearchQuery const& searchQuery);

    MCNAPI_C void*
    $ctor(::std::string const& contentType, ::catalog::SortBy sortBy, ::catalog::SortDirection sortDirection);

    MCNAPI_C void* $ctor(
        ::std::vector<::std::string> const& contentTypes,
        ::catalog::SortBy                   sortBy,
        ::catalog::SortDirection            sortDirection
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
