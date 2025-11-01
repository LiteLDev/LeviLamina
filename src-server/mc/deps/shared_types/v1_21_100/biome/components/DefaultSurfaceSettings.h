#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_100::SurfaceBuilder {

struct DefaultSurfaceSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk873e5a;
    ::ll::UntypedStorage<8, 96> mUnk8cf14a;
    ::ll::UntypedStorage<8, 96> mUnk99836e;
    ::ll::UntypedStorage<8, 96> mUnk81d696;
    ::ll::UntypedStorage<8, 96> mUnkeb7429;
    ::ll::UntypedStorage<8, 96> mUnk15c8b0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DefaultSurfaceSettings();

    MCNAPI DefaultSurfaceSettings(::SharedTypes::v1_21_100::SurfaceBuilder::DefaultSurfaceSettings const&);

    MCNAPI ::SharedTypes::v1_21_100::SurfaceBuilder::DefaultSurfaceSettings& operator=(::SharedTypes::v1_21_100::SurfaceBuilder::DefaultSurfaceSettings const&);

    MCNAPI ~DefaultSurfaceSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_21_100::SurfaceBuilder::DefaultSurfaceSettings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
