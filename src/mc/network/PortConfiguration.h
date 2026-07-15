#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
struct PortMappingParseOptions;
// clang-format on

struct PortConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk86eb6b;
    ::ll::UntypedStorage<8, 32> mUnk6d74de;
    ::ll::UntypedStorage<2, 2>  mUnkfc378d;
    ::ll::UntypedStorage<8, 24> mUnk6ed178;
    ::ll::UntypedStorage<2, 2>  mUnk60ef67;
    ::ll::UntypedStorage<2, 2>  mUnk9f06c5;
    // NOLINTEND

public:
    // prevent constructor by default
    PortConfiguration& operator=(PortConfiguration const&);
    PortConfiguration(PortConfiguration const&);
    PortConfiguration();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ::Bedrock::Result<void, ::std::string>
    parsePortMappings(::std::string_view value, ::PortMappingParseOptions const& options);
#endif

    MCNAPI ~PortConfiguration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
