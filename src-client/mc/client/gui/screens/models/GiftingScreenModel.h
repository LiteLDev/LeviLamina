#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/marketplace/GiftRecipientErrorState.h"

// auto generated forward declare list
// clang-format off
namespace Marketplace { class GiftingFriendsManager; }
namespace Marketplace { struct SelectedGiftRecipientData; }
// clang-format on

class GiftingScreenModel {
public:
    // GiftingScreenModel inner types define
    using RecipientSelectedCallback = ::std::function<void(::Marketplace::SelectedGiftRecipientData const&)>;

    using ExitGiftFlowCallback = ::std::function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Marketplace::GiftingFriendsManager>> mGiftingFriendsManager;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setGiftRecipientError(::Marketplace::GiftRecipientErrorState errorState, ::std::string message);
    // NOLINTEND
};
