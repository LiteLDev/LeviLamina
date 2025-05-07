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

struct ShooterItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // ShooterItemComponentLegacyFactoryData inner types declare
    // clang-format off
    struct ShooterAmmunitionEntry;
    // clang-format on

    // ShooterItemComponentLegacyFactoryData inner types define
    struct ShooterAmmunitionEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk6a36e6;
        ::ll::UntypedStorage<1, 1>  mUnk900e5c;
        ::ll::UntypedStorage<1, 1>  mUnkca2106;
        ::ll::UntypedStorage<1, 1>  mUnkdbd154;
        // NOLINTEND

    public:
        // prevent constructor by default
        ShooterAmmunitionEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ShooterAmmunitionEntry(::ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry const&);

        MCNAPI ::ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry&
        operator=(::ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk597ee5;
    ::ll::UntypedStorage<4, 4>  mUnk6b3fc3;
    ::ll::UntypedStorage<1, 1>  mUnkb19aba;
    ::ll::UntypedStorage<1, 1>  mUnk2bb913;
    // NOLINTEND

public:
    // prevent constructor by default
    ShooterItemComponentLegacyFactoryData& operator=(ShooterItemComponentLegacyFactoryData const&);
    ShooterItemComponentLegacyFactoryData(ShooterItemComponentLegacyFactoryData const&);
    ShooterItemComponentLegacyFactoryData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShooterItemComponentLegacyFactoryData() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
