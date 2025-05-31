#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct UseModifiersItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb625fc;
    // NOLINTEND

public:
    // prevent constructor by default
    UseModifiersItemComponentLegacyFactoryData& operator=(UseModifiersItemComponentLegacyFactoryData const&);
    UseModifiersItemComponentLegacyFactoryData(UseModifiersItemComponentLegacyFactoryData const&);
    UseModifiersItemComponentLegacyFactoryData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UseModifiersItemComponentLegacyFactoryData() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
