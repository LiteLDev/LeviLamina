#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/file/PathBuffer.h"

class WorldSeedModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                     mProductId;
    ::ll::TypedStorage<8, 32, ::std::string>                     mTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                     mSeed;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>            mOreUIImagePath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mImagePath;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~WorldSeedModel();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
