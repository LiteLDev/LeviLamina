#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class CPUProfileTokenMarker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk52a7e8;
    ::ll::UntypedStorage<8, 24> mUnk246fc2;
    ::ll::UntypedStorage<4, 4>  mUnk646fb4;
    ::ll::UntypedStorage<8, 24> mUnkb7e32e;
    ::ll::UntypedStorage<8, 32> mUnkdf6bf6;
    // NOLINTEND

public:
    // prevent constructor by default
    CPUProfileTokenMarker& operator=(CPUProfileTokenMarker const&);
    CPUProfileTokenMarker(CPUProfileTokenMarker const&);
    CPUProfileTokenMarker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Core::Profile::CPUProfileTokenMarker& operator=(::Core::Profile::CPUProfileTokenMarker&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::std::add_lvalue_reference_t<char const[]> CLONE_WARNING();

    MCNAPI_C static ::std::add_lvalue_reference_t<char const[]> EMPTY_WARNING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(char const* group, char const* label, uint color);
    // NOLINTEND
};

} // namespace Core::Profile
