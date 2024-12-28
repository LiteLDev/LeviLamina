#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class ITickingSystem;
struct EntitySystemTickingMode;
struct SystemCategory;
struct SystemInfo;
// clang-format on

class IEntitySystems {
public:
    // prevent constructor by default
    IEntitySystems& operator=(IEntitySystems const&);
    IEntitySystems(IEntitySystems const&);
    IEntitySystems();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEntitySystems();

    // vIndex: 1
    virtual void registerTickingSystem(
        ::gsl::span<::Bedrock::typeid_t<::SystemCategory> const>,
        ::std::unique_ptr<::ITickingSystem>,
        ::SystemInfo const&,
        ::EntitySystemTickingMode
    ) = 0;

    // vIndex: 2
    virtual void tickMovementCatchup(::EntityRegistry&) = 0;

    // vIndex: 3
    virtual void tickMovementCorrectionReplay(::EntityRegistry&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
