#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/types/world/actor/ai/util/BossBarColor.h"
#include "mc/network/packet/types/world/actor/ai/util/BossBarOverlay.h"
#include "mc/network/packet/types/world/actor/ai/util/BossEventUpdateType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class BossComponent {
public:
    // prevent constructor by default
    BossComponent& operator=(BossComponent const&);
    BossComponent(BossComponent const&);

public:
    // NOLINTBEGIN
    MCAPI BossComponent();

    MCAPI BossComponent(class BossComponent&&);

    MCAPI void addPlayerToParty(class mce::UUID id, int damage);

    MCAPI void broadcastBossEvent(class Actor& owner, ::BossEventUpdateType type);

    MCAPI ::BossBarColor getColor() const;

    MCAPI bool getCreateWorldFog() const;

    MCAPI float getHealthPercent() const;

    MCAPI int getLastHealth() const;

    MCAPI std::chrono::steady_clock::time_point getLastPlayerUpdate() const;

    MCAPI std::string getName() const;

    MCAPI ::BossBarOverlay getOverlay() const;

    MCAPI std::unordered_map<class mce::UUID, int> const& getPlayerParty() const;

    MCAPI bool getShouldDarkenSky() const;

    MCAPI void handleRegisterPlayers(class Actor& owner);

    MCAPI class BossComponent& operator=(class BossComponent&&);

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void registerPlayer(class Actor& owner, class Player* player);

    MCAPI void resendBossEventData(class Actor& owner, class Player* player);

    MCAPI void sendDeathTelemetry(class Actor& owner);

    MCAPI void setColor(class Actor& owner, ::BossBarColor color);

    MCAPI void setHealthBarVisible(class Actor& owner, bool visible);

    MCAPI void setHealthPercent(class Actor& owner, float percent);

    MCAPI void setLastHealth(int lastHealth);

    MCAPI void setLastPlayerUpdate(std::chrono::steady_clock::time_point lastUpdate);

    MCAPI void setName(class Actor& owner, std::string const& name);

    MCAPI bool tryRemoveBoss(class Actor& owner, class Player& player);

    MCAPI void unRegisterPlayer(class Actor& owner, class Player* player);

    MCAPI ~BossComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _sendBossEvent(class Actor& owner, ::BossEventUpdateType type, class Player* player);

    // NOLINTEND
};
