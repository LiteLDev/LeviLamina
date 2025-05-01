#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptTransferCollectionNameData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka5ad29;
    ::ll::UntypedStorage<8, 32> mUnk2037f3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransferCollectionNameData(ScriptTransferCollectionNameData const&);
    ScriptTransferCollectionNameData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptTransferCollectionNameData&
    operator=(::Editor::ScriptModule::ScriptTransferCollectionNameData&&);

    MCNAPI ::Editor::ScriptModule::ScriptTransferCollectionNameData&
    operator=(::Editor::ScriptModule::ScriptTransferCollectionNameData const&);

    MCNAPI ~ScriptTransferCollectionNameData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptTransferCollectionNameData>
    bindInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
