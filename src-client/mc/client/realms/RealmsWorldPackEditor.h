#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct RealmsWorldPackEditor {
public:
    // RealmsWorldPackEditor inner types declare
    // clang-format off
    struct FetchStatus;
    struct RealmsWorldContentState;
    struct RealmsWorldPackEditorImpl;
    struct SaveStatus;
    // clang-format on

    // RealmsWorldPackEditor inner types define
    enum class ProcessState : int {};

    enum class RealmsWorldPackEditorState : int {};

    struct FetchStatus {};

    struct RealmsWorldContentState {};

    struct RealmsWorldPackEditorImpl {};

    struct SaveStatus {};
};

} // namespace Realms
