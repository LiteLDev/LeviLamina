#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ResourceFileSystem : int {
    UserPackage    = 0x0,
    AppPackage     = 0x1,
    Raw            = 0x2,
    RawPersistent  = 0x3,
    SettingsDir    = 0x4,
    ExternalDir    = 0x5,
    ServerPackage  = 0x6,
    DataDir        = 0x7,
    UserDir        = 0x8,
    ScreenshotsDir = 0x9,
    StoreCache     = 0xA,
    Invalid        = 0xB,
};
