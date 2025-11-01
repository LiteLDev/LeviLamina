#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct EditorRealmsWorldFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnke27d15;
    ::ll::UntypedStorage<8, 32> mUnk876284;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorRealmsWorldFile& operator=(EditorRealmsWorldFile const&);
    EditorRealmsWorldFile(EditorRealmsWorldFile const&);
    EditorRealmsWorldFile();
};

} // namespace Editor::Services
