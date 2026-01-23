#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

namespace RewindSimulation {

class ExternalDataSwapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk715c15;
    ::ll::UntypedStorage<8, 8> mUnk3fc000;
    ::ll::UntypedStorage<8, 8> mUnkbe32a4;
    ::ll::UntypedStorage<8, 8> mUnk6bac2b;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalDataSwapper& operator=(ExternalDataSwapper const&);
    ExternalDataSwapper(ExternalDataSwapper const&);
    ExternalDataSwapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit ExternalDataSwapper(::EntityRegistry& registry);

    MCNAPI_C ~ExternalDataSwapper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::EntityRegistry& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace RewindSimulation
