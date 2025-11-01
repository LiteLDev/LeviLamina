#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

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
    ScriptTransferCollectionNameData& operator=(ScriptTransferCollectionNameData const&);
    ScriptTransferCollectionNameData(ScriptTransferCollectionNameData const&);
    ScriptTransferCollectionNameData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptTransferCollectionNameData& operator=(::Editor::ScriptModule::ScriptTransferCollectionNameData&&);

    MCNAPI ~ScriptTransferCollectionNameData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
