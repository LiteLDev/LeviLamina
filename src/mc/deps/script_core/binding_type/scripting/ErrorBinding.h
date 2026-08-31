#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

namespace Scripting {

struct ErrorBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk573a59;
    ::ll::UntypedStorage<8, 16> mUnkd85588;
    ::ll::UntypedStorage<8, 24> mUnk30992f;
    ::ll::UntypedStorage<8, 24> mUnkd8aa0c;
    // NOLINTEND

public:
    // prevent constructor by default
    ErrorBinding& operator=(ErrorBinding const&);
    ErrorBinding(ErrorBinding const&);
    ErrorBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ErrorBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
