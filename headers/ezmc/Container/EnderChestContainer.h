#pragma once

#include "FillingContainer.h"

class EnderChestContainer : public FillingContainer {
    MCAPI virtual void startOpen(Player&) override;
    MCAPI virtual void stopOpen(Player&) override;
};