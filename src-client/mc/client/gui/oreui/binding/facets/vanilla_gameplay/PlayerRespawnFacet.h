#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
class PacketSender;
struct LocalPlayerChangedConnector;
// clang-format on

namespace OreUI {

class PlayerRespawnFacet : public ::OreUI::FacetBase<::OreUI::PlayerRespawnFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PacketSender&>                  mPacketSender;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLocalPlayerSubscription;
    ::ll::TypedStorage<8, 8, ::LocalPlayer const*>             mLocalPlayer;
    ::ll::TypedStorage<1, 1, bool>                             mIsAlive;
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerRespawnFacet& operator=(PlayerRespawnFacet const&);
    PlayerRespawnFacet(PlayerRespawnFacet const&);
    PlayerRespawnFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~PlayerRespawnFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    PlayerRespawnFacet(::LocalPlayerChangedConnector const& localPlayerChangedConnector, ::PacketSender& packetSender);

    MCAPI void _respawn();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LocalPlayerChangedConnector const& localPlayerChangedConnector, ::PacketSender& packetSender);
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
