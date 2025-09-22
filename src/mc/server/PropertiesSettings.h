#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/services/DiscoveryConfig.h"
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/nether_net/LogSeverity.h"
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/external/lib_http_client/HCTraceLevel.h"
#include "mc/network/NetworkAddress.h"
#include "mc/network/NetworkPermissions.h"
#include "mc/network/NetworkSettingOptions.h"
#include "mc/network/TransportLayer.h"
#include "mc/options/EducationServicesEnvironment.h"
#include "mc/scripting/ScriptSettings.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/PlayerMovementSettings.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
struct MappedPorts;
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
    ::ll::TypedStorage<1, 1, bool>                                                mIsPacketRateLimitingEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                mIsPacketReceiptEventingEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                mEncryptionDisabled;
    ::ll::TypedStorage<4, 4, int>                                                 mMaxViewDistanceChunks;
    ::ll::TypedStorage<4, 4, ::std::chrono::minutes>                              mMaxIdleTime;
    ::ll::TypedStorage<4, 4, int>                                                 mServerWakeupFrequency;
    ::ll::TypedStorage<4, 4, ::TransportLayer>                                    mTransportLayerType;
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID>                             mNetherNetId;
    ::ll::TypedStorage<8, 40, ::NetworkAddress>                                   mRemoteServerCommunicationEndpoint;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mDefaultPlayerPermissionLevel;
    ::ll::TypedStorage<1, 1, bool>                                                mDisableClientVibrantVisuals;
    ::ll::TypedStorage<4, 4, ::std::bitset<3>>                                    mServerTextSettings;
    ::ll::TypedStorage<1, 1, bool>                                                mEmitServerTelemetry;
    ::ll::TypedStorage<4, 4, ::LogLevel>                                          mContentLogLevel;
    ::ll::TypedStorage<1, 1, bool>                                                mIsContentLogConsoleOutputEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                mIsContentLogFileEnabled;
    ::ll::TypedStorage<4, 4, ::NetherNet::LogSeverity>                            mTransportLogLevel;
    ::ll::TypedStorage<4, 4, ::HCTraceLevel>                                      mHttpLogLevel;
    ::ll::TypedStorage<4, 4, float>                                               mWebsocketRetryTime;
    ::ll::TypedStorage<1, 1, bool>                                                mUseWebsocketEncryption;
    ::ll::TypedStorage<4, 20, ::NetworkSettingOptions>                            mNetworkSettings;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mCustomProperties;
    ::ll::TypedStorage<8, 64, ::PlayerMovementSettings>                           mPlayerMovementSettings;
    ::ll::TypedStorage<8, 704, ::ScriptSettings>                                  mScriptSettings;
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
    ::ll::TypedStorage<8, 32, ::std::string>                                      mServerPublicIP;
    ::ll::TypedStorage<8, 24, ::std::vector<::MappedPorts>>                       mPortMappings;
    ::ll::TypedStorage<4, 8, ::Bedrock::Services::DiscoveryConfig>                mDiscoveryConfig;
    ::ll::TypedStorage<4, 4, ::EducationServicesEnvironment>                      mEducationServicesEnvironment;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertiesSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PropertiesSettings(::std::string const& filename);

    MCAPI ::std::unordered_map<::std::string, ::std::string> getChangedValues() const;

    MCAPI ::SharedTypes::Legacy::Difficulty getDifficulty() const;

    MCAPI ::CommandPermissionLevel getOpPermissionLevel() const;

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
