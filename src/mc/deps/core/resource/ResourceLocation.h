#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ResourceLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ResourceFileSystem>               mFileSystem;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mPath;
    ::ll::TypedStorage<8, 8, uint64>                             mPathHash;
    ::ll::TypedStorage<8, 8, uint64>                             mFullHash;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourceLocation();

    MCNAPI ResourceLocation(::Core::Path const& path, ::ResourceFileSystem fileSystem);

    MCNAPI ::Core::PathBuffer<::std::string> getFullPath() const;

    MCNAPI bool operator==(::ResourceLocation const& rhs) const;

    MCNAPI ~ResourceLocation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ResourceLocation const& getEmptyLocation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Core::Path const& path, ::ResourceFileSystem fileSystem);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
