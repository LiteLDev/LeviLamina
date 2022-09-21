/**
 * @file  MC/PropertiesSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PropertiesSettings.
 *
 */
class PropertiesSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTIESSETTINGS
public:
    class PropertiesSettings& operator=(class PropertiesSettings const &) = delete;
    PropertiesSettings(class PropertiesSettings const &) = delete;
    PropertiesSettings() = delete;
#endif

public:
    /**
     * @hash   -1794343201
     * @symbol ??0PropertiesSettings@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI PropertiesSettings(std::string const &);
    /**
     * @hash   2060849350
     * @symbol ?allowCheats@PropertiesSettings@@QEBA_NXZ
     */
    MCAPI bool allowCheats() const;
    /**
     * @hash   -1868176580
     * @symbol ?areCustomSkinsDisabled@PropertiesSettings@@QEBA_NXZ
     */
    MCAPI bool areCustomSkinsDisabled() const;
    /**
     * @hash   1115667984
     * @symbol ?canEmitTelemetryEvents@PropertiesSettings@@QEBA_NXZ
     */
    MCAPI bool canEmitTelemetryEvents() const;
    /**
     * @hash   769431576
     * @symbol ?disablePlayerInteractions@PropertiesSettings@@QEBA_NXZ
     */
    MCAPI bool disablePlayerInteractions() const;
    /**
     * @hash   -531100776
     * @symbol ?enableItemStackNetManager@PropertiesSettings@@QEBA_NXZ
     */
    MCAPI bool enableItemStackNetManager() const;
    /**
     * @hash   -474857436
     * @symbol ?forceGamemode@PropertiesSettings@@QEBA_NXZ
     */
    MCAPI bool forceGamemode() const;
    /**
     * @hash   1714450856
     * @symbol ?getChatRestrictionLevel@PropertiesSettings@@QEBA?AW4ChatRestrictionLevel@@XZ
     */
    MCAPI enum ChatRestrictionLevel getChatRestrictionLevel() const;
    /**
     * @symbol ?getClientThrottleEnabled@PropertiesSettings@@QEBA_NXZ
     */
    MCAPI bool getClientThrottleEnabled() const;
    /**
     * @symbol ?getClientThrottleScalar@PropertiesSettings@@QEBAMXZ
     */
    MCAPI float getClientThrottleScalar() const;
    /**
     * @symbol ?getClientThrottleThreshold@PropertiesSettings@@QEBAHXZ
     */
    MCAPI int getClientThrottleThreshold() const;
    /**
     * @symbol ?getCompressionAlgorithm@PropertiesSettings@@QEBA?AW4PacketCompressionAlgorithm@@XZ
     */
    MCAPI enum PacketCompressionAlgorithm getCompressionAlgorithm() const;
    /**
     * @hash   -1377274859
     * @symbol ?getCompressionThresholdBytesize@PropertiesSettings@@QEBAGXZ
     */
    MCAPI unsigned short getCompressionThresholdBytesize() const;
    /**
     * @hash   1197256987
     * @symbol ?getCustomProperty@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string const & getCustomProperty(std::string const &) const;
    /**
     * @hash   -131981650
     * @symbol ?getDefaultPlayerPermissionLevel@PropertiesSettings@@QEBA?BW4PlayerPermissionLevel@@XZ
     */
    MCAPI enum PlayerPermissionLevel const getDefaultPlayerPermissionLevel() const;
    /**
     * @hash   939402350
     * @symbol ?getDesiredHttpImplementation@PropertiesSettings@@QEBA?AW4Implementation@Http@Bedrock@@XZ
     */
    MCAPI enum Bedrock::Http::Implementation getDesiredHttpImplementation() const;
    /**
     * @hash   -2058072616
     * @symbol ?getDifficulty@PropertiesSettings@@QEBA?AW4Difficulty@@XZ
     */
    MCAPI enum Difficulty getDifficulty() const;
    /**
     * @hash   1020957157
     * @symbol ?getExtraTrustedKeys@PropertiesSettings@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> const & getExtraTrustedKeys() const;
    /**
     * @hash   -14224886
     * @symbol ?getGameMode@PropertiesSettings@@QEBA?AW4GameType@@XZ
     */
    MCAPI enum GameType getGameMode() const;
    /**
     * @hash   -409417492
     * @symbol ?getLanguage@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getLanguage() const;
    /**
     * @hash   -2011717442
     * @symbol ?getLevelName@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getLevelName() const;
    /**
     * @hash   -1461936866
     * @symbol ?getLevelSeed@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getLevelSeed() const;
    /**
     * @hash   -1789151314
     * @symbol ?getLevelType@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getLevelType() const;
    /**
     * @hash   1779049739
     * @symbol ?getMaxPlayerIdleTime@PropertiesSettings@@QEBA?AV?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@XZ
     */
    MCAPI class std::chrono::duration<int, struct std::ratio<60, 1>> getMaxPlayerIdleTime() const;
    /**
     * @hash   -1501148378
     * @symbol ?getMaxPlayers@PropertiesSettings@@QEBAHXZ
     */
    MCAPI int getMaxPlayers() const;
    /**
     * @hash   1169937792
     * @symbol ?getMaxThreads@PropertiesSettings@@QEBAIXZ
     */
    MCAPI unsigned int getMaxThreads() const;
    /**
     * @hash   -248721880
     * @symbol ?getMaxViewDistanceChunks@PropertiesSettings@@QEBAHXZ
     */
    MCAPI int getMaxViewDistanceChunks() const;
    /**
     * @hash   1900628508
     * @symbol ?getMotd@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getMotd() const;
    /**
     * @hash   1061282530
     * @symbol ?getOpPermissionLevel@PropertiesSettings@@QEBA?AW4CommandPermissionLevel@@XZ
     */
    MCAPI enum CommandPermissionLevel getOpPermissionLevel() const;
    /**
     * @hash   967673706
     * @symbol ?getPlayerMovementSettings@PropertiesSettings@@QEBAAEBUPlayerMovementSettings@@XZ
     */
    MCAPI struct PlayerMovementSettings const & getPlayerMovementSettings() const;
    /**
     * @hash   -1323906846
     * @symbol ?getRemoteServerCommunicationEndpoint@PropertiesSettings@@QEBA?AUNetworkAddress@@XZ
     */
    MCAPI struct NetworkAddress getRemoteServerCommunicationEndpoint() const;
    /**
     * @hash   -1277978694
     * @symbol ?getScriptSettings@PropertiesSettings@@QEBAAEBUScriptSettings@@XZ
     */
    MCAPI struct ScriptSettings const & getScriptSettings() const;
    /**
     * @hash   -1584776036
     * @symbol ?getServerId@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getServerId() const;
    /**
     * @hash   -906589595
     * @symbol ?getServerPort@PropertiesSettings@@QEBAGXZ
     */
    MCAPI unsigned short getServerPort() const;
    /**
     * @hash   -580361547
     * @symbol ?getServerPortv6@PropertiesSettings@@QEBAGXZ
     */
    MCAPI unsigned short getServerPortv6() const;
    /**
     * @hash   -791926328
     * @symbol ?getServerTickRange@PropertiesSettings@@QEBAHXZ
     */
    MCAPI int getServerTickRange() const;
    /**
     * @hash   -260232708
     * @symbol ?getServerType@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getServerType() const;
    /**
     * @hash   774302664
     * @symbol ?getServerWakeupFrequency@PropertiesSettings@@QEBAHXZ
     */
    MCAPI int getServerWakeupFrequency() const;
    /**
     * @hash   -1524103476
     * @symbol ?getTransportLayerType@PropertiesSettings@@QEBA?AW4TransportLayer@@XZ
     */
    MCAPI enum TransportLayer getTransportLayerType() const;
    /**
     * @hash   1550473748
     * @symbol ?isContentLogFileEnabled@PropertiesSettings@@QEBA_NXZ
     */
    MCAPI bool isContentLogFileEnabled() const;
    /**
     * @hash   -1988161410
     * @symbol ?isItemTransactionManagerLoggingEnabled@PropertiesSettings@@QEBA_NXZ
     */
    MCAPI bool isItemTransactionManagerLoggingEnabled() const;
    /**
     * @hash   1204183304
     * @symbol ?isPropertiesFileLoaded@PropertiesSettings@@QEBA?B_NXZ
     */
    MCAPI bool const isPropertiesFileLoaded() const;
    /**
     * @hash   -1418287382
     * @symbol ?texturePackRequired@PropertiesSettings@@QEBA_NXZ
     */
    MCAPI bool texturePackRequired() const;
    /**
     * @hash   -1732603918
     * @symbol ?useAllowList@PropertiesSettings@@QEBA_NXZ
     */
    MCAPI bool useAllowList() const;
    /**
     * @hash   399102086
     * @symbol ?useMsaGamertagsOnly@PropertiesSettings@@QEBA_NXZ
     */
    MCAPI bool useMsaGamertagsOnly() const;
    /**
     * @hash   -426279080
     * @symbol ?useOnlineAuthentication@PropertiesSettings@@QEBA_NXZ
     */
    MCAPI bool useOnlineAuthentication() const;
    /**
     * @hash   -1892716440
     * @symbol ?useWebsocketEncryption@PropertiesSettings@@QEBA_NXZ
     */
    MCAPI bool useWebsocketEncryption() const;
    /**
     * @hash   -1076128490
     * @symbol ?websocketRetryTime@PropertiesSettings@@QEBAMXZ
     */
    MCAPI float websocketRetryTime() const;
    /**
     * @hash   1483561792
     * @symbol ??1PropertiesSettings@@QEAA@XZ
     */
    MCAPI ~PropertiesSettings();
    /**
     * @hash   602371809
     * @symbol ?parseBoolValue@PropertiesSettings@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool parseBoolValue(std::string const &);
    /**
     * @hash   1388292967
     * @symbol ?parseGameMode@PropertiesSettings@@SA?AW4GameType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static enum GameType parseGameMode(std::string const &);

};