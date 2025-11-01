#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

namespace Editor::Transactions {

class ScriptOperationPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk36fa7f;
    ::ll::UntypedStorage<8, 64> mUnk2c5ab7;
    ::ll::UntypedStorage<8, 64> mUnk7dcaa6;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptOperationPayload& operator=(ScriptOperationPayload const&);
    ScriptOperationPayload(ScriptOperationPayload const&);
    ScriptOperationPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptOperationPayload(
        ::std::string const&                                                        payload,
        ::std::function<::Scripting::Result_deprecated<void>(::std::string const&)> fnUndo,
        ::std::function<::Scripting::Result_deprecated<void>(::std::string const&)> fnRedo
    );

    MCNAPI ~ScriptOperationPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string const&                                                        payload,
        ::std::function<::Scripting::Result_deprecated<void>(::std::string const&)> fnUndo,
        ::std::function<::Scripting::Result_deprecated<void>(::std::string const&)> fnRedo
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Transactions
