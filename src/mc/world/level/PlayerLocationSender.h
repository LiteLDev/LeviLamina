#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class PacketSender;
class Player;
class UserEntityIdentifierComponent;
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
        ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mPosition;
        ::ll::TypedStorage<4, 4, ::DimensionType>          mDimension;
        ::ll::TypedStorage<1, 1, bool>                     mIsSpectator;
        // NOLINTEND
    };

    using OptionalPosition = ::std::optional<::Vec3>;

    struct ActorUniqueIDCompare {};

    struct ActorUniqueIDPairCompare {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        56,
        ::brstd::flat_map<
            ::ActorUniqueID,
            ::PlayerLocationSender::PlayerLocationData,
            ::PlayerLocationSender::ActorUniqueIDCompare,
            ::std::vector<::ActorUniqueID>,
            ::std::vector<::PlayerLocationSender::PlayerLocationData>>>
        mCurrentPlayerLocationData;
    ::ll::TypedStorage<
        8,
        56,
        ::brstd::flat_map<
            ::std::pair<::ActorUniqueID, ::ActorUniqueID>,
            ::std::optional<::Vec3>,
            ::PlayerLocationSender::ActorUniqueIDPairCompare,
            ::std::vector<::std::pair<::ActorUniqueID, ::ActorUniqueID>>,
            ::std::vector<::std::optional<::Vec3>>>>
                                                                          mSentPlayerData;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>> mPacketSender;
    ::ll::TypedStorage<4, 4, float>                                       mSimulationDistance;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _checkPlayerPairAndMaybeSendPacket(
        ::UserEntityIdentifierComponent const& userIdentifier,
        ::Player const&                        viewingPlayer,
        ::Player const&                        observedPlayer
    );

    MCAPI void _forEachClientPlayerPair(
        ::std::vector<::WeakEntityRef> const&                                                           gameplayUsers,
        ::std::function<void(::UserEntityIdentifierComponent const&, ::Player const&, ::Player const&)> action
    );

    MCAPI bool _shouldSendPositionPacket(
        ::Vec3 const&                                     viewingPlayerPosition,
        ::DimensionType const&                            viewingPlayerDimension,
        bool                                              viewingPlayerIsSpectator,
        ::std::optional<::Vec3> const&                    observedPlayerPosPrev,
        ::PlayerLocationSender::PlayerLocationData const& observedPlayerPositionNew
    ) const;

    MCAPI void _updatePlayerData(::Player const& player);

    MCAPI void removePlayerData(::ActorUniqueID const& playerID);

    MCAPI void updatePlayersData(::std::vector<::WeakEntityRef> const& gameplayUsers);

    MCAPI ~PlayerLocationSender();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::PlayerLocationSender::PlayerLocationData const& NULL_PLAYER_LOCATION_DATA();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
