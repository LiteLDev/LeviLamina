#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct DefinitionModifier;
// clang-format on

class DefinitionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkef59f1;
    ::ll::UntypedStorage<8, 216> mUnk69c7fe;
    ::ll::UntypedStorage<4, 4>   mUnk72aeee;
    ::ll::UntypedStorage<8, 256> mUnk729dbe;
    ::ll::UntypedStorage<8, 24>  mUnkcd2d6c;
    ::ll::UntypedStorage<8, 24>  mUnk4968e0;
    // NOLINTEND

public:
    // prevent constructor by default
    DefinitionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DefinitionEvent(::DefinitionEvent const&);

    MCAPI DefinitionEvent(::DefinitionEvent&&);

    MCAPI void evaluateEvent(::RenderParams& params, ::std::vector<::DefinitionModifier>& modifications) const;

    MCAPI ::DefinitionEvent& operator=(::DefinitionEvent const&);

    MCAPI ~DefinitionEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DefinitionEvent const&);

    MCAPI void* $ctor(::DefinitionEvent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
