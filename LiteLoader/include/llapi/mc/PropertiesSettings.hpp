/**
 * @file  PropertiesSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Bedrock.hpp"

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
     * @hash   -1688833089
     * @symbol  ??0PropertiesSettings\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI PropertiesSettings(std::string const &);
    /**
     * @hash   -2127869786
     * @symbol  ?allowCheats\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool allowCheats() const;
    /**
     * @hash   -1761928420
     * @symbol  ?areCustomSkinsDisabled\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool areCustomSkinsDisabled() const;
    /**
     * @hash   1221916144
     * @symbol  ?canEmitTelemetryEvents\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool canEmitTelemetryEvents() const;
    /**
     * @hash   875679736
     * @symbol  ?disablePlayerInteractions\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool disablePlayerInteractions() const;
    /**
     * @hash   -424852616
     * @symbol  ?enableItemStackNetManager\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool enableItemStackNetManager() const;
    /**
     * @hash   -368609276
     * @symbol  ?forceGamemode\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool forceGamemode() const;
    /**
     * @hash   1820699016
     * @symbol  ?getChatRestrictionLevel\@PropertiesSettings\@\@QEBA?AW4ChatRestrictionLevel\@\@XZ
     */
    MCAPI enum class ChatRestrictionLevel getChatRestrictionLevel() const;
    /**
     * @hash   -714110520
     * @symbol  ?getCompressionAlgorithm\@PropertiesSettings\@\@QEBA?AW4PacketCompressionAlgorithm\@\@XZ
     */
    MCAPI enum class PacketCompressionAlgorithm getCompressionAlgorithm() const;
    /**
     * @hash   -1271011323
     * @symbol  ?getCompressionThresholdBytesize\@PropertiesSettings\@\@QEBAGXZ
     */
    MCAPI unsigned short getCompressionThresholdBytesize() const;
    /**
     * @hash   1303520523
     * @symbol  ?getCustomProperty\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string const & getCustomProperty(std::string const &) const;
    /**
     * @hash   -25718114
     * @symbol  ?getDefaultPlayerPermissionLevel\@PropertiesSettings\@\@QEBA?BW4PlayerPermissionLevel\@\@XZ
     */
    MCAPI enum class PlayerPermissionLevel const getDefaultPlayerPermissionLevel() const;
    /**
     * @hash   1045665886
     * @symbol  ?getDesiredHttpImplementation\@PropertiesSettings\@\@QEBA?AW4Implementation\@Http\@Bedrock\@\@XZ
     */
    MCAPI enum class Bedrock::Http::Implementation getDesiredHttpImplementation() const;
    /**
     * @hash   -1951809080
     * @symbol  ?getDifficulty\@PropertiesSettings\@\@QEBA?AW4Difficulty\@\@XZ
     */
    MCAPI enum class Difficulty getDifficulty() const;
    /**
     * @hash   1127220693
     * @symbol  ?getExtraTrustedKeys\@PropertiesSettings\@\@QEBAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const & getExtraTrustedKeys() const;
    /**
     * @hash   92038650
     * @symbol  ?getGameMode\@PropertiesSettings\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getGameMode() const;
    /**
     * @hash   -303153956
     * @symbol  ?getLanguage\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getLanguage() const;
    /**
     * @hash   -1905453906
     * @symbol  ?getLevelName\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getLevelName() const;
    /**
     * @hash   -1365314082
     * @symbol  ?getLevelSeed\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getLevelSeed() const;
    /**
     * @hash   -1682887778
     * @symbol  ?getLevelType\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getLevelType() const;
    /**
     * @hash   1885313275
     * @symbol  ?getMaxPlayerIdleTime\@PropertiesSettings\@\@QEBA?AV?$duration\@HU?$ratio\@$0DM\@$00\@std\@\@\@chrono\@std\@\@XZ
     */
    MCAPI class std::chrono::duration<int, struct std::ratio<60, 1>> getMaxPlayerIdleTime() const;
    /**
     * @hash   -1394884842
     * @symbol  ?getMaxPlayers\@PropertiesSettings\@\@QEBAHXZ
     */
    MCAPI int getMaxPlayers() const;
    /**
     * @hash   1276201328
     * @symbol  ?getMaxThreads\@PropertiesSettings\@\@QEBAIXZ
     */
    MCAPI unsigned int getMaxThreads() const;
    /**
     * @hash   -142458344
     * @symbol  ?getMaxViewDistanceChunks\@PropertiesSettings\@\@QEBAHXZ
     */
    MCAPI int getMaxViewDistanceChunks() const;
    /**
     * @hash   2006892044
     * @symbol  ?getMotd\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getMotd() const;
    /**
     * @hash   1167546066
     * @symbol  ?getOpPermissionLevel\@PropertiesSettings\@\@QEBA?AW4CommandPermissionLevel\@\@XZ
     */
    MCAPI enum class CommandPermissionLevel getOpPermissionLevel() const;
    /**
     * @hash   1073937242
     * @symbol  ?getPlayerMovementSettings\@PropertiesSettings\@\@QEBAAEBUPlayerMovementSettings\@\@XZ
     */
    MCAPI struct PlayerMovementSettings const & getPlayerMovementSettings() const;
    /**
     * @hash   -1217643310
     * @symbol  ?getRemoteServerCommunicationEndpoint\@PropertiesSettings\@\@QEBA?AUNetworkAddress\@\@XZ
     */
    MCAPI struct NetworkAddress getRemoteServerCommunicationEndpoint() const;
    /**
     * @hash   -1171715158
     * @symbol  ?getScriptSettings\@PropertiesSettings\@\@QEBAAEBUScriptSettings\@\@XZ
     */
    MCAPI struct ScriptSettings const & getScriptSettings() const;
    /**
     * @hash   -1478512500
     * @symbol  ?getServerId\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getServerId() const;
    /**
     * @hash   -800326059
     * @symbol  ?getServerPort\@PropertiesSettings\@\@QEBAGXZ
     */
    MCAPI unsigned short getServerPort() const;
    /**
     * @hash   -474098011
     * @symbol  ?getServerPortv6\@PropertiesSettings\@\@QEBAGXZ
     */
    MCAPI unsigned short getServerPortv6() const;
    /**
     * @hash   -685662792
     * @symbol  ?getServerTickRange\@PropertiesSettings\@\@QEBAHXZ
     */
    MCAPI int getServerTickRange() const;
    /**
     * @hash   -153969172
     * @symbol  ?getServerType\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getServerType() const;
    /**
     * @hash   880566200
     * @symbol  ?getServerWakeupFrequency\@PropertiesSettings\@\@QEBAHXZ
     */
    MCAPI int getServerWakeupFrequency() const;
    /**
     * @hash   -1417839940
     * @symbol  ?getTransportLayerType\@PropertiesSettings\@\@QEBA?AW4TransportLayer\@\@XZ
     */
    MCAPI enum class TransportLayer getTransportLayerType() const;
    /**
     * @hash   -401497284
     * @symbol  ?isClientSideGenEnabled\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool isClientSideGenEnabled() const;
    /**
     * @hash   1656752660
     * @symbol  ?isContentLogFileEnabled\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool isContentLogFileEnabled() const;
    /**
     * @symbol  ?isEmoteChatMuted\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool isEmoteChatMuted() const;
    /**
     * @hash   -1881882498
     * @symbol  ?isItemTransactionManagerLoggingEnabled\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool isItemTransactionManagerLoggingEnabled() const;
    /**
     * @hash   1310462216
     * @symbol  ?isPropertiesFileLoaded\@PropertiesSettings\@\@QEBA?B_NXZ
     */
    MCAPI bool const isPropertiesFileLoaded() const;
    /**
     * @symbol  ?isRealmsStoriesEnabled\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool isRealmsStoriesEnabled() const;
    /**
     * @hash   2109684754
     * @symbol  ?isServerVisibleToLanDiscovery\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool isServerVisibleToLanDiscovery() const;
    /**
     * @hash   -1311931590
     * @symbol  ?texturePackRequired\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool texturePackRequired() const;
    /**
     * @hash   -1626248126
     * @symbol  ?useAllowList\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool useAllowList() const;
    /**
     * @hash   505457878
     * @symbol  ?useMsaGamertagsOnly\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool useMsaGamertagsOnly() const;
    /**
     * @hash   -319923288
     * @symbol  ?useOnlineAuthentication\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool useOnlineAuthentication() const;
    /**
     * @hash   -1786360648
     * @symbol  ?useWebsocketEncryption\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool useWebsocketEncryption() const;
    /**
     * @hash   -969772698
     * @symbol  ?websocketRetryTime\@PropertiesSettings\@\@QEBAMXZ
     */
    MCAPI float websocketRetryTime() const;
    /**
     * @hash   1577170880
     * @symbol  ??1PropertiesSettings\@\@QEAA\@XZ
     */
    MCAPI ~PropertiesSettings();
    /**
     * @hash   708666097
     * @symbol  ?parseBoolValue\@PropertiesSettings\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool parseBoolValue(std::string const &);
    /**
     * @hash   1494587255
     * @symbol  ?parseGameMode\@PropertiesSettings\@\@SA?AW4GameType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class GameType parseGameMode(std::string const &);
    /**
     * @symbol  ?parseInt32Value\@PropertiesSettings\@\@SAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static int parseInt32Value(std::string const &);

};