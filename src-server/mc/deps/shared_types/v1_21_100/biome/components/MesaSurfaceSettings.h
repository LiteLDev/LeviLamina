#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_100/biome/components/DefaultSurfaceSettings.h"

namespace SharedTypes::v1_21_100::SurfaceBuilder {

struct MesaSurfaceSettings : public ::SharedTypes::v1_21_100::SurfaceBuilder::DefaultSurfaceSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk894ce9;
    ::ll::UntypedStorage<8, 96> mUnkc293f7;
    ::ll::UntypedStorage<1, 1> mUnk80d642;
    ::ll::UntypedStorage<1, 1> mUnk790130;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MesaSurfaceSettings();

    MCNAPI MesaSurfaceSettings(::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings const&);

    MCNAPI ::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings& operator=(::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings&&);

    MCNAPI ::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings& operator=(::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings const&);

    MCNAPI ~MesaSurfaceSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_21_100::SurfaceBuilder::MesaSurfaceSettings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
