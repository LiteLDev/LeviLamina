#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ResultAny {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk92ee80;
    ::ll::UntypedStorage<8, 208> mUnk3edf86;
    // NOLINTEND

public:
    // prevent constructor by default
    ResultAny& operator=(ResultAny const&);
    ResultAny(ResultAny const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResultAny();

    MCNAPI explicit ResultAny(::entt::meta_any&& resultAny);

    MCNAPI ::entt::meta_any toAny() const;

    MCNAPI ::entt::meta_any toErrorAny() const;

    MCNAPI ~ResultAny();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ResultAny makeErrorFromAny(::entt::meta_any&& errorAny);

    MCNAPI static ::Scripting::ResultAny makeResultFromAny(::entt::meta_any const& resultAny);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::entt::meta_any&& resultAny);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
