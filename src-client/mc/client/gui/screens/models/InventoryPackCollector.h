#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/CatalogPackCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class IEntitlementManager;
class PersonaClient;
class SkinPackModel;
namespace mce { class UUID; }
// clang-format on

class InventoryPackCollector : public ::CatalogPackCollector {
public:
    // prevent constructor by default
    InventoryPackCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InventoryPackCollector() /*override*/ = default;

    virtual void collect(
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entMgr,
        ::PersonaClient&                                     skinRepo,
        ::std::vector<::std::shared_ptr<::SkinPackModel>>&   skinPacks,
        ::std::unordered_set<::mce::UUID>&                   handledPackSet
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit InventoryPackCollector(::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const& catalog);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const& catalog);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $collect(
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entMgr,
        ::PersonaClient&                                     skinRepo,
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
