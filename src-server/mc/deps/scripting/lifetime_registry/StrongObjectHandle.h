#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class StrongObjectHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk312e65;
    ::ll::UntypedStorage<8, 16> mUnkd70ff5;
    // NOLINTEND

public:
    // prevent constructor by default
    StrongObjectHandle(StrongObjectHandle const&);
    StrongObjectHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _removeReference();

    MCNAPI ::Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCNAPI ::Scripting::StrongObjectHandle& operator=(::Scripting::StrongObjectHandle const& rhs);

    MCNAPI ::Scripting::StrongObjectHandle& operator=(::Scripting::StrongObjectHandle&& rhs);

    MCNAPI ~StrongObjectHandle();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Scripting::StrongObjectHandle const& InvalidHandle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
