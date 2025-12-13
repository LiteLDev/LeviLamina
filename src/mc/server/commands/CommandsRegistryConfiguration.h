#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CommandsRegistryConfiguration : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk6a6a1f;
    ::ll::UntypedStorage<1, 2>  mUnk2b8528;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandsRegistryConfiguration& operator=(CommandsRegistryConfiguration const&);
    CommandsRegistryConfiguration(CommandsRegistryConfiguration const&);
    CommandsRegistryConfiguration();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~CommandsRegistryConfiguration() /*override*/;
#else // LL_PLAT_C
    virtual ~CommandsRegistryConfiguration() /*override*/ = default;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandsRegistryConfiguration(::CommandsRegistryConfiguration&&);

    MCNAPI_S ::CommandsRegistryConfiguration& operator=(::CommandsRegistryConfiguration&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_S static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CommandsRegistryConfiguration&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
