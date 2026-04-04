#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginType.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class NetworkIdentifier;
struct MCRESULT;
// clang-format on

class ICommandsContextProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICommandsContextProvider() = default;

    virtual ::ILevel* getLevel() = 0;

    virtual ::NetworkIdentifier getLocalNetworkId() const = 0;

    virtual void onCommandExecuted(
        ::MCRESULT           result,
        ::CommandOriginType  originType,
        ::std::string const& commandName,
        ::std::string const& commandString
    ) = 0;
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
