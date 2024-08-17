#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gui/screens/ScreenController.h"


class MinecraftScreenController : public ScreenController,
                                  public std::enable_shared_from_this<MinecraftScreenController> {
public:
    // prevent constructor by default
    MinecraftScreenController& operator=(MinecraftScreenController const&);
    MinecraftScreenController(MinecraftScreenController const&);
    MinecraftScreenController();

public:
    // NOLINTBEGIN

    // NOLINTEND
};
