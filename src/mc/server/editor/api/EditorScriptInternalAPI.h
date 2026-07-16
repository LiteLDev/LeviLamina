#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::API {

class EditorScriptInternalAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6c34da;
    ::ll::UntypedStorage<8, 40> mUnk26f8ed;
    ::ll::UntypedStorage<8, 32> mUnk72f340;
    ::ll::UntypedStorage<8, 32> mUnk24869d;
    ::ll::UntypedStorage<8, 8>  mUnk3d92dd;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorScriptInternalAPI& operator=(EditorScriptInternalAPI const&);
    EditorScriptInternalAPI(EditorScriptInternalAPI const&);
    EditorScriptInternalAPI();
};

} // namespace Editor::API
