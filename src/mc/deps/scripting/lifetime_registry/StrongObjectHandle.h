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
    MCAPI void _addReference();

    MCAPI void _removeReference();

    MCFOLD ::Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCAPI ::Scripting::StrongObjectHandle& operator=(::Scripting::StrongObjectHandle const& rhs);

    MCAPI ::Scripting::StrongObjectHandle& operator=(::Scripting::StrongObjectHandle&& rhs);

    MCAPI ~StrongObjectHandle();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Scripting::StrongObjectHandle const& InvalidHandle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
