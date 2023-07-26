#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PropertiesSettings {

public:
    // prevent constructor by default
    PropertiesSettings& operator=(PropertiesSettings const&) = delete;
    PropertiesSettings(PropertiesSettings const&)            = delete;
    PropertiesSettings()                                     = delete;

public:
    /**
     * @symbol
     * ??0PropertiesSettings\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI PropertiesSettings(std::string const&); // NOLINT
    /**
     * @symbol ?adventureModeOverridesEnabled\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool adventureModeOverridesEnabled() const; // NOLINT
    /**
     * @symbol ?allowCheats\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool allowCheats() const; // NOLINT
    /**
     * @symbol ?areCustomSkinsDisabled\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool areCustomSkinsDisabled() const; // NOLINT
    /**
     * @symbol ?blockNetworkIdsAreHashes\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool blockNetworkIdsAreHashes() const; // NOLINT
    /**
     * @symbol ?canEmitTelemetryEvents\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool canEmitTelemetryEvents() const; // NOLINT
    /**
     * @symbol ?disablePlayerInteractions\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool disablePlayerInteractions() const; // NOLINT
    /**
     * @symbol ?enableItemStackNetManager\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool enableItemStackNetManager() const; // NOLINT
    /**
     * @symbol ?forceGamemode\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool forceGamemode() const; // NOLINT
    /**
     * @symbol ?getChatRestrictionLevel\@PropertiesSettings\@\@QEBA?AW4ChatRestrictionLevel\@\@XZ
     */
    MCAPI enum class ChatRestrictionLevel getChatRestrictionLevel() const; // NOLINT
    /**
     * @symbol ?getClientThrottleScalar\@PropertiesSettings\@\@QEBAMXZ
     */
    MCAPI float getClientThrottleScalar() const; // NOLINT
    /**
     * @symbol ?getClientThrottleThreshold\@PropertiesSettings\@\@QEBAHXZ
     */
    MCAPI int getClientThrottleThreshold() const; // NOLINT
    /**
     * @symbol ?getCompressionAlgorithm\@PropertiesSettings\@\@QEBA?AW4PacketCompressionAlgorithm\@\@XZ
     */
    MCAPI enum class PacketCompressionAlgorithm getCompressionAlgorithm() const; // NOLINT
    /**
     * @symbol ?getCompressionThresholdBytesize\@PropertiesSettings\@\@QEBAGXZ
     */
    MCAPI unsigned short getCompressionThresholdBytesize() const; // NOLINT
    /**
     * @symbol ?getContentLogLevel\@PropertiesSettings\@\@QEBA?AW4LogLevel\@\@XZ
     */
    MCAPI enum class LogLevel getContentLogLevel() const; // NOLINT
    /**
     * @symbol
     * ?getCustomProperty\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string const& getCustomProperty(std::string const&) const; // NOLINT
    /**
     * @symbol ?getDefaultPlayerPermissionLevel\@PropertiesSettings\@\@QEBA?BW4PlayerPermissionLevel\@\@XZ
     */
    MCAPI enum class PlayerPermissionLevel const getDefaultPlayerPermissionLevel() const; // NOLINT
    /**
     * @symbol ?getDifficulty\@PropertiesSettings\@\@QEBA?AW4Difficulty\@\@XZ
     */
    MCAPI enum class Difficulty getDifficulty() const; // NOLINT
    /**
     * @symbol
     * ?getExtraTrustedKeys\@PropertiesSettings\@\@QEBAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> const& getExtraTrustedKeys() const; // NOLINT
    /**
     * @symbol ?getGameMode\@PropertiesSettings\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getGameMode() const; // NOLINT
    /**
     * @symbol
     * ?getLanguage\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getLanguage() const; // NOLINT
    /**
     * @symbol
     * ?getLevelName\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getLevelName() const; // NOLINT
    /**
     * @symbol
     * ?getLevelSeed\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getLevelSeed() const; // NOLINT
    /**
     * @symbol
     * ?getLevelType\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getLevelType() const; // NOLINT
    /**
     * @symbol
     * ?getMaxPlayerIdleTime\@PropertiesSettings\@\@QEBA?AV?$duration\@HU?$ratio\@$0DM\@$00\@std\@\@\@chrono\@std\@\@XZ
     */
    MCAPI class std::chrono::duration<int, struct std::ratio<60, 1>> getMaxPlayerIdleTime() const; // NOLINT
    /**
     * @symbol ?getMaxPlayers\@PropertiesSettings\@\@QEBAHXZ
     */
    MCAPI int getMaxPlayers() const; // NOLINT
    /**
     * @symbol ?getMaxThreads\@PropertiesSettings\@\@QEBAIXZ
     */
    MCAPI unsigned int getMaxThreads() const; // NOLINT
    /**
     * @symbol ?getMaxViewDistanceChunks\@PropertiesSettings\@\@QEBAHXZ
     */
    MCAPI int getMaxViewDistanceChunks() const; // NOLINT
    /**
     * @symbol
     * ?getMotd\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getMotd() const; // NOLINT
    /**
     * @symbol ?getNetworkPermissions\@PropertiesSettings\@\@QEBAAEBUNetworkPermissions\@\@XZ
     */
    MCAPI struct NetworkPermissions const& getNetworkPermissions() const; // NOLINT
    /**
     * @symbol ?getOpPermissionLevel\@PropertiesSettings\@\@QEBA?AW4CommandPermissionLevel\@\@XZ
     */
    MCAPI enum class CommandPermissionLevel getOpPermissionLevel() const; // NOLINT
    /**
     * @symbol ?getPlayerMovementSettings\@PropertiesSettings\@\@QEBAAEBUPlayerMovementSettings\@\@XZ
     */
    MCAPI struct PlayerMovementSettings const& getPlayerMovementSettings() const; // NOLINT
    /**
     * @symbol ?getRemoteServerCommunicationEndpoint\@PropertiesSettings\@\@QEBA?AUNetworkAddress\@\@XZ
     */
    MCAPI struct NetworkAddress getRemoteServerCommunicationEndpoint() const; // NOLINT
    /**
     * @symbol ?getScriptSettings\@PropertiesSettings\@\@QEBAAEBUScriptSettings\@\@XZ
     */
    MCAPI struct ScriptSettings const& getScriptSettings() const; // NOLINT
    /**
     * @symbol ?getServerBuildRatioOverride\@PropertiesSettings\@\@QEBA?AV?$optional\@M\@std\@\@XZ
     */
    MCAPI class std::optional<float> getServerBuildRatioOverride() const; // NOLINT
    /**
     * @symbol
     * ?getServerId\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getServerId() const; // NOLINT
    /**
     * @symbol ?getServerPort\@PropertiesSettings\@\@QEBAGXZ
     */
    MCAPI unsigned short getServerPort() const; // NOLINT
    /**
     * @symbol ?getServerPortv6\@PropertiesSettings\@\@QEBAGXZ
     */
    MCAPI unsigned short getServerPortv6() const; // NOLINT
    /**
     * @symbol ?getServerTickRange\@PropertiesSettings\@\@QEBAHXZ
     */
    MCAPI int getServerTickRange() const; // NOLINT
    /**
     * @symbol
     * ?getServerType\@PropertiesSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getServerType() const; // NOLINT
    /**
     * @symbol ?getServerWakeupFrequency\@PropertiesSettings\@\@QEBAHXZ
     */
    MCAPI int getServerWakeupFrequency() const; // NOLINT
    /**
     * @symbol ?isClientSideGenEnabled\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool isClientSideGenEnabled() const; // NOLINT
    /**
     * @symbol ?isContentLogConsoleOutputEnabled\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool isContentLogConsoleOutputEnabled() const; // NOLINT
    /**
     * @symbol ?isContentLogFileEnabled\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool isContentLogFileEnabled() const; // NOLINT
    /**
     * @symbol ?isEmoteChatMuted\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool isEmoteChatMuted() const; // NOLINT
    /**
     * @symbol ?isItemTransactionManagerLoggingEnabled\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool isItemTransactionManagerLoggingEnabled() const; // NOLINT
    /**
     * @symbol ?isPropertiesFileLoaded\@PropertiesSettings\@\@QEBA?B_NXZ
     */
    MCAPI bool const isPropertiesFileLoaded() const; // NOLINT
    /**
     * @symbol ?isRealmsStoriesEnabled\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool isRealmsStoriesEnabled() const; // NOLINT
    /**
     * @symbol ?isServerVisibleToLanDiscovery\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool isServerVisibleToLanDiscovery() const; // NOLINT
    /**
     * @symbol ?texturePackRequired\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool texturePackRequired() const; // NOLINT
    /**
     * @symbol ?useAllowList\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool useAllowList() const; // NOLINT
    /**
     * @symbol ?useMsaGamertagsOnly\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool useMsaGamertagsOnly() const; // NOLINT
    /**
     * @symbol ?useOnlineAuthentication\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool useOnlineAuthentication() const; // NOLINT
    /**
     * @symbol ?useWebsocketEncryption\@PropertiesSettings\@\@QEBA_NXZ
     */
    MCAPI bool useWebsocketEncryption() const; // NOLINT
    /**
     * @symbol ?websocketRetryTime\@PropertiesSettings\@\@QEBAMXZ
     */
    MCAPI float websocketRetryTime() const; // NOLINT
    /**
     * @symbol ??1PropertiesSettings\@\@QEAA\@XZ
     */
    MCAPI ~PropertiesSettings(); // NOLINT
    /**
     * @symbol
     * ?parseBoolValue\@PropertiesSettings\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool parseBoolValue(std::string const&); // NOLINT
    /**
     * @symbol
     * ?parseGameMode\@PropertiesSettings\@\@SA?AW4GameType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class GameType parseGameMode(std::string const&); // NOLINT
    /**
     * @symbol
     * ?parseInt32Value\@PropertiesSettings\@\@SAHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static int parseInt32Value(std::string const&); // NOLINT
};
