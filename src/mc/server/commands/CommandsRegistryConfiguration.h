#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CommandsRegistryConfiguration : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::CommandPermissionLevel>> mCommandPermissionLevels;
    ::ll::TypedStorage<1, 2, ::std::optional<::CommandPermissionLevel>> mDefaultCommandPermissionLevel;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    CommandsRegistryConfiguration& operator=(CommandsRegistryConfiguration const&);
    CommandsRegistryConfiguration(CommandsRegistryConfiguration const&);

#else // LL_PLAT_C
public:
    // prevent constructor by default
    CommandsRegistryConfiguration& operator=(CommandsRegistryConfiguration const&);
    CommandsRegistryConfiguration(CommandsRegistryConfiguration const&);
    CommandsRegistryConfiguration();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandsRegistryConfiguration() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI CommandsRegistryConfiguration();
#endif

    MCAPI CommandsRegistryConfiguration(::CommandsRegistryConfiguration&&);

#ifdef LL_PLAT_S
    MCAPI ::CommandsRegistryConfiguration& operator=(::CommandsRegistryConfiguration&&);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor();
#endif

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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
