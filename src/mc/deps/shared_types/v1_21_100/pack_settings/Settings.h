#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_100::PackSettingsDefinition {

struct Settings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka21638;
    ::ll::UntypedStorage<8, 16> mUnkc37b2a;
    // NOLINTEND

public:
    // prevent constructor by default
    Settings& operator=(Settings const&);
    Settings(Settings const&);
    Settings();
};

} // namespace SharedTypes::v1_21_100::PackSettingsDefinition
