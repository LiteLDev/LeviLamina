#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackCapability.h"

// auto generated forward declare list
// clang-format off
class PackCapability;
// clang-format on

class PackCapabilityRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk27dd51;
    // NOLINTEND

public:
    // prevent constructor by default
    PackCapabilityRegistry& operator=(PackCapabilityRegistry const&);
    PackCapabilityRegistry(PackCapabilityRegistry const&);
    PackCapabilityRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PackCapabilityRegistry(::std::initializer_list<::PackCapability> const& packCapabilities);

    MCNAPI ::std::variant<
        ::PackCapability::ValidationResult::Succeeded,
        ::PackCapability::ValidationResult::Failed,
        ::PackCapability::ValidationResult::NotFound>
    lookup(::std::string_view name) const;

    MCNAPI ~PackCapabilityRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::initializer_list<::PackCapability> const& packCapabilities);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
