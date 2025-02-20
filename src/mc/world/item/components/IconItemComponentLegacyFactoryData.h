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

struct IconItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9ccf05;
    // NOLINTEND

public:
    // prevent constructor by default
    IconItemComponentLegacyFactoryData(IconItemComponentLegacyFactoryData const&);
    IconItemComponentLegacyFactoryData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IconItemComponentLegacyFactoryData() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::IconItemComponentLegacyFactoryData& operator=(::IconItemComponentLegacyFactoryData const&);

    MCAPI ::IconItemComponentLegacyFactoryData& operator=(::IconItemComponentLegacyFactoryData&&);
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

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
