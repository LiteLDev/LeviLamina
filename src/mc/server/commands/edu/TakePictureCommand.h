#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TakePictureCommand : public ::Command {
public:
    // prevent constructor by default
    TakePictureCommand& operator=(TakePictureCommand const&);
    TakePictureCommand(TakePictureCommand const&);
    TakePictureCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~TakePictureCommand() = default;

    // vIndex: 2, symbol: ?execute@TakePictureCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@TakePictureCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
