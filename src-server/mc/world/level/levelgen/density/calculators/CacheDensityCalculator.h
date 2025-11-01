#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/Pos.h"
#include "mc/world/level/levelgen/density/DensityVolume.h"
#include "mc/world/level/levelgen/density/calculators/IDensityCalculator.h"

// auto generated forward declare list
// clang-format off
class DensityAllocator;
class DensityCalculators;
class DensityVolume;
// clang-format on

class CacheDensityCalculator : public ::IDensityCalculator {
public:
    // CacheDensityCalculator inner types declare
    // clang-format off
    struct CachedVolume;
    // clang-format on
    
    // CacheDensityCalculator inner types define
    struct CachedVolume {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Pos> mPos;
        ::ll::TypedStorage<4, 12, ::Pos> mStep;
        ::ll::TypedStorage<2, 6, ::DensityVolume::Dimensions> mDimensions;
        ::ll::TypedStorage<8, 24, ::std::vector<float>> mData;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mInput;
    ::ll::TypedStorage<8, 64, ::std::optional<::CacheDensityCalculator::CachedVolume const>> mCachedVolume;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CacheDensityCalculator() /*override*/ = default;

    // vIndex: 1
    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
