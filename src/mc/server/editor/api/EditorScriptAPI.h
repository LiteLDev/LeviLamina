#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::API {

class EditorScriptAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkb8dbe7;
    ::ll::UntypedStorage<8, 32> mUnk4e6ce7;
    ::ll::UntypedStorage<8, 32> mUnk2079d7;
    ::ll::UntypedStorage<8, 32> mUnk2caeec;
    ::ll::UntypedStorage<8, 16> mUnk263bcc;
    ::ll::UntypedStorage<8, 16> mUnk74450d;
    ::ll::UntypedStorage<8, 8>  mUnk8907b6;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorScriptAPI& operator=(EditorScriptAPI const&);
    EditorScriptAPI(EditorScriptAPI const&);
    EditorScriptAPI();
};

} // namespace Editor::API
