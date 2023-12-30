#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class WeatherCommand : public ::Command {
public:
    // prevent constructor by default
    WeatherCommand& operator=(WeatherCommand const&);
    WeatherCommand(WeatherCommand const&);
    WeatherCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WeatherCommand@@UEAA@XZ
    virtual ~WeatherCommand() = default;

    // vIndex: 2, symbol: ?execute@WeatherCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@WeatherCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
