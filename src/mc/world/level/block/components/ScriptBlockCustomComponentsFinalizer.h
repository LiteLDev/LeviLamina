#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"

// auto generated forward declare list
// clang-format off
class BlockCustomComponentsComponent;
class BlockLegacy;
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
// clang-format on

class ScriptBlockCustomComponentsFinalizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk871957;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentsFinalizer& operator=(ScriptBlockCustomComponentsFinalizer const&);
    ScriptBlockCustomComponentsFinalizer(ScriptBlockCustomComponentsFinalizer const&);
    ScriptBlockCustomComponentsFinalizer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptBlockCustomComponentsFinalizer(
        ::StackRefResult<::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>&& registry
    );

    MCAPI void
    finalizeBlock(::BlockLegacy& block, ::std::vector<::gsl::not_null<::BlockCustomComponentsComponent*>>& customComps);

    MCAPI ~ScriptBlockCustomComponentsFinalizer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::StackRefResult<::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>&& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
