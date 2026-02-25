#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"

namespace OreUI {

struct ResourcePath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> path;
    ::ll::TypedStorage<4, 4, ::ResourceFileSystem>               fileSystem;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ResourcePath();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
