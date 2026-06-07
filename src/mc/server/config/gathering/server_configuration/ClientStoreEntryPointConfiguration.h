#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ServerConfiguration {

struct ClientStoreEntryPointConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk255c6c;
    ::ll::UntypedStorage<8, 32> mUnk555114;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientStoreEntryPointConfiguration& operator=(ClientStoreEntryPointConfiguration const&);
    ClientStoreEntryPointConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientStoreEntryPointConfiguration(::ServerConfiguration::ClientStoreEntryPointConfiguration const&);

    MCNAPI ::ServerConfiguration::ClientStoreEntryPointConfiguration&
    operator=(::ServerConfiguration::ClientStoreEntryPointConfiguration&&);

    MCNAPI ~ClientStoreEntryPointConfiguration();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerConfiguration::ClientStoreEntryPointConfiguration const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ServerConfiguration
