#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"
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
        ::ll::TypedStorage<8, 16, ::ItemDescriptor> itemDesc;
        ::ll::TypedStorage<1, 1, bool> useOffhand;
        ::ll::TypedStorage<1, 1, bool> searchInventory;
        ::ll::TypedStorage<1, 1, bool> useInCreative;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ShooterAmmunitionEntry();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ShooterAmmunitionEntry(::ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry const&);
    
        MCFOLD ::ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry& operator=(::ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry const&);
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry const&);
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry>> mAmmunition;
    ::ll::TypedStorage<4, 4, float> mDrawDuration;
    ::ll::TypedStorage<1, 1, bool> mScalePowerByDrawDuration;
    ::ll::TypedStorage<1, 1, bool> mChargeOnDraw;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShooterItemComponentLegacyFactoryData() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx, ::std::vector<::AllExperiments> const& requiredToggles, ::std::optional<::SemVersion> releasedMinFormatVersion);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
