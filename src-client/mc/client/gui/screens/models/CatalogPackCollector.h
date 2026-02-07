#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/HandleRangeResult.h"
#include "mc/client/gui/screens/models/SkinPackCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct ContentCatalogService;
struct SearchQuery;
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
    // prevent constructor by default
    CatalogPackCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CatalogPackCollector() /*override*/;

    virtual void start(bool allowed) /*override*/;

    virtual bool exhausted() const /*override*/;

    virtual ::HandleRangeResult handleRange(int, int end) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CatalogPackCollector(::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const& catalog);

    MCAPI void _search();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const& catalog);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $start(bool allowed);

    MCAPI bool $exhausted() const;

    MCAPI ::HandleRangeResult $handleRange(int, int end);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
