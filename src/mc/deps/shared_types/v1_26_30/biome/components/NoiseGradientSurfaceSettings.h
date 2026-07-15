#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_30/NoiseDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_60 { struct BlockSpecifier; }
namespace SharedTypes::v1_26_30 { struct NoiseBlockSpecifier; }
// clang-format on

namespace SharedTypes::v1_26_30::SurfaceBuilder {

struct NoiseGradientSurfaceSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::SharedTypes::v1_20_60::BlockSpecifier>>>
                                                                                           mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_30::NoiseBlockSpecifier>> mGradientBlockRanges;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_26_30::NoiseDescriptor>                    mNoiseDescriptor;
    // NOLINTEND

public:
    // prevent constructor by default
    NoiseGradientSurfaceSettings(NoiseGradientSurfaceSettings const&);
    NoiseGradientSurfaceSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_26_30::SurfaceBuilder::NoiseGradientSurfaceSettings&
    operator=(::SharedTypes::v1_26_30::SurfaceBuilder::NoiseGradientSurfaceSettings const&);

    MCAPI bool validateGradientBlockRanges() const;

    MCAPI ~NoiseGradientSurfaceSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::SurfaceBuilder
