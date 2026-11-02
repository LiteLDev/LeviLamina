#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/PlayerPermission.h"
#include "mc/client/realms/RealmsWorldContextState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldContext; }
// clang-format on

namespace OreUI {

class RealmsWorldContextQueriesFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsWorldContextQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsWorldContext>> mRealmsWorldContext;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mStateChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                             mIsDirty;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldContextState>                mState;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mRealmName;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mRealmId;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mRealmOwnerId;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mFriendlyId;
    ::ll::TypedStorage<4, 4, int>                                              mActiveSlotIndex;
    ::ll::TypedStorage<4, 4, int>                                              mMaxPlayers;
    ::ll::TypedStorage<4, 4, int>                                              mDaysLeft;
    ::ll::TypedStorage<4, 4, int>                                              mOnlinePlayerCount;
    ::ll::TypedStorage<1, 1, bool>                                             mClosed;
    ::ll::TypedStorage<1, 1, bool>                                             mExpired;
    ::ll::TypedStorage<1, 1, bool>                                             mFull;
    ::ll::TypedStorage<4, 4, ::Realms::PlayerPermission>                       mDefaultPermission;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldContextQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldContextQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsWorldContextQueriesFacet(::std::shared_ptr<::Realms::RealmsWorldContext> realmsWorldContext);

    MCNAPI void _setFacetState(::Realms::RealmsWorldContextState realmsWorldContextState);

    MCNAPI int getActiveSlotIndex() const;

    MCNAPI int getDaysLeft() const;

    MCNAPI ::Realms::PlayerPermission getDefaultPermission() const;

    MCNAPI ::std::string const& getFriendlyId() const;

    MCNAPI bool getIsClosed() const;

    MCNAPI bool getIsExpired() const;

    MCNAPI bool getIsFull() const;

    MCNAPI int getMaxPlayers() const;

    MCNAPI int getOnlinePlayerCount() const;

    MCNAPI ::std::string const& getRealmId() const;

    MCNAPI ::std::string const& getRealmName() const;

    MCNAPI ::std::string const& getRealmOwnerId() const;

    MCNAPI ::Realms::RealmsWorldContextState getState() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::Realms::RealmsWorldContext> realmsWorldContext);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI
