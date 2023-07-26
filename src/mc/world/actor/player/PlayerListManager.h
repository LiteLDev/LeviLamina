#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class PlayerListManager {

public:
    // prevent constructor by default
    PlayerListManager& operator=(PlayerListManager const&) = delete;
    PlayerListManager(PlayerListManager const&)            = delete;

public:
    /**
     * @symbol ??0PlayerListManager\@\@QEAA\@XZ
     */
    MCAPI PlayerListManager(); // NOLINT
    /**
     * @symbol
     * ?getPlayerList\@PlayerListManager\@\@QEAAAEAV?$unordered_map\@VUUID\@mce\@\@VPlayerListEntry\@\@U?$hash\@VUUID\@mce\@\@\@std\@\@U?$equal_to\@VUUID\@mce\@\@\@5\@V?$allocator\@U?$pair\@$$CBVUUID\@mce\@\@VPlayerListEntry\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        class mce::UUID,
        class PlayerListEntry,
        struct std::hash<class mce::UUID>,
        struct std::equal_to<class mce::UUID>,
        class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>>&
    getPlayerList(); // NOLINT
    /**
     * @symbol
     * ?getPlayerList\@PlayerListManager\@\@QEBAAEBV?$unordered_map\@VUUID\@mce\@\@VPlayerListEntry\@\@U?$hash\@VUUID\@mce\@\@\@std\@\@U?$equal_to\@VUUID\@mce\@\@\@5\@V?$allocator\@U?$pair\@$$CBVUUID\@mce\@\@VPlayerListEntry\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        class mce::UUID,
        class PlayerListEntry,
        struct std::hash<class mce::UUID>,
        struct std::equal_to<class mce::UUID>,
        class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>> const&
    getPlayerList() const; // NOLINT
    /**
     * @symbol
     * ?getPlayerPlatformOnlineId\@PlayerListManager\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI std::string const& getPlayerPlatformOnlineId(class mce::UUID const&) const; // NOLINT
    /**
     * @symbol
     * ?getPlayerXUID\@PlayerListManager\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI std::string const& getPlayerXUID(class mce::UUID const&) const; // NOLINT
    /**
     * @symbol ?initializeWithGameplayUserManagerOnServer\@PlayerListManager\@\@QEAAXAEAVGameplayUserManager\@\@\@Z
     */
    MCAPI void initializeWithGameplayUserManagerOnServer(class GameplayUserManager&); // NOLINT
    /**
     * @symbol ?setPacketSender\@PlayerListManager\@\@QEAAXAEAVPacketSender\@\@\@Z
     */
    MCAPI void setPacketSender(class PacketSender&); // NOLINT
    /**
     * @symbol ??1PlayerListManager\@\@QEAA\@XZ
     */
    MCAPI ~PlayerListManager(); // NOLINT

    // private:
    /**
     * @symbol ?_onAnyGameplayUsersRemoved\@PlayerListManager\@\@AEAAXXZ
     */
    MCAPI void _onAnyGameplayUsersRemoved(); // NOLINT
    /**
     * @symbol ?_onGameplayUserRemoved\@PlayerListManager\@\@AEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void _onGameplayUserRemoved(class EntityContext&); // NOLINT

private:
};
