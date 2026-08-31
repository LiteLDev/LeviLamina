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

public:
    // prevent constructor by default
    CPUProfileTokenMarker& operator=(CPUProfileTokenMarker const&);
    CPUProfileTokenMarker(CPUProfileTokenMarker const&);
    CPUProfileTokenMarker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CPUProfileTokenMarker(char const* group, ::Bedrock::Profiler::details::StaticProfLabel label, uint color);

    MCNAPI ::Core::Profile::CPUProfileTokenMarker& operator=(::Core::Profile::CPUProfileTokenMarker&& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(char const* group, ::Bedrock::Profiler::details::StaticProfLabel label, uint color);
    // NOLINTEND
};

} // namespace Core::Profile
