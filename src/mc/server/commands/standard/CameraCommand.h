#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class CameraCommand : public ::Command {
public:
    // prevent constructor by default
    CameraCommand& operator=(CameraCommand const&);
    CameraCommand(CameraCommand const&);
    CameraCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CameraCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI bool prepareInstruction(
        struct CameraInstruction&  cameraInstruction,
        class CameraPresets const& cameraPresets,
        class CommandOrigin const& origin,
        class CommandOutput&       output
    ) const;

    MCAPI static void setup(class CommandRegistry& registry);

    MCAPI static char const* ENUM_OPTION_CLEAR;

    MCAPI static char const* ENUM_OPTION_COLOR;

    MCAPI static char const* ENUM_OPTION_DEFAULT;

    MCAPI static char const* ENUM_OPTION_EASE;

    MCAPI static char const* ENUM_OPTION_FACING;

    MCAPI static char const* ENUM_OPTION_FADE;

    MCAPI static char const* ENUM_OPTION_POS;

    MCAPI static char const* ENUM_OPTION_ROT;

    MCAPI static char const* ENUM_OPTION_SET;

    MCAPI static char const* ENUM_OPTION_TIME;

    MCAPI static char const* OPTION_CLEAR;

    MCAPI static char const* OPTION_COLOR;

    MCAPI static char const* OPTION_DEFAULT;

    MCAPI static char const* OPTION_EASE;

    MCAPI static char const* OPTION_FACING;

    MCAPI static char const* OPTION_FADE;

    MCAPI static char const* OPTION_POS;

    MCAPI static char const* OPTION_ROT;

    MCAPI static char const* OPTION_SET;

    MCAPI static char const* OPTION_TIME;

    // NOLINTEND
};
