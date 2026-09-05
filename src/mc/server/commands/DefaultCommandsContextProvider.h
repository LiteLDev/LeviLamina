#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/ICommandsContextProvider.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class Minecraft;
class NetworkIdentifier;
struct MCRESULT;
// clang-format on

class DefaultCommandsContextProvider : public ::ICommandsContextProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Minecraft&> mMinecraft;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultCommandsContextProvider& operator=(DefaultCommandsContextProvider const&);
    DefaultCommandsContextProvider(DefaultCommandsContextProvider const&);
    DefaultCommandsContextProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefaultCommandsContextProvider() /*override*/ = default;

    virtual ::ILevel* getLevel() /*override*/;

    virtual ::NetworkIdentifier getLocalNetworkId() const /*override*/;

    virtual void onCommandExecuted(
        ::MCRESULT           result,
        ::CommandOriginType  originType,
        ::std::string const& commandName,
        ::std::string const& commandString
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ILevel* $getLevel();

    MCAPI ::NetworkIdentifier $getLocalNetworkId() const;

    MCAPI void $onCommandExecuted(
        ::MCRESULT           result,
        ::CommandOriginType  originType,
        ::std::string const& commandName,
        ::std::string const& commandString
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
