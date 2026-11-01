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
    // prevent constructor by default
    CappedSurfaceSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CappedSurfaceSettings(::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings&&);

    MCNAPI CappedSurfaceSettings(::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings const&);

    MCNAPI ::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings&
    operator=(::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings&&);

    MCNAPI ::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings&
    operator=(::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings const&);

    MCNAPI ~CappedSurfaceSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings&&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100::SurfaceBuilder
