#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"

namespace Editor::Transactions {

class ScriptOperationPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk36fa7f;
    ::ll::UntypedStorage<8, 64> mUnk965d1b;
    ::ll::UntypedStorage<8, 64> mUnk162184;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptOperationPayload& operator=(ScriptOperationPayload const&);
    ScriptOperationPayload(ScriptOperationPayload const&);
    ScriptOperationPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptOperationPayload(
        ::std::string const&                                             payload,
        ::std::function<::Scripting::Result<void>(::std::string const&)> fnUndo,
        ::std::function<::Scripting::Result<void>(::std::string const&)> fnRedo
    );

    MCAPI ~ScriptOperationPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                                             payload,
        ::std::function<::Scripting::Result<void>(::std::string const&)> fnUndo,
        ::std::function<::Scripting::Result<void>(::std::string const&)> fnRedo
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Transactions
