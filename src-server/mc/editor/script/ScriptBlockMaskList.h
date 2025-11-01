#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::BlockMask { class BlockMaskList; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptBlockMaskList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb7a318;
    ::ll::UntypedStorage<8, 24> mUnkf80502;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockMaskList& operator=(ScriptBlockMaskList const&);
    ScriptBlockMaskList(ScriptBlockMaskList const&);
    ScriptBlockMaskList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<::Editor::BlockMask::BlockMaskList> getBlockMaskList() const;

    MCNAPI ~ScriptBlockMaskList();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindEnums();

    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
