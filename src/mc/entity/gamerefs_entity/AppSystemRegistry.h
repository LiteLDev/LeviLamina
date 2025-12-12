#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ITickingSystem;
struct TickingSystemRegistrationToken;
// clang-format on

class AppSystemRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk10ac91;
    ::ll::UntypedStorage<8, 24> mUnk89d656;
    // NOLINTEND

public:
    // prevent constructor by default
    AppSystemRegistry& operator=(AppSystemRegistry const&);
    AppSystemRegistry(AppSystemRegistry const&);
    AppSystemRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::entt::dispatcher& getDispatcher() const;

    MCNAPI_C ::TickingSystemRegistrationToken registerTickingSystem(::std::unique_ptr<::ITickingSystem> tickingSystem);

    MCNAPI_C void tick();

    MCNAPI_C ~AppSystemRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
