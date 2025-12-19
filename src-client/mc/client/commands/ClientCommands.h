#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
class CommandRegistry;
class FileArchiver;
class IApp;
class IMinecraftGame;
class Level;
class MinecraftCommands;
namespace Bedrock::DevTools { struct CommandExecutor; }
namespace mce { class TextureGroup; }
// clang-format on

class ClientCommands {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void init(
        ::CommandRegistry&                                                  registry,
        ::IMinecraftGame&                                                   minecraftClient,
        ::Bedrock::NotNullNonOwnerPtr<::IApp> const&                        app,
        ::Bedrock::NotNullNonOwnerPtr<::Bedrock::DevTools::CommandExecutor> devToolsCommandExecutor
    );

    MCAPI static void setupStandard(
        ::MinecraftCommands&                   minecraftCommands,
        ::IMinecraftGame&                      minecraftGame,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::FileArchiver&                        archiver,
        bool                                   isHost,
        ::ActiveDirectoryIdentity const*       adIdentity,
        bool                                   scriptingEnabled,
        ::Level const&                         level
    );

    MCAPI static void setupStartMenuScreen(::MinecraftCommands& minecraftCommands, ::IMinecraftGame& minecraftClient);
    // NOLINTEND
};
