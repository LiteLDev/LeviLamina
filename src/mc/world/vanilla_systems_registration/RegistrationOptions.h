#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs_module/RegistrationOptions.h"

namespace VanillaSystemsRegistration {

struct RegistrationOptions : public ::ECSModule::RegistrationOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5e9164;
    ::ll::UntypedStorage<8, 72> mUnkc6b192;
    // NOLINTEND

public:
    // prevent constructor by default
    RegistrationOptions& operator=(RegistrationOptions const&);
    RegistrationOptions(RegistrationOptions const&);
    RegistrationOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RegistrationOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace VanillaSystemsRegistration
