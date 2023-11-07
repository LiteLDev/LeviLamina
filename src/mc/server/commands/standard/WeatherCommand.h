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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~WeatherCommand() = default;

    // vIndex: 2, symbol: ?execute@WeatherCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@WeatherCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
