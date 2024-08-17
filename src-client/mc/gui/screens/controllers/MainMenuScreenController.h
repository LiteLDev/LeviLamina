#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gui/screens/controllers/MinecraftScreenController.h"


class MainMenuScreenController : public MinecraftScreenController {
public:
    // prevent constructor by default
    MainMenuScreenController& operator=(MainMenuScreenController const&);
    MainMenuScreenController(MainMenuScreenController const&);
    MainMenuScreenController();

public:
    // NOLINTBEGIN

    // NOLINTEND
};
