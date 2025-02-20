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

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandsRegistryConfiguration() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandsRegistryConfiguration();

    MCAPI CommandsRegistryConfiguration(::CommandsRegistryConfiguration&&);

    MCAPI ::CommandsRegistryConfiguration& operator=(::CommandsRegistryConfiguration&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::CommandsRegistryConfiguration&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
