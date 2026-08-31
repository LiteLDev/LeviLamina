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
#ifdef LL_PLAT_S
    virtual ~IEntitySystems() = default;
#else // LL_PLAT_C
    virtual ~IEntitySystems();
#endif

    virtual void registerTickingSystem(
        ::gsl::span<::Bedrock::typeid_t<::SystemCategory> const> categories,
        ::std::unique_ptr<::ITickingSystem>                      system,
        ::SystemInfo const&                                      info,
        ::EntitySystemTickingMode                                tickingMode
    ) = 0;

    virtual bool _hasSingleTickCategory(::Bedrock::typeid_t<::SystemCategory> const category) const = 0;

    virtual void tickMovementCatchup(::EntityRegistry& registry) = 0;

    virtual void tickMovementCorrectionReplay(::EntityRegistry& registry) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
