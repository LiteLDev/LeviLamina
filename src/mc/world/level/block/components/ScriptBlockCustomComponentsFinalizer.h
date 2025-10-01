#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockCustomComponentsComponent;
class BlockType;
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
    MCAPI void
    finalizeBlock(::BlockType& block, ::std::vector<::gsl::not_null<::BlockCustomComponentsComponent*>>& customComps);

    MCAPI ~ScriptBlockCustomComponentsFinalizer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
