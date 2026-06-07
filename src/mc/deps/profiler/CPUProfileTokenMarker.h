#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiler::details { struct StaticProfLabel; }
// clang-format on

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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    CPUProfileTokenMarker& operator=(CPUProfileTokenMarker const&);
    CPUProfileTokenMarker(CPUProfileTokenMarker const&);
    CPUProfileTokenMarker();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    CPUProfileTokenMarker& operator=(CPUProfileTokenMarker const&);
    CPUProfileTokenMarker();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI CPUProfileTokenMarker(::Core::Profile::CPUProfileTokenMarker const& rhs);

    MCNAPI CPUProfileTokenMarker(char const* group, char const* label, uint color);
#endif

    MCNAPI CPUProfileTokenMarker(char const* group, ::Bedrock::Profiler::details::StaticProfLabel label, uint color);

    MCNAPI ::Core::Profile::CPUProfileTokenMarker& operator=(::Core::Profile::CPUProfileTokenMarker&& rhs);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> CLONE_WARNING();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> EMPTY_WARNING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Core::Profile::CPUProfileTokenMarker const& rhs);

    MCNAPI void* $ctor(char const* group, char const* label, uint color);
#endif

    MCNAPI void* $ctor(char const* group, ::Bedrock::Profiler::details::StaticProfLabel label, uint color);
    // NOLINTEND
};

} // namespace Core::Profile
