#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct StoreDataDrivenScreenParams;
namespace Social { class IUserManager; }
// clang-format on

class IMinecraftScreenModel {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IMinecraftScreenModel() = default;

    // vIndex: 1
    virtual ::SubClientId getSubClientId() const = 0;

    // vIndex: 3
    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> getUserManager() = 0;

    // vIndex: 2
    virtual ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const getUserManager() const = 0;

    // vIndex: 4
    virtual void navigateToStoreDataDrivenScreen(::StoreDataDrivenScreenParams const&, bool) = 0;

    // vIndex: 5
    virtual bool tryNavigateToProfileScreen() = 0;

    // vIndex: 6
    virtual bool tryNavigateToSafeZoneScreenOnFirstSignin() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
