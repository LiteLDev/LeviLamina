#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/HandleRangeResult.h"
#include "mc/client/gui/screens/models/SkinPackCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class SearchQuery;
struct SkinPackMeta;
// clang-format on

class CatalogPackCollector : public ::SkinPackCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService>> mCatalog;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SearchQuery>>                        mQuery;
    ::ll::TypedStorage<8, 24, ::std::vector<::SkinPackMeta>>                          mSkinPackMeta;
    ::ll::TypedStorage<4, 4, int>                                                     mDocumentsRemoved;
    ::ll::TypedStorage<4, 4, int>                                                     mCatalogTotal;
    ::ll::TypedStorage<4, 4, int>                                                     mSkip;
    ::ll::TypedStorage<4, 4, int>                                                     mNumPacksRejected;
    ::ll::TypedStorage<1, 1, bool>                                                    mSearchActive;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CatalogPackCollector() /*override*/ = default;

    virtual void start(bool) /*override*/;

    virtual bool exhausted() const /*override*/;

    virtual ::HandleRangeResult handleRange(int, int) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
