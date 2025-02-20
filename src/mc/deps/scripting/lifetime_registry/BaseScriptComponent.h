#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::internal {

struct BaseScriptComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnka330d8;
    ::ll::UntypedStorage<1, 1>  mUnke616b9;
    ::ll::UntypedStorage<8, 8>  mUnk3eb531;
    ::ll::UntypedStorage<8, 8>  mUnkab9030;
    ::ll::UntypedStorage<8, 64> mUnkecd3c1;
    ::ll::UntypedStorage<8, 8>  mUnkabf9b0;
    ::ll::UntypedStorage<4, 4>  mUnkb11791;
    ::ll::UntypedStorage<4, 4>  mUnk9bc6bc;
    ::ll::UntypedStorage<8, 8>  mUnk200d9b;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseScriptComponent& operator=(BaseScriptComponent const&);
    BaseScriptComponent(BaseScriptComponent const&);
    BaseScriptComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseScriptComponent(::Scripting::internal::BaseScriptComponent&&);

    MCAPI ::Scripting::internal::BaseScriptComponent& operator=(::Scripting::internal::BaseScriptComponent&&);

    MCAPI ~BaseScriptComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::internal::BaseScriptComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::internal
