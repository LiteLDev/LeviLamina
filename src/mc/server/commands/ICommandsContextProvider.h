#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginType.h"

// auto generated forward declare list
// clang-format off
class Level;
class NetworkIdentifier;
struct MCRESULT;
// clang-format on

class ICommandsContextProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ICommandsContextProvider() = default;

    // vIndex: 1
    virtual ::Level* getLevel() = 0;

    // vIndex: 2
    virtual ::NetworkIdentifier getLocalNetworkId() const = 0;

    // vIndex: 3
    virtual void onCommandExecuted(::MCRESULT, ::CommandOriginType, ::std::string const&, ::std::string const&) = 0;
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
