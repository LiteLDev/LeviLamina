#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IUserManager; }
struct StoreDataDrivenScreenParams;
// clang-format on

class IMinecraftScreenModel {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMinecraftScreenModel() = default;

    virtual ::SubClientId getSubClientId() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> getUserManager() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const getUserManager() const = 0;

    virtual void navigateToStoreDataDrivenScreen(::StoreDataDrivenScreenParams const&, bool) = 0;

    virtual bool tryNavigateToProfileScreen() = 0;

    virtual bool tryNavigateToSafeZoneScreenOnFirstSignin() = 0;

    virtual bool leaveScreen(::std::string, bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
