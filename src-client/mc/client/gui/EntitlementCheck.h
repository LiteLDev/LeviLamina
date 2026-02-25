#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/resource_pack_copy_utils/IEntitlementCheck.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
struct IEntitlementManager;
// clang-format on

class EntitlementCheck : public ::ResourcePackCopyUtils::IEntitlementCheck {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>> mEntitlementManager;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitlementCheck();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValid(::ContentIdentity const& identity) const /*override*/;

    virtual ~EntitlementCheck() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EntitlementCheck(::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValid(::ContentIdentity const& identity) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
