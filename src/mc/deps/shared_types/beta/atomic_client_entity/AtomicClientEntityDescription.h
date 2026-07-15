#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Beta::AtomicClientEntity {

struct AtomicClientEntityDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~AtomicClientEntityDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::AtomicClientEntity
