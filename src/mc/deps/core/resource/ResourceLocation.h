#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
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
    // prevent constructor by default
    ResourceLocation& operator=(ResourceLocation const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ResourceLocation();

    MCAPI_C ResourceLocation(::ResourceLocation const&);

    MCAPI_C explicit ResourceLocation(::Core::PathView path);

    MCAPI ResourceLocation(::Core::PathView path, ::ResourceFileSystem fileSystem);

    MCAPI ::Core::PathBuffer<::std::string> getFullPath() const;

    MCAPI_C bool operator==(::ResourceLocation const& rhs) const;

    MCAPI ~ResourceLocation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::ResourceLocation const& getEmptyLocation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();

    MCAPI_C void* $ctor(::ResourceLocation const&);

    MCAPI_C void* $ctor(::Core::PathView path);

    MCAPI void* $ctor(::Core::PathView path, ::ResourceFileSystem fileSystem);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
