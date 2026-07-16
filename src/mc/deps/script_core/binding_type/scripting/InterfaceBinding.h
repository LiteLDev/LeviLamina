#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

namespace Scripting {

struct InterfaceBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk64d7ec;
    ::ll::UntypedStorage<8, 16> mUnk96316b;
    ::ll::UntypedStorage<8, 16> mUnke35bb1;
    ::ll::UntypedStorage<8, 24> mUnk1e9e9e;
    ::ll::UntypedStorage<8, 24> mUnk5db97e;
    ::ll::UntypedStorage<8, 24> mUnkbb4feb;
    // NOLINTEND

public:
    // prevent constructor by default
    InterfaceBinding& operator=(InterfaceBinding const&);
    InterfaceBinding(InterfaceBinding const&);
    InterfaceBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~InterfaceBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
