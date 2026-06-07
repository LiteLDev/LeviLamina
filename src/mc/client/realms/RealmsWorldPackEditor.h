#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

class RealmsWorldPackEditor {
public:
    // RealmsWorldPackEditor inner types declare
    // clang-format off
    struct FetchStatus;
    class RealmsWorldPackEditorImpl;
    struct SaveStatus;
    // clang-format on

    // RealmsWorldPackEditor inner types define
    enum class ProcessState : int {};

    struct FetchStatus {};

    class RealmsWorldPackEditorImpl {};

    struct SaveStatus {};
};

} // namespace Realms
