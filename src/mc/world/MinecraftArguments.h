#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/resource_processing/category/CategoryMergeStrategyFactory.h"
#include "mc/events/event_data/ServerTelemetryData.h"
#include "mc/network/ClientOrServerNetworkSystemRef.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/server/config/server_configuration/ServerConfigurationJoinInfo.h"

// auto generated forward declare list
// clang-format off
class AllowList;
class EditorAllowList;
class FileArchiver;
class GameCallbacks;
class GameModuleServer;
class ICommandsContextProvider;
class IContentTierManager;
class IEducationOptions;
class IImGuiModuleConnector;
class ILevel;
class IMinecraftApp;
class IMinecraftEventing;
class KeyManager;
class LoadedResourceData;
class MinecraftCommands;
class MinecraftGameTest;
class MinecraftServiceKeyManager;
class PacketSender;
class PermissionsFile;
class PlayerListEntry;
class PrivateKeyManager;
class ResourcePackManager;
class Scheduler;
class ScriptPackSettingsCache;
class ServerNetworkHandler;
class TextFilteringProcessor;
class Timer;
struct AutoCompleteInformation;
struct NetworkServerConfig;
struct PackIdVersion;
struct ResourceMergeOptions;
struct ServerNetworkHandlerDependencies;
namespace Bedrock::Resources { class CategoryFileMapping; }
namespace Core { class FilePathManager; }
namespace mce { class UUID; }
class ServerMetrics;
// clang-format on

struct MinecraftArguments {
public:
    // MinecraftArguments inner types declare
    // clang-format off
    struct CreateMinecraftCommandsArgs;
    struct CreateServerNetworkHandlerArgs;
    struct MinecraftCommandsFactoryArguments;
    struct ServerNetworkHandlerFactoryArguments;
    // clang-format on

    // MinecraftArguments inner types define
    struct CreateMinecraftCommandsArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ICommandsContextProvider&> mContext;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateMinecraftCommandsArgs& operator=(CreateMinecraftCommandsArgs const&);
        CreateMinecraftCommandsArgs(CreateMinecraftCommandsArgs const&);
        CreateMinecraftCommandsArgs();
    };

    struct CreateServerNetworkHandlerArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ILevel&>                                                   mLevel;
        ::ll::TypedStorage<8, 8, ::PrivateKeyManager&>                                        mServerKeys;
        ::ll::TypedStorage<8, 8, ::MinecraftServiceKeyManager&>                               mMinecraftServiceKeys;
        ::ll::TypedStorage<8, 8, ::KeyManager const&>                                         mHostPublicKey;
        ::ll::TypedStorage<4, 4, int>                                                         mMaxChunkRadius;
        ::ll::TypedStorage<4, 4, int>                                                         mMaxNumPlayers;
        ::ll::TypedStorage<8, 8, ::MinecraftCommands&>                                        mCommands;
        ::ll::TypedStorage<8, 8, ::std::unordered_map<::PackIdVersion, ::std::string> const&> mPackIdToContentKey;
        ::ll::TypedStorage<8, 8, ::Scheduler&>                                                mScheduler;
        ::ll::TypedStorage<8, 8, ::TextFilteringProcessor*>                                   mTextFilteringProcessor;
        ::ll::TypedStorage<8, 8, ::NetworkServerConfig const&>                                mPacketHandlerConfig;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ScriptPackSettingsCache>>               mPackSettingsCache;
        ::ll::TypedStorage<8, 8, ::ServerNetworkHandlerDependencies&&>                        mServerNetworkOptions;
        ::ll::TypedStorage<8, 8, ::optional_ref<::MinecraftGameTest>>                         mGameTest;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateServerNetworkHandlerArgs& operator=(CreateServerNetworkHandlerArgs const&);
        CreateServerNetworkHandlerArgs(CreateServerNetworkHandlerArgs const&);
        CreateServerNetworkHandlerArgs();
    };

    struct MinecraftCommandsFactoryArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::IImGuiModuleConnector*> mConnector;
        ::ll::TypedStorage<
            8,
            8,
            ::std::string (*)(
                ::std::string const&,
                ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const&,
                ::AutoCompleteInformation&
            )>
                                                                                   mAutoCompletePlayerMention;
        ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IEducationOptions>> mEducationOptions;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ~MinecraftCommandsFactoryArguments();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD void $dtor();
#endif
        // NOLINTEND
    };

    struct ServerNetworkHandlerFactoryArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::AllowList&>       mAllowList;
        ::ll::TypedStorage<8, 8, ::EditorAllowList&> mEditorAllowList;
        ::ll::TypedStorage<8, 8, ::IMinecraftApp&>   mApp;
        ::ll::TypedStorage<8, 384, ::std::optional<::ServerConfiguration::ServerConfigurationJoinInfo>>
                                                                          mServerConfigurationJoinInfo;
        ::ll::TypedStorage<8, 128, ::Social::Events::ServerTelemetryData> mServerTelemetryData;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerNetworkHandlerFactoryArguments& operator=(ServerNetworkHandlerFactoryArguments const&);
        ServerNetworkHandlerFactoryArguments(ServerNetworkHandlerFactoryArguments const&);
        ServerNetworkHandlerFactoryArguments();
    };

    using GetFileArchiver = ::brstd::move_only_function<::Bedrock::NotNullNonOwnerPtr<::FileArchiver>() const>;

    using MinecraftCommandsFactory = ::brstd::move_only_function<
        ::std::unique_ptr<::MinecraftCommands>(::MinecraftArguments::CreateMinecraftCommandsArgs&&) const>;

    using MinecraftServiceKeyManagerFactory = ::brstd::function_ref<
        ::std::shared_ptr<::MinecraftServiceKeyManager>() const,
        ::std::shared_ptr<::MinecraftServiceKeyManager>()>;

    using RequestServerShutdownCallback = ::brstd::move_only_function<void() const>;

    using ServerNetworkHandlerFactory = ::brstd::move_only_function<
        ::std::unique_ptr<::ServerNetworkHandler>(::MinecraftArguments::CreateServerNetworkHandlerArgs&&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::GameCallbacks&>                           mGameCallbacks;
    ::ll::TypedStorage<8, 8, ::PermissionsFile*>                         mPermissionsFile;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                     mMaxPlayerIdleTime;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                      mEventing;
    ::ll::TypedStorage<8, 16, ::ClientOrServerNetworkSystemRef>          mNetwork;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                            mPacketSender;
    ::ll::TypedStorage<1, 1, ::SubClientId>                              mClientSubId;
    ::ll::TypedStorage<8, 8, ::Timer&>                                   mSimTimer;
    ::ll::TypedStorage<8, 8, ::Timer&>                                   mRealTimer;
    ::ll::TypedStorage<8, 8, ::ServerMetrics*>                           mServerMetrics;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::ResourcePackManager>>         mResourcePackManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PrivateKeyManager>>    mServerKeys;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void() const>> mRequestServerShutdown;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::unique_ptr<::ServerNetworkHandler>(::MinecraftArguments::CreateServerNetworkHandlerArgs&&)>>
                                                                     mCreateServerNetworkHandler;
    ::ll::TypedStorage<1, 1, bool>                                   mIsDedicatedServer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GameModuleServer>> mGameModuleServer;
    ::ll::TypedStorage<
        8,
        16,
        ::brstd::function_ref<
            ::std::shared_ptr<::MinecraftServiceKeyManager>() const,
            ::std::shared_ptr<::MinecraftServiceKeyManager>()>>
        mCreateMinecraftServiceKeyManager;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<::Bedrock::NotNullNonOwnerPtr<::FileArchiver>() const>>
        mGetFileArchiver;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::unique_ptr<::MinecraftCommands>(::MinecraftArguments::CreateMinecraftCommandsArgs&&) const>>
        mCreateMinecraftCommands;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftArguments& operator=(MinecraftArguments const&);
    MinecraftArguments(MinecraftArguments const&);
    MinecraftArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::brstd::move_only_function<
        ::std::unique_ptr<::ServerNetworkHandler>(::MinecraftArguments::CreateServerNetworkHandlerArgs&&)>
    createServerNetworkHandlerFactory(::MinecraftArguments::ServerNetworkHandlerFactoryArguments&& args);

#ifdef LL_PLAT_C
    MCAPI ~MinecraftArguments();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::OwnerPtr<::ResourcePackManager> createResourcePackManager(
        ::Core::FilePathManager const&            filePathManager,
        ::IContentTierManager const&              contentTierManager,
        ::Bedrock::Resources::CategoryFileMapping categoryFileMapping,
        ::Bedrock::Resources::CategoryMergeStrategyFactory<::LoadedResourceData, ::ResourceMergeOptions>
            mergeStrategyFactory
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
