#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class PlayerListManager {
public:
    // prevent constructor by default
    PlayerListManager& operator=(PlayerListManager const&);
    PlayerListManager(PlayerListManager const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PlayerListManager@@QEAA@XZ
    MCAPI PlayerListManager();

    // symbol:
    // ?getPlayerList@PlayerListManager@@QEAAAEAV?$unordered_map@VUUID@mce@@VPlayerListEntry@@U?$hash@VUUID@mce@@@std@@U?$equal_to@VUUID@mce@@@5@V?$allocator@U?$pair@$$CBVUUID@mce@@VPlayerListEntry@@@std@@@5@@std@@XZ
    MCAPI std::unordered_map<class mce::UUID, class PlayerListEntry>& getPlayerList();

    // symbol:
    // ?getPlayerList@PlayerListManager@@QEBAAEBV?$unordered_map@VUUID@mce@@VPlayerListEntry@@U?$hash@VUUID@mce@@@std@@U?$equal_to@VUUID@mce@@@5@V?$allocator@U?$pair@$$CBVUUID@mce@@VPlayerListEntry@@@std@@@5@@std@@XZ
    MCAPI std::unordered_map<class mce::UUID, class PlayerListEntry> const& getPlayerList() const;

    // symbol:
    // ?getPlayerPlatformOnlineId@PlayerListManager@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUUID@mce@@@Z
    MCAPI std::string const& getPlayerPlatformOnlineId(class mce::UUID const&) const;

    // symbol:
    // ?getPlayerXUID@PlayerListManager@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUUID@mce@@@Z
    MCAPI std::string const& getPlayerXUID(class mce::UUID const&) const;

    // symbol: ?initializeWithGameplayUserManagerOnServer@PlayerListManager@@QEAAXAEAVGameplayUserManager@@@Z
    MCAPI void initializeWithGameplayUserManagerOnServer(class GameplayUserManager&);

    // symbol: ?setPacketSender@PlayerListManager@@QEAAXAEAVPacketSender@@@Z
    MCAPI void setPacketSender(class PacketSender& packetSender);

    // symbol: ??1PlayerListManager@@QEAA@XZ
    MCAPI ~PlayerListManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_onAnyGameplayUsersRemoved@PlayerListManager@@AEAAXXZ
    MCAPI void _onAnyGameplayUsersRemoved();

    // symbol: ?_onGameplayUserRemoved@PlayerListManager@@AEAAXAEAVEntityContext@@@Z
    MCAPI void _onGameplayUserRemoved(class EntityContext& entity);

    // NOLINTEND
};
