#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/FacingResult.h"
#include "mc/server/commands/ServerCommand.h"

class SummonCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    SummonCommand& operator=(SummonCommand const&);
    SummonCommand(SummonCommand const&);
    SummonCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SummonCommand();

    // vIndex: 2, symbol: ?execute@SummonCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@SummonCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getFacingDirection@SummonCommand@@AEBA?AW4FacingResult@RotationCommandUtils@@AEBVCommandOrigin@@AEAVCommandOutput@@AEAVVec3@@@Z
    MCAPI ::RotationCommandUtils::FacingResult
    _getFacingDirection(class CommandOrigin const&, class CommandOutput&, class Vec3&) const;

    // NOLINTEND
};
