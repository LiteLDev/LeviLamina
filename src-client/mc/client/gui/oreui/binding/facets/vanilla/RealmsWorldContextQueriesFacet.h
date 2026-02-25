#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/realms/RealmsWorldContextState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmsWorldContext; }
// clang-format on

namespace OreUI {

class RealmsWorldContextQueriesFacet : public ::OreUI::FacetBase<::OreUI::RealmsWorldContextQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsWorldContext>> mRealmsWorldContext;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mStateChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                             mIsDirty;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldContextState>                mState;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mRealmName;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mRealmId;
    ::ll::TypedStorage<4, 4, int>                                              mActiveSlotIndex;
    ::ll::TypedStorage<4, 4, int>                                              mMaxPlayers;
    ::ll::TypedStorage<1, 1, bool>                                             mClosed;
    ::ll::TypedStorage<1, 1, bool>                                             mExpired;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldContextQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldContextQueriesFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsWorldContextQueriesFacet(::std::shared_ptr<::Realms::RealmsWorldContext> realmsWorldContext);

    MCAPI void _setFacetState(::Realms::RealmsWorldContextState realmsWorldContextState);

    MCFOLD int getActiveSlotIndex() const;

    MCFOLD bool getIsClosed() const;

    MCFOLD bool getIsExpired() const;

    MCFOLD int getMaxPlayers() const;

    MCFOLD ::std::string const& getRealmId() const;

    MCFOLD ::std::string const& getRealmName() const;

    MCFOLD ::Realms::RealmsWorldContextState getState() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsWorldContext> realmsWorldContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
