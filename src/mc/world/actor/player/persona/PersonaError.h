#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

enum class PersonaError : uint {
    NoError                  = 0,
    ItemSelection            = 1,
    InvalidPersona           = 3,
    LoadingAppearanceTimeOut = 4,
    DesyncedState            = 5,
    DownloadImportFailed     = 6,
    DownloadImportCancelled  = 7,
    MissingDownloader        = 8,
    Size                     = 9,
};

}
