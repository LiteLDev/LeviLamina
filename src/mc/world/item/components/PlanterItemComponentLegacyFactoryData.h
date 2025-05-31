#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct PlanterItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk818f9b;
    ::ll::UntypedStorage<8, 24> mUnkd8bb46;
    // NOLINTEND

public:
    // prevent constructor by default
    PlanterItemComponentLegacyFactoryData(PlanterItemComponentLegacyFactoryData const&);
    PlanterItemComponentLegacyFactoryData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlanterItemComponentLegacyFactoryData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PlanterItemComponentLegacyFactoryData& operator=(::PlanterItemComponentLegacyFactoryData const&);

    MCAPI ::PlanterItemComponentLegacyFactoryData& operator=(::PlanterItemComponentLegacyFactoryData&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
