#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_60 { struct BlockSpecifier; }
// clang-format on

namespace SharedTypes::Beta::SurfaceBuilder {

struct NoiseGradientSurfaceSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_20_60::BlockSpecifier>> mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_20_60::BlockSpecifier>> mGradientBlocks;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mNoiseSeedString;
    ::ll::TypedStorage<4, 4, int>                                                     mFirstOctave;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>                                   mAmplitudes;
    // NOLINTEND

public:
    // prevent constructor by default
    NoiseGradientSurfaceSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NoiseGradientSurfaceSettings(::SharedTypes::Beta::SurfaceBuilder::NoiseGradientSurfaceSettings const&);

    MCAPI ::SharedTypes::Beta::SurfaceBuilder::NoiseGradientSurfaceSettings&
    operator=(::SharedTypes::Beta::SurfaceBuilder::NoiseGradientSurfaceSettings&&);

    MCAPI ::SharedTypes::Beta::SurfaceBuilder::NoiseGradientSurfaceSettings&
    operator=(::SharedTypes::Beta::SurfaceBuilder::NoiseGradientSurfaceSettings const&);

    MCAPI ~NoiseGradientSurfaceSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::Beta::SurfaceBuilder::NoiseGradientSurfaceSettings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::SurfaceBuilder
