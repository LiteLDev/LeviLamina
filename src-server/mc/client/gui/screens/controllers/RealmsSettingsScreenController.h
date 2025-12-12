#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RealmsSettingsScreenController {
public:
    // RealmsSettingsScreenController inner types declare
    // clang-format off
    struct DelayedStandardModalScreenData;
    struct RealmsVersionState;
    struct SaveStatusTracker;
    // clang-format on

    // RealmsSettingsScreenController inner types define
    enum class PurchaseIntent : int {};

    enum class RealmsSaveAction : int {};

    enum class SaveType : int {};

    struct DelayedStandardModalScreenData {};

    struct RealmsVersionState {};

    struct SaveStatusTracker {};
};
