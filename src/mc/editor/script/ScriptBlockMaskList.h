#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/OperationType.h"
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

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
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBindingBuilder<::std::string, ::Editor::BlockMask::OperationType> bindEnums();

    MCNAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptBlockMaskList> bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
