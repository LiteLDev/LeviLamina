#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FileArchiver;
class IGameModuleShared;
class Minecraft;
namespace Automation { class AutomationClient; }
// clang-format on

class IMinecraftApp {
public:
    // prevent constructor by default
    IMinecraftApp& operator=(IMinecraftApp const&);
    IMinecraftApp(IMinecraftApp const&);
    IMinecraftApp();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IMinecraftApp();

    // vIndex: 1
    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft> getPrimaryMinecraft() = 0;

    // vIndex: 2
    virtual ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> getAutomationClient() const = 0;

    // vIndex: 3
    virtual bool isEduMode() const = 0;

    // vIndex: 4
    virtual bool isDedicatedServer() const = 0;

    // vIndex: 5
    virtual void onNetworkMaxPlayersChanged(uint) = 0;

    // vIndex: 6
    virtual ::IGameModuleShared& getGameModuleShared() = 0;

    // vIndex: 7
    virtual void requestServerShutdown(::std::string const& message) = 0;

    // vIndex: 8
    virtual ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> getFileArchiver() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
