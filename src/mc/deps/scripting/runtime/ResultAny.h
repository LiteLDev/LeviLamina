#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ResultAny {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>              mIsError;
    ::ll::TypedStorage<8, 64, ::entt::meta_any> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ResultAny(ResultAny const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResultAny();

    MCFOLD ::Scripting::ResultAny& operator=(::Scripting::ResultAny&& rhs);

    MCAPI ::Scripting::ResultAny& operator=(::Scripting::ResultAny const& rhs);

    MCAPI ::entt::meta_any toAny();

    MCAPI ::entt::meta_any toAny() const;

    MCAPI ::entt::meta_any toErrorAny() const;
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
    MCFOLD void* $ctor();
    // NOLINTEND
};

} // namespace Scripting
