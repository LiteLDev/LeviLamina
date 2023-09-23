#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackSettingsFactory {
public:
    // prevent constructor by default
    PackSettingsFactory& operator=(PackSettingsFactory const&);
    PackSettingsFactory(PackSettingsFactory const&);
    PackSettingsFactory();

public:
    // NOLINTBEGIN
    // symbol: ?getPackSettings@PackSettingsFactory@@QEAAPEAVPackSettings@@AEBVPackManifest@@@Z
    MCAPI class PackSettings* getPackSettings(class PackManifest const&);

    // NOLINTEND
};
