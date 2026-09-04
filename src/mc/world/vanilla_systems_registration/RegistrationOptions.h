#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs_module/RegistrationOptions.h"
#include "mc/world/level/storage/Experiments.h"

// auto generated forward declare list
// clang-format off
namespace ECSModule { class IECSModule; }
// clang-format on

namespace VanillaSystemsRegistration {

struct RegistrationOptions : public ::ECSModule::RegistrationOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ECSModule::IECSModule*> mMoveModule;
    ::ll::TypedStorage<8, 72, ::Experiments>           mExperiments;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~RegistrationOptions();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace VanillaSystemsRegistration
