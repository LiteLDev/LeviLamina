#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_100::SurfaceBuilder {

struct CappedSurfaceSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1dbfab;
    ::ll::UntypedStorage<8, 24> mUnkf477bc;
    ::ll::UntypedStorage<8, 96> mUnkb36cd8;
    ::ll::UntypedStorage<8, 96> mUnk5ef267;
    ::ll::UntypedStorage<8, 104> mUnk7c7262;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CappedSurfaceSettings();

    MCNAPI CappedSurfaceSettings(::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings const&);

    MCNAPI ::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings& operator=(::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings&&);

    MCNAPI ::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings& operator=(::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings const&);

    MCNAPI ~CappedSurfaceSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_21_100::SurfaceBuilder::CappedSurfaceSettings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
