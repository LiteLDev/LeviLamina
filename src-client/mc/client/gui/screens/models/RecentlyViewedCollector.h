#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/CatalogPackCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class SkinPackModel;
struct ContentCatalogService;
struct IEntitlementManager;
struct SkinRepositoryClientInterface;
namespace mce { class UUID; }
// clang-format on

class RecentlyViewedCollector : public ::CatalogPackCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mOrderedRecentSkinPackIds;
    // NOLINTEND

public:
    // prevent constructor by default
    RecentlyViewedCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecentlyViewedCollector() /*override*/ = default;

    virtual void collect(
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entMgr,
        ::SkinRepositoryClientInterface&                     skinRepo,
        ::std::vector<::std::shared_ptr<::SkinPackModel>>&   skinPacks,
        ::std::unordered_set<::mce::UUID>&                   handledPackSet
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RecentlyViewedCollector(
        ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const& catalog,
        ::SkinRepositoryClientInterface&                              skinRepo
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const& catalog,
        ::SkinRepositoryClientInterface&                              skinRepo
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $collect(
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entMgr,
        ::SkinRepositoryClientInterface&                     skinRepo,
        ::std::vector<::std::shared_ptr<::SkinPackModel>>&   skinPacks,
        ::std::unordered_set<::mce::UUID>&                   handledPackSet
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
