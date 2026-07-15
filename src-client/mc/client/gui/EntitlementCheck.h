#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/resource_pack_copy_utils/IEntitlementCheck.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IEntitlementManager;
// clang-format on

class EntitlementCheck : public ::ResourcePackCopyUtils::IEntitlementCheck {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>> mEntitlementManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValid(::ContentIdentity const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
