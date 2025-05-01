#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct EditorRealmsWorldSlot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk5e8fa6;
    ::ll::UntypedStorage<8, 32> mUnkdb6142;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorRealmsWorldSlot(EditorRealmsWorldSlot const&);
    EditorRealmsWorldSlot();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Services::EditorRealmsWorldSlot& operator=(::Editor::Services::EditorRealmsWorldSlot const&);

    MCNAPI ::Editor::Services::EditorRealmsWorldSlot& operator=(::Editor::Services::EditorRealmsWorldSlot&&);
    // NOLINTEND
};

} // namespace Editor::Services
