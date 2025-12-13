#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
        ::ll::UntypedStorage<4, 12> mUnkbce00f;
        ::ll::UntypedStorage<4, 12> mUnkdba528;
        ::ll::UntypedStorage<2, 6>  mUnk3c9e9e;
        ::ll::UntypedStorage<8, 24> mUnkbb281b;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedVolume& operator=(CachedVolume const&);
        CachedVolume(CachedVolume const&);
        CachedVolume();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnkeb2293;
    ::ll::UntypedStorage<8, 64> mUnkf35733;
    // NOLINTEND

public:
    // prevent constructor by default
    CacheDensityCalculator& operator=(CacheDensityCalculator const&);
    CacheDensityCalculator(CacheDensityCalculator const&);
    CacheDensityCalculator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CacheDensityCalculator() /*override*/ = default;

    virtual void fill(::DensityVolume&, ::DensityAllocator&, ::DensityCalculators const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
