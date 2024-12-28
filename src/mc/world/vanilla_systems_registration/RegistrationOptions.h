#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
struct PlayerMovementSettings;
struct TickingSystemWithInfo;
// clang-format on

namespace VanillaSystemsRegistration {

struct RegistrationOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnkbf51c7;
    ::ll::UntypedStorage<1, 1>   mUnkcfc8e8;
    ::ll::UntypedStorage<1, 1>   mUnk8733bd;
    ::ll::UntypedStorage<1, 1>   mUnkdabe1d;
    ::ll::UntypedStorage<1, 1>   mUnk14717b;
    ::ll::UntypedStorage<8, 120> mUnked08a7;
    ::ll::UntypedStorage<8, 8>   mUnk7783ad;
    ::ll::UntypedStorage<8, 8>   mUnkfa27d9;
    ::ll::UntypedStorage<8, 8>   mUnkdf02b1;
    ::ll::UntypedStorage<8, 8>   mUnk16e6e4;
    ::ll::UntypedStorage<1, 1>   mUnk82c5c3;
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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::VanillaSystemsRegistration::RegistrationOptions getDefault(
        bool                            isClientSide,
        bool                            connectedToThirdPartyServer,
        ::PlayerMovementSettings const& movementSettings,
        ::BaseGameVersion const&        baseGameVersion
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace VanillaSystemsRegistration
