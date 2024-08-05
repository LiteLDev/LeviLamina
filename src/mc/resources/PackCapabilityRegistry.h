#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackCapability.h"

class PackCapabilityRegistry {
public:
    // prevent constructor by default
    PackCapabilityRegistry& operator=(PackCapabilityRegistry const&);
    PackCapabilityRegistry(PackCapabilityRegistry const&);
    PackCapabilityRegistry();

public:
    // NOLINTBEGIN
    MCAPI explicit PackCapabilityRegistry(std::initializer_list<class PackCapability> const&);

    MCAPI std::variant<
        struct PackCapability::ValidationResult::Succeeded,
        struct PackCapability::ValidationResult::Failed,
        struct PackCapability::ValidationResult::NotFound>
    lookup(std::string_view name) const;

    MCAPI ~PackCapabilityRegistry();

    // NOLINTEND
};
