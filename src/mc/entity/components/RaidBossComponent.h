#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/util/BossBarColor.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Player;
class Raid;
class Village;
struct ActorUniqueID;
// clang-format on

class RaidBossComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk54a715;
    ::ll::UntypedStorage<8, 8>  mUnkb278e6;
    ::ll::UntypedStorage<8, 32> mUnke6f83f;
    ::ll::UntypedStorage<8, 32> mUnk6c8ed2;
    ::ll::UntypedStorage<4, 4>  mUnk76ce15;
    ::ll::UntypedStorage<1, 1>  mUnkace95d;
    ::ll::UntypedStorage<1, 1>  mUnk6b9171;
    ::ll::UntypedStorage<1, 1>  mUnk367d90;
    ::ll::UntypedStorage<4, 4>  mUnkfa9046;
    ::ll::UntypedStorage<4, 24> mUnkc4a5c3;
    ::ll::UntypedStorage<8, 8>  mUnk4f7ecc;
    // NOLINTEND

public:
    // prevent constructor by default
    RaidBossComponent& operator=(RaidBossComponent const&);
    RaidBossComponent(RaidBossComponent const&);
    RaidBossComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _broadcastBossEvent(::BossEventUpdateType type, ::Actor& owner);

    MCAPI void _sendBossEvent(::BossEventUpdateType type, ::Player& player);

    MCAPI ::BossBarColor getColor();

    MCAPI float getHealthPercent();

    MCAPI ::std::string getName();

    MCAPI ::ActorUniqueID getOwnerUniqueID();

    MCAPI bool getRaidInProgress();

    MCAPI ::std::shared_ptr<::Village> getVillage();

    MCAPI bool getWaveStarted();

    MCAPI void initialize(::ActorUniqueID ownerID);

    MCAPI bool isWithinRange(::Mob const& player);

    MCAPI ::RaidBossComponent& operator=(::RaidBossComponent&&);

    MCAPI void registerPlayer(::Player* player);

    MCAPI void removeBossBar(::Actor& owner);

    MCAPI void resendRaidBossEventData(::Player& player);

    MCAPI void sendRegistryMessages(::Actor& owner);

    MCAPI void setVillage(::std::weak_ptr<::Village> village);

    MCAPI void setWaveStarted(bool val);

    MCAPI void setupBossBarInfo(::Actor& owner, ::Village* village);

    MCAPI bool tryRemoveBoss(::Actor& owner, ::Player& player);

    MCAPI void unRegisterPlayer(::Player* player);

    MCAPI void updateBossBarStats(::Actor& owner, ::Raid const& raid);

    MCAPI void updateHealthBarVisible(bool visible, ::Actor& owner);

    MCAPI ~RaidBossComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
