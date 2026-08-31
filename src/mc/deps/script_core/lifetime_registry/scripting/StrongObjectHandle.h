#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakObjectHandle; }
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
    StrongObjectHandle& operator=(StrongObjectHandle const&);
    StrongObjectHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StrongObjectHandle(::Scripting::StrongObjectHandle const& rhs);

    MCNAPI ::Scripting::StrongObjectHandle& operator=(::Scripting::StrongObjectHandle&& rhs);

    MCNAPI bool operator==(::Scripting::StrongObjectHandle const& rhs) const;

    MCNAPI bool valid() const;

    MCNAPI ~StrongObjectHandle();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::StrongObjectHandle promote(::Scripting::WeakObjectHandle const& weakHandle);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Scripting::StrongObjectHandle const& InvalidHandle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::StrongObjectHandle const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
