#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
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
    MCAPI ResourceLocation();

    MCAPI explicit ResourceLocation(::Core::Path const& path);

    MCAPI ResourceLocation(::Core::Path const& path, ::ResourceFileSystem fileSystem);

    MCAPI ::Core::PathBuffer<::std::string> getFullPath() const;

    MCFOLD ::Core::PathBuffer<::std::string> const& getRelativePath() const;

    MCAPI void serialize(::Json::Value& out) const;

    MCAPI void setRelativePath(::Core::PathBuffer<::std::string> const& path);

    MCAPI ~ResourceLocation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ResourceLocation const& getEmptyLocation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Core::Path const& path);

    MCAPI void* $ctor(::Core::Path const& path, ::ResourceFileSystem fileSystem);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
