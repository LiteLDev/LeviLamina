/**
 * @file  PlayerListManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PlayerListManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERLISTMANAGER
public:
    class PlayerListManager& operator=(class PlayerListManager const &) = delete;
    PlayerListManager(class PlayerListManager const &) = delete;
#endif

public:
    /**
     * @symbol ??0PlayerListManager\@\@QEAA\@XZ
     */
    MCAPI PlayerListManager();
    /**
     * @symbol ?getPlayerList\@PlayerListManager\@\@QEAAAEAV?$unordered_map\@VUUID\@mce\@\@VPlayerListEntry\@\@U?$hash\@VUUID\@mce\@\@\@std\@\@U?$equal_to\@VUUID\@mce\@\@\@5\@V?$allocator\@U?$pair\@$$CBVUUID\@mce\@\@VPlayerListEntry\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<class mce::UUID, class PlayerListEntry, struct std::hash<class mce::UUID>, struct std::equal_to<class mce::UUID>, class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>> & getPlayerList();
    /**
     * @symbol ?getPlayerList\@PlayerListManager\@\@QEBAAEBV?$unordered_map\@VUUID\@mce\@\@VPlayerListEntry\@\@U?$hash\@VUUID\@mce\@\@\@std\@\@U?$equal_to\@VUUID\@mce\@\@\@5\@V?$allocator\@U?$pair\@$$CBVUUID\@mce\@\@VPlayerListEntry\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<class mce::UUID, class PlayerListEntry, struct std::hash<class mce::UUID>, struct std::equal_to<class mce::UUID>, class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>> const & getPlayerList() const;
    /**
     * @symbol ?getPlayerPlatformOnlineId\@PlayerListManager\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI std::string const & getPlayerPlatformOnlineId(class mce::UUID const &) const;
    /**
     * @symbol ?getPlayerXUID\@PlayerListManager\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI std::string const & getPlayerXUID(class mce::UUID const &) const;
    /**
     * @symbol ?initializeWithGameplayUserManagerOnServer\@PlayerListManager\@\@QEAAXAEAVGameplayUserManager\@\@\@Z
     */
    MCAPI void initializeWithGameplayUserManagerOnServer(class GameplayUserManager &);
    /**
     * @symbol ?setPacketSender\@PlayerListManager\@\@QEAAXAEAVPacketSender\@\@\@Z
     */
    MCAPI void setPacketSender(class PacketSender &);
    /**
     * @symbol ??1PlayerListManager\@\@QEAA\@XZ
     */
    MCAPI ~PlayerListManager();

//private:
    /**
     * @symbol ?_onAnyGameplayUsersRemoved\@PlayerListManager\@\@AEAAXXZ
     */
    MCAPI void _onAnyGameplayUsersRemoved();
    /**
     * @symbol ?_onGameplayUserRemoved\@PlayerListManager\@\@AEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void _onGameplayUserRemoved(class EntityContext &);

private:

};
