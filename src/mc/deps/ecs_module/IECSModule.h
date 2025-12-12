#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class IEntitySystems;
namespace ECSModule { struct ModuleInitArgs; }
// clang-format on

namespace ECSModule {

class IECSModule {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IECSModule() = default;

    virtual void initRegistry(::EntityRegistry&) = 0;

    virtual void registerSystems(::IEntitySystems&, ::ECSModule::ModuleInitArgs const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ECSModule
