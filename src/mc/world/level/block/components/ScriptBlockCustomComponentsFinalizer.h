#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"

// auto generated forward declare list
// clang-format off
class BlockCustomComponentsComponent;
class BlockType;
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
// clang-format on

class ScriptBlockCustomComponentsFinalizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::StackRefResult<::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>> mRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    finalizeBlock(::BlockType& block, ::std::vector<::gsl::not_null<::BlockCustomComponentsComponent*>>& customComps);

    MCNAPI ~ScriptBlockCustomComponentsFinalizer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
