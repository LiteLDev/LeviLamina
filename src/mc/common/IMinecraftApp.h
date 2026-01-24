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
class Options;
// clang-format on

class IMinecraftApp {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~IMinecraftApp();
#else // LL_PLAT_C
    virtual ~IMinecraftApp() = default;

    virtual ::Bedrock::NonOwnerPointer<::EDUSystems> getEDUSystems() = 0;

    virtual ::Bedrock::NonOwnerPointer<::EDUSystems const> getEDUSystems() const = 0;

    virtual ::std::shared_ptr<::Options> getPrimaryUserOptions() = 0;

    virtual ::std::shared_ptr<::Options const> getPrimaryUserOptions() const = 0;
#endif

    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft> getPrimaryMinecraft() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> getAutomationClient() const = 0;

    virtual bool isEduMode() const = 0;

    virtual bool isDedicatedServer() const = 0;

    virtual void onNetworkMaxPlayersChanged(uint) = 0;

    virtual ::IGameModuleShared& getGameModuleShared() = 0;

    virtual void requestServerShutdown() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> getFileArchiver() const = 0;

    virtual bool requestInGamePause(::SubClientId const&, bool) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
