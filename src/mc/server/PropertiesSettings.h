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
struct NetworkSettingOptions;
struct PlayerMovementSettings;
struct ScriptSettings;
// clang-format on

class PropertiesSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                      mLevelSeed;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mLevelName;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mLevelType;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mServerName;
    ::ll::TypedStorage<2, 2, ushort>                                              mServerPort;
    ::ll::TypedStorage<2, 2, ushort>                                              mServerPortv6;
    ::ll::TypedStorage<4, 4, int>                                                 mMaxPlayers;
    ::ll::TypedStorage<4, 4, int>                                                 mOpPermissionLevel;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mDifficulty;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mServerType;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mGameMode;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mLanguage;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mServerId;
    ::ll::TypedStorage<4, 4, uint>                                                mMaxThreads;
    ::ll::TypedStorage<4, 4, int>                                                 mServerTickRange;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                       mExtraTrustedKeys;
    ::ll::TypedStorage<1, 1, bool>                                                mUseAllowList;
    ::ll::TypedStorage<1, 1, bool>                                                mIsOnlineMode;
    ::ll::TypedStorage<1, 1, bool>                                                mForceGameMode;
    ::ll::TypedStorage<1, 1, bool>                                                mAllowCheats;
    ::ll::TypedStorage<1, 1, bool>                                                mIsHardcore;
    ::ll::TypedStorage<1, 1, bool>                                                mAdventureModeOverridesEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                mDisablePlayerInteractions;
    ::ll::TypedStorage<1, 1, bool>                                                mTexturePackRequired;
    ::ll::TypedStorage<1, 1, bool>                                                mUseMsaGamertagsOnly;
    ::ll::TypedStorage<1, 1, bool>                                                mEnableItemStackNetManager;
    ::ll::TypedStorage<1, 1, bool>                                                mIsItemTransactionLoggingEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                mIsPropertiesFileLoaded;
    ::ll::TypedStorage<1, 1, bool>                                                mIsServerVisibleToLanDiscovery;
    ::ll::TypedStorage<1, 1, bool>                                                mEncryptionDisabled;
    ::ll::TypedStorage<4, 4, int>                                                 mMaxViewDistanceChunks;
    ::ll::TypedStorage<4, 4, ::std::chrono::minutes>                              mMaxIdleTime;
    ::ll::TypedStorage<4, 4, int>                                                 mServerWakeupFrequency;
    ::ll::TypedStorage<4, 4, ::TransportLayer>                                    mTransportLayerType;
    ::ll::TypedStorage<8, 40, ::NetworkAddress>                                   mRemoteServerCommunicationEndpoint;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mDefaultPlayerPermissionLevel;
    ::ll::TypedStorage<4, 4, ::std::bitset<3>>                                    mServerTextSettings;
    ::ll::TypedStorage<1, 1, bool>                                                mEmitServerTelemetry;
    ::ll::TypedStorage<4, 4, ::LogLevel>                                          mContentLogLevel;
    ::ll::TypedStorage<1, 1, bool>                                                mIsContentLogConsoleOutputEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                mIsContentLogFileEnabled;
    ::ll::TypedStorage<4, 4, float>                                               mWebsocketRetryTime;
    ::ll::TypedStorage<1, 1, bool>                                                mUseWebsocketEncryption;
    ::ll::TypedStorage<4, 24, ::NetworkSettingOptions>                            mNetworkSettings;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mCustomProperties;
    ::ll::TypedStorage<8, 72, ::PlayerMovementSettings>                           mPlayerMovementSettings;
    ::ll::TypedStorage<8, 648, ::ScriptSettings>                                  mScriptSettings;
    ::ll::TypedStorage<1, 1, ::ChatRestrictionLevel>                              mChatRestrictionLevel;
    ::ll::TypedStorage<1, 1, bool>                                                mPersonaDisabled;
    ::ll::TypedStorage<1, 1, bool>                                                mCustomSkinsDisabled;
    ::ll::TypedStorage<1, 1, bool>                                                mEmoteChatMute;
    ::ll::TypedStorage<1, 1, bool>                                                mClientSideGenerationEnabled;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                              mServerBuildRatioOverride;
    ::ll::TypedStorage<1, 1, bool>                                                mUseHashesForBlockRuntimeIds;
    ::ll::TypedStorage<1, 1, bool>                                                mBlockNetworkIdsAreHashes;
    ::ll::TypedStorage<1, 1, bool>                                                mRakNetJoinFloodProtection;
    ::ll::TypedStorage<1, 1, bool>                                                mAllowUnconnectedPings;
    ::ll::TypedStorage<1, 1, bool>                                                mAllowSubClientLogin;
    ::ll::TypedStorage<1, 1, ::NetworkPermissions>                                mNetworkPermissions;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mAppId;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mAppTenantId;
    // NOLINTEND

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

    MCFOLD bool getAllowSubclientLogin() const;

    MCAPI bool getAllowUnconnectedPings() const;

    MCAPI ::std::string const& getApplicationId() const;

    MCAPI ::std::string const& getApplicationTenantId() const;

    MCAPI ::std::unordered_map<::std::string, ::std::string> getChangedValues() const;

    MCFOLD ::ChatRestrictionLevel getChatRestrictionLevel() const;

    MCAPI float getClientThrottleScalar() const;

    MCFOLD int getClientThrottleThreshold() const;

    MCAPI ::PacketCompressionAlgorithm getCompressionAlgorithm() const;

    MCAPI ushort getCompressionThresholdBytesize() const;

    MCFOLD ::LogLevel getContentLogLevel() const;

    MCAPI ::std::string const& getCustomProperty(::std::string const& propertyName) const;

    MCAPI ::PlayerPermissionLevel const getDefaultPlayerPermissionLevel() const;

    MCAPI ::Difficulty getDifficulty() const;

    MCFOLD ::std::vector<::std::string> const& getExtraTrustedKeys() const;

    MCAPI ::GameType getGameMode() const;

    MCFOLD ::std::string const& getLanguage() const;

    MCFOLD ::std::string const& getLevelName() const;

    MCFOLD ::std::string const& getLevelSeed() const;

    MCFOLD ::std::string const& getLevelType() const;

    MCAPI ::std::chrono::minutes getMaxPlayerIdleTime() const;

    MCFOLD int getMaxPlayers() const;

    MCAPI uint getMaxThreads() const;

    MCAPI int getMaxViewDistanceChunks() const;

    MCFOLD ::std::string const& getMotd() const;

    MCAPI ::NetworkPermissions const& getNetworkPermissions() const;

    MCAPI ::CommandPermissionLevel getOpPermissionLevel() const;

    MCFOLD ::PlayerMovementSettings const& getPlayerMovementSettings() const;

    MCAPI ::NetworkAddress getRemoteServerCommunicationEndpoint() const;

    MCFOLD ::ScriptSettings const& getScriptSettings() const;

    MCAPI ::std::optional<float> getServerBuildRatioOverride() const;

    MCFOLD ::std::string const& getServerId() const;

    MCAPI ushort getServerPort() const;

    MCAPI ushort getServerPortv6() const;

    MCFOLD ::std::bitset<3> const& getServerTextSettings() const;

    MCAPI int getServerTickRange() const;

    MCFOLD ::std::string const& getServerType() const;

    MCAPI int getServerWakeupFrequency() const;

    MCAPI ::TransportLayer getTransportLayerType() const;

    MCAPI bool isClientSideGenEnabled() const;

    MCAPI bool isContentLogConsoleOutputEnabled() const;

    MCFOLD bool isContentLogFileEnabled() const;

    MCAPI bool isEmoteChatMuted() const;

    MCAPI bool isEncryptionDisabled() const;

    MCAPI bool isHardcore() const;

    MCAPI bool isItemTransactionManagerLoggingEnabled() const;

    MCAPI bool const isPropertiesFileLoaded() const;

    MCAPI bool isRakNetJoinFloodProtectionEnabled() const;

    MCFOLD bool isServerVisibleToLanDiscovery() const;

    MCAPI bool texturePackRequired() const;

    MCAPI bool useAllowList() const;

    MCFOLD bool useMsaGamertagsOnly() const;

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
