#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackCapability;
// clang-format on

class PackCapabilityRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk11f2e7;
    // NOLINTEND

public:
    // prevent constructor by default
    PackCapabilityRegistry& operator=(PackCapabilityRegistry const&);
    PackCapabilityRegistry(PackCapabilityRegistry const&);
    PackCapabilityRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PackCapabilityRegistry(::std::initializer_list<::PackCapability> const& packCapabilities);

    MCAPI ~PackCapabilityRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::initializer_list<::PackCapability> const& packCapabilities);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
