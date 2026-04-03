#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/realms/PlayerListState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsPlayerList; }
namespace Realms { struct PlayerInfo; }
// clang-format on

namespace OreUI {

class RealmsPlayerListQueriesFacet : public ::OreUI::FacetBase<::OreUI::RealmsPlayerListQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::PlayerInfo>> mPlayers;
    ::ll::TypedStorage<4, 4, ::Realms::PlayerListState>            mState;
    ::ll::TypedStorage<1, 1, bool>                                 mDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mRealmPlayerListSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPlayerListQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPlayerListQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsPlayerListQueriesFacet(::std::shared_ptr<::Realms::RealmsPlayerList> realmsPlayerList);

    MCAPI void _updateState(::Realms::PlayerListState state, ::std::vector<::Realms::PlayerInfo> const& players);

    MCFOLD ::std::vector<::Realms::PlayerInfo> const& getPlayers() const;

    MCFOLD ::Realms::PlayerListState getState() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsPlayerList> realmsPlayerList);
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
