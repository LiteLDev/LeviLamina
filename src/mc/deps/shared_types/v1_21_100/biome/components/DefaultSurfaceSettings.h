#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"

namespace SharedTypes::v1_21_100::SurfaceBuilder {

struct DefaultSurfaceSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                      mSeaFloorDepth;
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_60::BlockSpecifier> mSeaFloorMaterial;
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_60::BlockSpecifier> mFoundationMaterial;
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_60::BlockSpecifier> mMidMaterial;
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_60::BlockSpecifier> mTopMaterial;
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_60::BlockSpecifier> mSeaMaterial;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DefaultSurfaceSettings();

    MCAPI DefaultSurfaceSettings(::SharedTypes::v1_21_100::SurfaceBuilder::DefaultSurfaceSettings const&);

    MCAPI ::SharedTypes::v1_21_100::SurfaceBuilder::DefaultSurfaceSettings&
    operator=(::SharedTypes::v1_21_100::SurfaceBuilder::DefaultSurfaceSettings const&);

    MCAPI ~DefaultSurfaceSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_21_100::SurfaceBuilder::DefaultSurfaceSettings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100::SurfaceBuilder
