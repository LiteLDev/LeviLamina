#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace SharedTypes::v1_20_50 { struct DiggerItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DiggerItemComponent : public ::NetworkedItemComponent<::DiggerItemComponent> {
public:
    // DiggerItemComponent inner types declare
    // clang-format off
    struct BlockInfo;
    // clang-format on

    // DiggerItemComponent inner types define
    struct BlockInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 176, ::BlockDescriptor> filter;
        ::ll::TypedStorage<4, 4, int>                 destroySpeed;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                             mUseEfficiency;
    ::ll::TypedStorage<8, 24, ::std::vector<::DiggerItemComponent::BlockInfo>> mDestroySpeeds;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DiggerItemComponent();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI explicit DiggerItemComponent(::SharedTypes::v1_20_50::DiggerItemComponent component);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::SharedTypes::v1_20_50::DiggerItemComponent component);
#endif
    // NOLINTEND
};
