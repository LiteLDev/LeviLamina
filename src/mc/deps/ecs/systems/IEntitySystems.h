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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEntitySystems() = default;

    // vIndex: 1
    virtual void registerTickingSystem(
        ::gsl::span<::Bedrock::typeid_t<::SystemCategory> const>,
        ::std::unique_ptr<::ITickingSystem>,
        ::SystemInfo const&,
        ::EntitySystemTickingMode
    ) = 0;

    // vIndex: 2
    virtual bool _hasSingleTickCategory(::Bedrock::typeid_t<::SystemCategory> const) const = 0;

    // vIndex: 3
    virtual void tickMovementCatchup(::EntityRegistry&) = 0;

    // vIndex: 4
    virtual void tickMovementCorrectionReplay(::EntityRegistry&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerTickingSystem(
        ::std::initializer_list<::Bedrock::typeid_t<::SystemCategory>> categories,
        ::std::unique_ptr<::ITickingSystem>                            system,
        ::SystemInfo const&                                            info,
        ::EntitySystemTickingMode                                      tickingMode
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
