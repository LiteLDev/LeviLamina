#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class FeatureRegistry;
class Random;
// clang-format on

class LegacyIceFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke8d47e;
    ::ll::UntypedStorage<8, 24> mUnkc824af;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyIceFeature& operator=(LegacyIceFeature const&);
    LegacyIceFeature(LegacyIceFeature const&);
    LegacyIceFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyIceFeature() /*override*/ = default;

    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LegacyIceFeature(::FeatureRegistry const& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FeatureRegistry const& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
