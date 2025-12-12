#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_100::PackSettingsDefinition {

struct Settings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka21638;
    ::ll::UntypedStorage<8, 16> mUnk50ebaa;
    ::ll::UntypedStorage<8, 16> mUnk5fa28c;
    // NOLINTEND

public:
    // prevent constructor by default
    Settings& operator=(Settings const&);
    Settings(Settings const&);
    Settings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_100::PackSettingsDefinition::Settings&
    operator=(::SharedTypes::v1_21_100::PackSettingsDefinition::Settings&&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100::PackSettingsDefinition
