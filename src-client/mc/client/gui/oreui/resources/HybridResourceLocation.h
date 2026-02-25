#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/HybridResourceFileSystem.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PackInstance;
// clang-format on

namespace OreUI {

struct HybridResourceLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::OreUI::HybridResourceFileSystem>  mFileSystem;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mPath;
    ::ll::TypedStorage<8, 8, ::PackInstance const*>              mPack;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~HybridResourceLocation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
