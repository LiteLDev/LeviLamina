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
    // symbol: ??0PackCapabilityRegistry@@QEAA@AEBV?$initializer_list@VPackCapability@@@std@@@Z
    MCAPI explicit PackCapabilityRegistry(std::initializer_list<class PackCapability> const&);

    // symbol:
    // ?lookup@PackCapabilityRegistry@@QEBA?AV?$variant@USucceeded@ValidationResult@PackCapability@@UFailed@23@UNotFound@23@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
    MCAPI std::variant<
        struct PackCapability::ValidationResult::Succeeded,
        struct PackCapability::ValidationResult::Failed,
        struct PackCapability::ValidationResult::NotFound>
    lookup(std::string_view name) const;

    // symbol: ??1PackCapabilityRegistry@@QEAA@XZ
    MCAPI ~PackCapabilityRegistry();

    // NOLINTEND
};
