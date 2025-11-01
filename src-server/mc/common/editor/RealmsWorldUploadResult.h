#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

enum class RealmsWorldUploadResult : int {
    Unknown = 0,
    Success = 1,
    ExportWorldFailure = 2,
    UploadWorldFailure = 3,
    EditorSystemFailure = 4,
    WorldUploadBusy = 5,
    WorldNameNonCompliant = 6,
};

}
