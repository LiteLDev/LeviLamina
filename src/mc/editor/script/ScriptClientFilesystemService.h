#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/PayloadStoreHelper.h"

namespace Editor::ScriptModule {

class ScriptClientFilesystemService : public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkb72b20;
    ::ll::UntypedStorage<1, 1>  mUnkf91a98;
    ::ll::UntypedStorage<8, 16> mUnk4c54b2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClientFilesystemService& operator=(ScriptClientFilesystemService const&);
    ScriptClientFilesystemService(ScriptClientFilesystemService const&);
    ScriptClientFilesystemService();
};

} // namespace Editor::ScriptModule
