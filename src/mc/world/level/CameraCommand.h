#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class CameraCommand : public ::Command {

public:
    // prevent constructor by default
    CameraCommand& operator=(CameraCommand const&) = delete;
    CameraCommand(CameraCommand const&)            = delete;
    CameraCommand()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@CameraCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol
     * ?prepareInstruction\@CameraCommand\@\@QEBA_NAEAUCameraInstruction\@\@AEBVCameraPresets\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI bool
    prepareInstruction(struct CameraInstruction&, class CameraPresets const&, class CommandOrigin const&, class CommandOutput&)
        const; // NOLINT
    /**
     * @symbol ?setup\@CameraCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&); // NOLINT
    /**
     * @symbol ?ENUM_OPTION_CLEAR\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* ENUM_OPTION_CLEAR; // NOLINT
    /**
     * @symbol ?ENUM_OPTION_COLOR\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* ENUM_OPTION_COLOR; // NOLINT
    /**
     * @symbol ?ENUM_OPTION_DEFAULT\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* ENUM_OPTION_DEFAULT; // NOLINT
    /**
     * @symbol ?ENUM_OPTION_EASE\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* ENUM_OPTION_EASE; // NOLINT
    /**
     * @symbol ?ENUM_OPTION_FACING\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* ENUM_OPTION_FACING; // NOLINT
    /**
     * @symbol ?ENUM_OPTION_FADE\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* ENUM_OPTION_FADE; // NOLINT
    /**
     * @symbol ?ENUM_OPTION_POS\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* ENUM_OPTION_POS; // NOLINT
    /**
     * @symbol ?ENUM_OPTION_ROT\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* ENUM_OPTION_ROT; // NOLINT
    /**
     * @symbol ?ENUM_OPTION_SET\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* ENUM_OPTION_SET; // NOLINT
    /**
     * @symbol ?ENUM_OPTION_TIME\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* ENUM_OPTION_TIME; // NOLINT
    /**
     * @symbol ?OPTION_CLEAR\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* OPTION_CLEAR; // NOLINT
    /**
     * @symbol ?OPTION_COLOR\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* OPTION_COLOR; // NOLINT
    /**
     * @symbol ?OPTION_DEFAULT\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* OPTION_DEFAULT; // NOLINT
    /**
     * @symbol ?OPTION_EASE\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* OPTION_EASE; // NOLINT
    /**
     * @symbol ?OPTION_FACING\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* OPTION_FACING; // NOLINT
    /**
     * @symbol ?OPTION_FADE\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* OPTION_FADE; // NOLINT
    /**
     * @symbol ?OPTION_POS\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* OPTION_POS; // NOLINT
    /**
     * @symbol ?OPTION_ROT\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* OPTION_ROT; // NOLINT
    /**
     * @symbol ?OPTION_SET\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* OPTION_SET; // NOLINT
    /**
     * @symbol ?OPTION_TIME\@CameraCommand\@\@2PEBDEB
     */
    MCAPI static char const* OPTION_TIME; // NOLINT
};
