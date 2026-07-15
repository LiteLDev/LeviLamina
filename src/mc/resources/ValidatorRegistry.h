#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentTierIncompatibleReason;
class ContentTierInfo;
class PackInstance;
struct SubpackInfo;
// clang-format on

class ValidatorRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ValidatorRegistry inner types declare
    // clang-format off
    struct ValidatorRegisterer;
    class ValidatorRegistryValidators;
    // clang-format on

    // ValidatorRegistry inner types define
    struct ValidatorRegisterer {};

    class ValidatorRegistryValidators {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk25ba02;
        ::ll::UntypedStorage<8, 64> mUnk317db0;
        // NOLINTEND

    public:
        // prevent constructor by default
        ValidatorRegistryValidators& operator=(ValidatorRegistryValidators const&);
        ValidatorRegistryValidators(ValidatorRegistryValidators const&);
        ValidatorRegistryValidators();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8ed098;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ValidatorRegistry& operator=(ValidatorRegistry const&);
    ValidatorRegistry(ValidatorRegistry const&);
    ValidatorRegistry();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ValidatorRegistry& operator=(ValidatorRegistry const&);
    ValidatorRegistry(ValidatorRegistry const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ValidatorRegistry();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::Bedrock::NonOwnerPointer<::ValidatorRegistry> _get();
#endif

    MCNAPI static ::std::unordered_map<::std::string, ::ValidatorRegistry::ValidatorRegistryValidators> const&
    getValidatorMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
