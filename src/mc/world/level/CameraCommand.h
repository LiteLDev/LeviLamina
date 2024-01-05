#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class CameraCommand : public ::Command {
public:
    // prevent constructor by default
    CameraCommand& operator=(CameraCommand const&);
    CameraCommand(CameraCommand const&);
    CameraCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CameraCommand@@UEAA@XZ
    virtual ~CameraCommand() = default;

    // vIndex: 2, symbol: ?execute@CameraCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol:
    // ?prepareInstruction@CameraCommand@@QEBA_NAEAUCameraInstruction@@AEBVCameraPresets@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI bool prepareInstruction(
        struct CameraInstruction&,
        class CameraPresets const&,
        class CommandOrigin const& origin,
        class CommandOutput&       output
    ) const;

    // symbol: ?setup@CameraCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // symbol: ?ENUM_OPTION_CLEAR@CameraCommand@@2PEBDEB
    MCAPI static char const* ENUM_OPTION_CLEAR;

    // symbol: ?ENUM_OPTION_COLOR@CameraCommand@@2PEBDEB
    MCAPI static char const* ENUM_OPTION_COLOR;

    // symbol: ?ENUM_OPTION_DEFAULT@CameraCommand@@2PEBDEB
    MCAPI static char const* ENUM_OPTION_DEFAULT;

    // symbol: ?ENUM_OPTION_EASE@CameraCommand@@2PEBDEB
    MCAPI static char const* ENUM_OPTION_EASE;

    // symbol: ?ENUM_OPTION_FACING@CameraCommand@@2PEBDEB
    MCAPI static char const* ENUM_OPTION_FACING;

    // symbol: ?ENUM_OPTION_FADE@CameraCommand@@2PEBDEB
    MCAPI static char const* ENUM_OPTION_FADE;

    // symbol: ?ENUM_OPTION_POS@CameraCommand@@2PEBDEB
    MCAPI static char const* ENUM_OPTION_POS;

    // symbol: ?ENUM_OPTION_ROT@CameraCommand@@2PEBDEB
    MCAPI static char const* ENUM_OPTION_ROT;

    // symbol: ?ENUM_OPTION_SET@CameraCommand@@2PEBDEB
    MCAPI static char const* ENUM_OPTION_SET;

    // symbol: ?ENUM_OPTION_TIME@CameraCommand@@2PEBDEB
    MCAPI static char const* ENUM_OPTION_TIME;

    // symbol: ?OPTION_CLEAR@CameraCommand@@2PEBDEB
    MCAPI static char const* OPTION_CLEAR;

    // symbol: ?OPTION_COLOR@CameraCommand@@2PEBDEB
    MCAPI static char const* OPTION_COLOR;

    // symbol: ?OPTION_DEFAULT@CameraCommand@@2PEBDEB
    MCAPI static char const* OPTION_DEFAULT;

    // symbol: ?OPTION_EASE@CameraCommand@@2PEBDEB
    MCAPI static char const* OPTION_EASE;

    // symbol: ?OPTION_FACING@CameraCommand@@2PEBDEB
    MCAPI static char const* OPTION_FACING;

    // symbol: ?OPTION_FADE@CameraCommand@@2PEBDEB
    MCAPI static char const* OPTION_FADE;

    // symbol: ?OPTION_POS@CameraCommand@@2PEBDEB
    MCAPI static char const* OPTION_POS;

    // symbol: ?OPTION_ROT@CameraCommand@@2PEBDEB
    MCAPI static char const* OPTION_ROT;

    // symbol: ?OPTION_SET@CameraCommand@@2PEBDEB
    MCAPI static char const* OPTION_SET;

    // symbol: ?OPTION_TIME@CameraCommand@@2PEBDEB
    MCAPI static char const* OPTION_TIME;

    // NOLINTEND
};
