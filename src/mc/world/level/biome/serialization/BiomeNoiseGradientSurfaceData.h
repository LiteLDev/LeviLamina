#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_30/NoiseDescriptor.h"

// auto generated forward declare list
// clang-format off
struct SerializedNoiseBlockSpecifier;
// clang-format on

struct BiomeNoiseGradientSurfaceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                            mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::SerializedNoiseBlockSpecifier>> mGradientBlockRanges;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_26_30::NoiseDescriptor>       mNoiseDescriptor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BiomeNoiseGradientSurfaceData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
