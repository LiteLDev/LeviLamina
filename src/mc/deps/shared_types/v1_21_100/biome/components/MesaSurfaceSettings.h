#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"
#include "mc/deps/shared_types/v1_21_100/biome/components/DefaultSurfaceSettings.h"

namespace SharedTypes::v1_21_100::SurfaceBuilder {

struct MesaSurfaceSettings : public ::SharedTypes::v1_21_100::SurfaceBuilder::DefaultSurfaceSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_60::BlockSpecifier> mClayMaterial;
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_60::BlockSpecifier> mHardClayMaterial;
    ::ll::TypedStorage<1, 1, bool>                                     mBrycePillars;
    ::ll::TypedStorage<1, 1, bool>                                     mHasForest;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MesaSurfaceSettings();

    MCAPI MesaSurfaceSettings(::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings const&);

    MCAPI ::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings&
    operator=(::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings&&);

    MCAPI ::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings&
    operator=(::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings const&);

    MCAPI ~MesaSurfaceSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100::SurfaceBuilder
