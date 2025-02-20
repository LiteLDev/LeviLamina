#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ResultAny {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk92ee80;
    ::ll::UntypedStorage<8, 192> mUnk3edf86;
    // NOLINTEND

public:
    // prevent constructor by default
    ResultAny& operator=(ResultAny const&);
    ResultAny(ResultAny const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResultAny();

    MCAPI ::entt::meta_any toAny() const;

    MCAPI ::entt::meta_any toErrorAny() const;

    MCAPI ~ResultAny();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ResultAny makeErrorFromAny(::entt::meta_any&& errorAny);

    MCAPI static ::Scripting::ResultAny makeResultFromAny(::entt::meta_any const& resultAny);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
