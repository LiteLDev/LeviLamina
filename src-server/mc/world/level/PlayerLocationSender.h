#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Player;
class UserEntityIdentifierComponent;
class Vec3;
class WeakEntityRef;
struct ActorUniqueID;
// clang-format on

class PlayerLocationSender {
public:
    // PlayerLocationSender inner types declare
    // clang-format off
    struct ActorUniqueIDCompare;
    struct ActorUniqueIDPairCompare;
    struct PlayerLocationData;
    // clang-format on
    
    // PlayerLocationSender inner types define
    struct PlayerLocationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 16> mUnk59c9c9;
        ::ll::UntypedStorage<4, 4> mUnkb0af90;
        ::ll::UntypedStorage<1, 1> mUnk8c20f1;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        PlayerLocationData& operator=(PlayerLocationData const&);
        PlayerLocationData(PlayerLocationData const&);
        PlayerLocationData();
    
    };
    
    struct ActorUniqueIDCompare {
    };
    
    struct ActorUniqueIDPairCompare {
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkb41d2f;
    ::ll::UntypedStorage<8, 56> mUnkff8b2b;
    ::ll::UntypedStorage<8, 24> mUnkbabe0d;
    ::ll::UntypedStorage<4, 4> mUnkd651b8;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerLocationSender& operator=(PlayerLocationSender const&);
    PlayerLocationSender(PlayerLocationSender const&);
    PlayerLocationSender();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _checkPlayerPairAndMaybeSendPacket(::UserEntityIdentifierComponent const& userIdentifier, ::Player const& viewingPlayer, ::Player const& observedPlayer);

    MCNAPI void _forEachClientPlayerPair(::std::vector<::WeakEntityRef> const& gameplayUsers, ::std::function<void(::UserEntityIdentifierComponent const&, ::Player const&, ::Player const&)> action);

    MCNAPI bool _shouldSendPositionPacket(::Vec3 const& viewingPlayerPosition, ::DimensionType const& viewingPlayerDimension, bool viewingPlayerIsSpectator, ::std::optional<::Vec3> const& observedPlayerPosPrev, ::PlayerLocationSender::PlayerLocationData const& observedPlayerPositionNew) const;

    MCNAPI void _updatePlayerData(::Player const& player);

    MCNAPI void removePlayerData(::ActorUniqueID const& playerID);

    MCNAPI void updatePlayersData(::std::vector<::WeakEntityRef> const& gameplayUsers);

    MCNAPI ~PlayerLocationSender();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PlayerLocationSender::PlayerLocationData const& NULL_PLAYER_LOCATION_DATA();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
