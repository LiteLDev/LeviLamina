#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class WeatherCommand : public ::Command {
public:
    // WeatherCommand inner types define
    enum class WeatherType : int {
        Clear   = 0,
        Rain    = 1,
        Thunder = 2,
    };

    enum class WeatherRequest : int {
        Set   = 0,
        Query = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk33f1d9;
    ::ll::UntypedStorage<4, 4> mUnkecacd5;
    ::ll::UntypedStorage<4, 4> mUnkc5b71d;
    // NOLINTEND

public:
    // prevent constructor by default
    WeatherCommand& operator=(WeatherCommand const&);
    WeatherCommand(WeatherCommand const&);
    WeatherCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~WeatherCommand() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
