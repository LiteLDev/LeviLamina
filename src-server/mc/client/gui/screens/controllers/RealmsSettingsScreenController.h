#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RealmsSettingsScreenController {
public:
    // RealmsSettingsScreenController inner types declare
    // clang-format off
    struct SaveStatusTracker;
    struct RealmsVersionState;
    struct DelayedStandardModalScreenData;
    // clang-format on

    // RealmsSettingsScreenController inner types define
    enum class PurchaseIntent : int {};

    enum class SaveType : int {};

    enum class RealmsSaveAction : int {};

    struct SaveStatusTracker {};

    struct RealmsVersionState {};

    struct DelayedStandardModalScreenData {};
};
