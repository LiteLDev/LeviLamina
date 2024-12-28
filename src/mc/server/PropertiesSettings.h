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

// auto generated forward declare list
// clang-format off
struct NetworkAddress;
struct NetworkPermissions;
struct PlayerMovementSettings;
struct ScriptSettings;
// clang-format on

class PropertiesSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkf57a82;
    ::ll::UntypedStorage<8, 32>  mUnkf23355;
    ::ll::UntypedStorage<8, 32>  mUnk5c0ffb;
    ::ll::UntypedStorage<8, 32>  mUnkc9b4a8;
    ::ll::UntypedStorage<2, 2>   mUnk363af4;
    ::ll::UntypedStorage<2, 2>   mUnk65a408;
    ::ll::UntypedStorage<4, 4>   mUnkfc00ca;
    ::ll::UntypedStorage<4, 4>   mUnkaab427;
    ::ll::UntypedStorage<8, 32>  mUnk8355ba;
    ::ll::UntypedStorage<8, 32>  mUnk2a06a4;
    ::ll::UntypedStorage<8, 32>  mUnkdaae35;
    ::ll::UntypedStorage<8, 32>  mUnk2f4d68;
    ::ll::UntypedStorage<8, 32>  mUnk54cb52;
    ::ll::UntypedStorage<4, 4>   mUnk44f733;
    ::ll::UntypedStorage<4, 4>   mUnkc84f25;
    ::ll::UntypedStorage<8, 24>  mUnk4dacc5;
    ::ll::UntypedStorage<1, 1>   mUnkea480b;
    ::ll::UntypedStorage<1, 1>   mUnkfab55f;
    ::ll::UntypedStorage<1, 1>   mUnkdecf92;
    ::ll::UntypedStorage<1, 1>   mUnk8dfc53;
    ::ll::UntypedStorage<1, 1>   mUnkdd302e;
    ::ll::UntypedStorage<1, 1>   mUnk7ed145;
    ::ll::UntypedStorage<1, 1>   mUnk801871;
    ::ll::UntypedStorage<1, 1>   mUnk7d9b17;
    ::ll::UntypedStorage<1, 1>   mUnked0194;
    ::ll::UntypedStorage<1, 1>   mUnka6705e;
    ::ll::UntypedStorage<1, 1>   mUnke2df27;
    ::ll::UntypedStorage<1, 1>   mUnkdc5a6b;
    ::ll::UntypedStorage<1, 1>   mUnk425d49;
    ::ll::UntypedStorage<1, 1>   mUnk5af680;
    ::ll::UntypedStorage<4, 4>   mUnk544e4a;
    ::ll::UntypedStorage<4, 4>   mUnk8d6a96;
    ::ll::UntypedStorage<4, 4>   mUnkd6a0d0;
    ::ll::UntypedStorage<4, 4>   mUnk1fbbd5;
    ::ll::UntypedStorage<8, 40>  mUnkf790cb;
    ::ll::UntypedStorage<8, 32>  mUnk11fba3;
    ::ll::UntypedStorage<4, 4>   mUnk2ea9e3;
    ::ll::UntypedStorage<1, 1>   mUnk4c65ed;
    ::ll::UntypedStorage<4, 4>   mUnk1b8967;
    ::ll::UntypedStorage<1, 1>   mUnk3428dc;
    ::ll::UntypedStorage<1, 1>   mUnk1d2153;
    ::ll::UntypedStorage<4, 4>   mUnk6c8157;
    ::ll::UntypedStorage<1, 1>   mUnkc83925;
    ::ll::UntypedStorage<4, 24>  mUnkde68e7;
    ::ll::UntypedStorage<8, 64>  mUnkc6410a;
    ::ll::UntypedStorage<8, 72>  mUnkfc8f44;
    ::ll::UntypedStorage<8, 648> mUnkef1c68;
    ::ll::UntypedStorage<1, 1>   mUnkec2b90;
    ::ll::UntypedStorage<1, 1>   mUnk6048ee;
    ::ll::UntypedStorage<1, 1>   mUnk8c8d67;
    ::ll::UntypedStorage<1, 1>   mUnk14851b;
    ::ll::UntypedStorage<1, 1>   mUnkaa9a1c;
    ::ll::UntypedStorage<4, 8>   mUnkd48920;
    ::ll::UntypedStorage<1, 1>   mUnkc866fa;
    ::ll::UntypedStorage<1, 1>   mUnk337af3;
    ::ll::UntypedStorage<1, 1>   mUnk5d025e;
    ::ll::UntypedStorage<1, 1>   mUnk50eab8;
    ::ll::UntypedStorage<1, 1>   mUnk980584;
    ::ll::UntypedStorage<1, 1>   mUnk1e1dfd;
    ::ll::UntypedStorage<8, 32>  mUnk742276;
    ::ll::UntypedStorage<8, 32>  mUnka77853;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertiesSettings& operator=(PropertiesSettings const&);
    PropertiesSettings(PropertiesSettings const&);
    PropertiesSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PropertiesSettings(::std::string const& filename);

    MCAPI bool adventureModeOverridesEnabled() const;

    MCAPI bool allowCheats() const;

    MCAPI bool areCustomSkinsDisabled() const;

    MCAPI bool blockNetworkIdsAreHashes() const;

    MCAPI bool canEmitTelemetryEvents() const;

    MCAPI bool disablePlayerInteractions() const;

    MCAPI bool enableItemStackNetManager() const;

    MCAPI bool forceGamemode() const;

    MCAPI bool getAllowSubclientLogin() const;

    MCAPI bool getAllowUnconnectedPings() const;

    MCAPI ::std::string const& getApplicationId() const;

    MCAPI ::std::string const& getApplicationTenantId() const;

    MCAPI ::std::unordered_map<::std::string, ::std::string> getChangedValues() const;

    MCAPI ::ChatRestrictionLevel getChatRestrictionLevel() const;

    MCAPI float getClientThrottleScalar() const;

    MCAPI int getClientThrottleThreshold() const;

    MCAPI ::PacketCompressionAlgorithm getCompressionAlgorithm() const;

    MCAPI ushort getCompressionThresholdBytesize() const;

    MCAPI ::LogLevel getContentLogLevel() const;

    MCAPI ::std::string const& getCustomProperty(::std::string const& propertyName) const;

    MCAPI ::PlayerPermissionLevel const getDefaultPlayerPermissionLevel() const;

    MCAPI ::Difficulty getDifficulty() const;

    MCAPI ::std::vector<::std::string> const& getExtraTrustedKeys() const;

    MCAPI ::GameType getGameMode() const;

    MCAPI ::std::string const& getLanguage() const;

    MCAPI ::std::string const& getLevelName() const;

    MCAPI ::std::string const& getLevelSeed() const;

    MCAPI ::std::string const& getLevelType() const;

    MCAPI ::std::chrono::minutes getMaxPlayerIdleTime() const;

    MCAPI int getMaxPlayers() const;

    MCAPI uint getMaxThreads() const;

    MCAPI int getMaxViewDistanceChunks() const;

    MCAPI ::std::string const& getMotd() const;

    MCAPI ::NetworkPermissions const& getNetworkPermissions() const;

    MCAPI ::CommandPermissionLevel getOpPermissionLevel() const;

    MCAPI ::PlayerMovementSettings const& getPlayerMovementSettings() const;

    MCAPI ::NetworkAddress getRemoteServerCommunicationEndpoint() const;

    MCAPI ::ScriptSettings const& getScriptSettings() const;

    MCAPI ::std::optional<float> getServerBuildRatioOverride() const;

    MCAPI ::std::string const& getServerId() const;

    MCAPI ushort getServerPort() const;

    MCAPI ushort getServerPortv6() const;

    MCAPI ::std::bitset<3> const& getServerTextSettings() const;

    MCAPI int getServerTickRange() const;

    MCAPI ::std::string const& getServerType() const;

    MCAPI int getServerWakeupFrequency() const;

    MCAPI ::TransportLayer getTransportLayerType() const;

    MCAPI bool isClientSideGenEnabled() const;

    MCAPI bool isContentLogConsoleOutputEnabled() const;

    MCAPI bool isContentLogFileEnabled() const;

    MCAPI bool isEmoteChatMuted() const;

    MCAPI bool isEncryptionDisabled() const;

    MCAPI bool isHardcore() const;

    MCAPI bool isItemTransactionManagerLoggingEnabled() const;

    MCAPI bool const isPropertiesFileLoaded() const;

    MCAPI bool isRakNetJoinFloodProtectionEnabled() const;

    MCAPI bool isServerVisibleToLanDiscovery() const;

    MCAPI bool texturePackRequired() const;

    MCAPI bool useAllowList() const;

    MCAPI bool useMsaGamertagsOnly() const;

    MCAPI bool useOnlineAuthentication() const;

    MCAPI bool useWebsocketEncryption() const;

    MCAPI float websocketRetryTime() const;

    MCAPI ~PropertiesSettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool parseBoolValue(::std::string const& value);

    MCAPI static ::GameType parseGameMode(::std::string const& value);

    MCAPI static int parseInt32Value(::std::string const& value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& filename);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
