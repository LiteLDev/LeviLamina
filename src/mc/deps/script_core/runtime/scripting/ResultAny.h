#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ResultAny {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk92ee80;
    ::ll::UntypedStorage<8, 64> mUnk3edf86;
    // NOLINTEND

public:
    // prevent constructor by default
    ResultAny(ResultAny const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::ResultAny& operator=(::Scripting::ResultAny&& rhs);

    MCNAPI ::Scripting::ResultAny& operator=(::Scripting::ResultAny const& rhs);

    MCNAPI ::entt::meta_any toAny();

    MCNAPI ::entt::meta_any toAny() const;

    MCNAPI ::entt::meta_any toErrorAny() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ResultAny makeErrorFromAny(::entt::meta_any&& errorAny);

    MCNAPI static ::Scripting::ResultAny makeResultFromAny(::entt::meta_any const& resultAny);
    // NOLINTEND
};

} // namespace Scripting
