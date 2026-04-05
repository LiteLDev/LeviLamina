#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct EditorRealmsWorldSlot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk5e8fa6;
    ::ll::UntypedStorage<8, 32> mUnk7ba8bc;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorRealmsWorldSlot(EditorRealmsWorldSlot const&);
    EditorRealmsWorldSlot();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Services::EditorRealmsWorldSlot& operator=(::Editor::Services::EditorRealmsWorldSlot&&);

    MCNAPI ::Editor::Services::EditorRealmsWorldSlot& operator=(::Editor::Services::EditorRealmsWorldSlot const&);

#ifdef LL_PLAT_C
    MCNAPI ~EditorRealmsWorldSlot();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Editor::Services
