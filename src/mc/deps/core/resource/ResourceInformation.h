#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ResourceInformation {
public:
    // ResourceInformation inner types define
    enum class ResourceType {};

public:
    // prevent constructor by default
    ResourceInformation& operator=(ResourceInformation const&);
    ResourceInformation();

public:
    // NOLINTBEGIN
    MCAPI ResourceInformation(class ResourceInformation const&);

    MCAPI ResourceInformation(
        std::string const&      description,
        class SemVersion const& version,
        class mce::UUID const&  uuid,
        std::string const&      type,
        std::string const&      language,
        std::string const&      entry
    );

    MCAPI ResourceInformation(
        std::string const&                  description,
        class SemVersion const&             version,
        class mce::UUID const&              uuid,
        ::ResourceInformation::ResourceType type,
        std::string const&                  language,
        std::string const&                  entry
    );

    MCAPI bool satisfies(struct PackIdVersion const& pack) const;

    MCAPI ~ResourceInformation();

    MCAPI static ::ResourceInformation::ResourceType ResourceTypeFromString(std::string const& value);

    MCAPI static std::string const& StringFromResourceType(::ResourceInformation::ResourceType value);

    // NOLINTEND
};
