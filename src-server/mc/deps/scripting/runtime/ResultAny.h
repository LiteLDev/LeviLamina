#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ResultAny {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsError;
    ::ll::TypedStorage<8, 208, ::entt::meta_any> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResultAny();

    MCAPI explicit ResultAny(::entt::meta_any&& resultAny);

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

    MCAPI void* $ctor(::entt::meta_any&& resultAny);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
