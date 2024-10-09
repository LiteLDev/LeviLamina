#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/network/PacketCompressionAlgorithm.h"
#include "mc/network/TransportLayer.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/Difficulty.h"
#include "mc/world/level/GameType.h"

class PropertiesSettings {
public:
    // prevent constructor by default
    PropertiesSettings& operator=(PropertiesSettings const&);
    PropertiesSettings(PropertiesSettings const&);
    PropertiesSettings();

public:
    // NOLINTBEGIN
    MCAPI explicit PropertiesSettings(std::string const& filename);

    MCAPI bool adventureModeOverridesEnabled() const;

    MCAPI bool allowCheats() const;

    MCAPI bool areCustomSkinsDisabled() const;

    MCAPI bool blockNetworkIdsAreHashes() const;

    MCAPI bool canEmitTelemetryEvents() const;

    MCAPI bool disablePlayerInteractions() const;

    MCAPI bool enableItemStackNetManager() const;

    MCAPI bool forceGamemode() const;

    MCAPI std::string const& getApplicationId() const;

    MCAPI std::string const& getApplicationSecret() const;

    MCAPI std::string const& getApplicationTenantId() const;

    MCAPI std::unordered_map<std::string, std::string> getChangedValues() const;

    MCAPI ::ChatRestrictionLevel getChatRestrictionLevel() const;

    MCAPI float getClientThrottleScalar() const;

    MCAPI int getClientThrottleThreshold() const;

    MCAPI ::PacketCompressionAlgorithm getCompressionAlgorithm() const;

    MCAPI ushort getCompressionThresholdBytesize() const;

    MCAPI ::LogLevel getContentLogLevel() const;

    MCAPI std::string const& getCustomProperty(std::string const&) const;

    MCAPI ::PlayerPermissionLevel const getDefaultPlayerPermissionLevel() const;

    MCAPI ::Difficulty getDifficulty() const;

    MCAPI std::vector<std::string> const& getExtraTrustedKeys() const;

    MCAPI ::GameType getGameMode() const;

    MCAPI std::string const& getLanguage() const;

    MCAPI std::string const& getLevelName() const;

    MCAPI std::string const& getLevelSeed() const;

    MCAPI std::string const& getLevelType() const;

    MCAPI std::chrono::minutes getMaxPlayerIdleTime() const;

    MCAPI int getMaxPlayers() const;

    MCAPI uint getMaxThreads() const;

    MCAPI int getMaxViewDistanceChunks() const;

    MCAPI std::string const& getMotd() const;

    MCAPI struct NetworkPermissions const& getNetworkPermissions() const;

    MCAPI ::CommandPermissionLevel getOpPermissionLevel() const;

    MCAPI struct PlayerMovementSettings const& getPlayerMovementSettings() const;

    MCAPI struct NetworkAddress getRemoteServerCommunicationEndpoint() const;

    MCAPI struct ScriptSettings const& getScriptSettings() const;

    MCAPI std::optional<float> getServerBuildRatioOverride() const;

    MCAPI std::string const& getServerId() const;

    MCAPI ushort getServerPort() const;

    MCAPI ushort getServerPortv6() const;

    MCAPI std::bitset<3> const& getServerTextSettings() const;

    MCAPI int getServerTickRange() const;

    MCAPI std::string const& getServerType() const;

    MCAPI int getServerWakeupFrequency() const;

    MCAPI ::TransportLayer getTransportLayerType() const;

    MCAPI bool isClientSideGenEnabled() const;

    MCAPI bool isContentLogConsoleOutputEnabled() const;

    MCAPI bool isContentLogFileEnabled() const;

    MCAPI bool isEmoteChatMuted() const;

    MCAPI bool isEncryptionDisabled() const;

    MCAPI bool isItemTransactionManagerLoggingEnabled() const;

    MCAPI bool const isPropertiesFileLoaded() const;

    MCAPI bool isRakNetJoinFloodProtectionEnabled() const;

    MCAPI bool isRealmsStoriesEnabled() const;

    MCAPI bool isServerVisibleToLanDiscovery() const;

    MCAPI bool texturePackRequired() const;

    MCAPI bool useAllowList() const;

    MCAPI bool useMsaGamertagsOnly() const;

    MCAPI bool useOnlineAuthentication() const;

    MCAPI bool useWebsocketEncryption() const;

    MCAPI float websocketRetryTime() const;

    MCAPI ~PropertiesSettings();

    MCAPI static bool parseBoolValue(std::string const& value);

    MCAPI static ::GameType parseGameMode(std::string const& value);

    MCAPI static int parseInt32Value(std::string const& value);

    // NOLINTEND
};
