#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/CatalogPackCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class PersonaClient;
class SkinPackModel;
namespace mce { class UUID; }
// clang-format on

class InventoryPackCollector : public ::CatalogPackCollector {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InventoryPackCollector() /*override*/ = default;

    virtual void collect(
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>,
        ::PersonaClient&,
        ::std::vector<::std::shared_ptr<::SkinPackModel>>&,
        ::std::unordered_set<::mce::UUID>&
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
