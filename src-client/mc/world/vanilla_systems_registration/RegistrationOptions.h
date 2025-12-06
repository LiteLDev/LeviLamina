#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs_module/RegistrationOptions.h"
#include "mc/world/level/storage/Experiments.h"

// auto generated forward declare list
// clang-format off
namespace ECSModule { struct IECSModule; }
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
    MCAPI ~RegistrationOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace VanillaSystemsRegistration
