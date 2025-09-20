#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickDeathSettings;
// clang-format on

class TickDeathSettingsManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5fba23;
    // NOLINTEND

public:
    // prevent constructor by default
    TickDeathSettingsManager& operator=(TickDeathSettingsManager const&);
    TickDeathSettingsManager(TickDeathSettingsManager const&);
    TickDeathSettingsManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::TickDeathSettings const& getTickDeathSettings() const;

    MCNAPI void setTickDeathSettings(::TickDeathSettings const& settings) const;
    // NOLINTEND
};
