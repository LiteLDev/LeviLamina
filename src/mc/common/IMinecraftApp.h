#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class EDUSystems;
class FileArchiver;
class IGameModuleShared;
class Minecraft;
namespace Automation { class AutomationClient; }
class OptionRegistry;
// clang-format on

class IMinecraftApp {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMinecraftApp() = default;

#ifdef LL_PLAT_C
    virtual ::Bedrock::NonOwnerPointer<::EDUSystems> getEDUSystems() = 0;

    virtual ::Bedrock::NonOwnerPointer<::EDUSystems const> getEDUSystems() const = 0;

    virtual ::std::shared_ptr<::OptionRegistry> getPrimaryUserOptions() = 0;

    virtual ::std::shared_ptr<::OptionRegistry const> getPrimaryUserOptions() const = 0;

#endif
    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft> getPrimaryMinecraft() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> getAutomationClient() const = 0;

    virtual bool isEduMode() const = 0;

    virtual bool isDedicatedServer() const = 0;

    virtual void onNetworkMaxPlayersChanged(uint newMaxPlayerCount) = 0;

    virtual ::IGameModuleShared& getGameModuleShared() = 0;

    virtual void requestServerShutdown() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> getFileArchiver() const = 0;

    virtual bool requestInGamePause(::SubClientId const& subClient, bool status) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
