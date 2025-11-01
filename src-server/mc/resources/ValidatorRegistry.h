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
    struct ValidatorRegisterer {
    };
    
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
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ValidatorRegistryValidators();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkdc1378;
    // NOLINTEND

public:
    // prevent constructor by default
    ValidatorRegistry& operator=(ValidatorRegistry const&);
    ValidatorRegistry(ValidatorRegistry const&);
    ValidatorRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ValidatorRegistry() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::NonOwnerPointer<::ValidatorRegistry> _get();

    MCNAPI static bool findValidators(::std::string const& validatorName, ::ValidatorRegistry::ValidatorRegistryValidators& validatorPair);

    MCNAPI static ::std::unordered_map<::std::string, ::ValidatorRegistry::ValidatorRegistryValidators> const& getValidatorMap();

    MCNAPI static void registerValidators(::std::string_view validatorName, ::std::function<::ContentTierIncompatibleReason(::PackInstance const&, ::ContentTierInfo const&)> packValidator, ::std::function<::ContentTierIncompatibleReason(::SubpackInfo const&, ::ContentTierInfo const&)> subpackValidator);
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
