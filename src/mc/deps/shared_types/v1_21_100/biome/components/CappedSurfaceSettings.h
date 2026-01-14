#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"

namespace SharedTypes::v1_21_100::SurfaceBuilder {

struct CappedSurfaceSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_20_60::BlockSpecifier>>    mFloorMaterials;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_20_60::BlockSpecifier>>    mCeilingMaterials;
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_60::BlockSpecifier>                   mSeaMaterial;
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_60::BlockSpecifier>                   mFoundationMaterial;
    ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::v1_20_60::BlockSpecifier>> mBeachMaterial;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CappedSurfaceSettings();

    MCAPI CappedSurfaceSettings(::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings const&);

    MCAPI ::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings&
    operator=(::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings&&);

    MCAPI ::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings&
    operator=(::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings const&);

    MCAPI ~CappedSurfaceSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100::SurfaceBuilder
