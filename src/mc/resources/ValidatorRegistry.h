#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
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
    public:
        // prevent constructor by default
        ValidatorRegisterer& operator=(ValidatorRegisterer const&);
        ValidatorRegisterer(ValidatorRegisterer const&);
        ValidatorRegisterer();
    };

    class ValidatorRegistryValidators {
    public:
        // prevent constructor by default
        ValidatorRegistryValidators& operator=(ValidatorRegistryValidators const&);
        ValidatorRegistryValidators(ValidatorRegistryValidators const&);
        ValidatorRegistryValidators();

    public:
        // NOLINTBEGIN
        MCAPI ~ValidatorRegistryValidators();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ValidatorRegistry& operator=(ValidatorRegistry const&);
    ValidatorRegistry(ValidatorRegistry const&);
    ValidatorRegistry();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ValidatorRegistry() = default;

    MCAPI static bool findValidators(
        std::string const&                                    validatorName,
        class ValidatorRegistry::ValidatorRegistryValidators& validatorPair
    );

    MCAPI static void registerValidators(
        std::string_view validatorName,
        std::function<class ContentTierIncompatibleReason(class PackInstance const&, class ContentTierInfo const&)>
            packValidator,
        std::function<class ContentTierIncompatibleReason(struct SubpackInfo const&, class ContentTierInfo const&)>
            subpackValidator
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class Bedrock::NonOwnerPointer<class ValidatorRegistry> _get();

    // NOLINTEND
};
