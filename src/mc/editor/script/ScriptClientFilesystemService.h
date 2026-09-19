#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptClientFilesystemService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkee3a10;
    ::ll::UntypedStorage<8, 16> mUnk468692;
    ::ll::UntypedStorage<1, 1>  mUnk4f290c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClientFilesystemService& operator=(ScriptClientFilesystemService const&);
    ScriptClientFilesystemService(ScriptClientFilesystemService const&);
    ScriptClientFilesystemService();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindFilePickerErrorEnum();

    MCNAPI static ::Scripting::InterfaceBinding bindFileSelectorOptions();

    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
