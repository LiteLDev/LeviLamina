#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"

// auto generated forward declare list
// clang-format off
class HashedString;
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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ResourceLocation();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ResourceLocation();

    MCAPI ResourceLocation(::ResourceLocation const&);

    MCAPI explicit ResourceLocation(::Core::PathView path);
#endif

    MCAPI ResourceLocation(::Core::PathView path, ::ResourceFileSystem fileSystem);

    MCAPI ::Core::PathBuffer<::std::string> getFullPath() const;

#ifdef LL_PLAT_C
    MCAPI ::HashedString getHashedPath() const;

    MCAPI bool operator<(::ResourceLocation const& rhs) const;

    MCAPI ::ResourceLocation& operator=(::ResourceLocation const&);

    MCAPI bool operator==(::ResourceLocation const& rhs) const;
#endif

    MCAPI ~ResourceLocation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::ResourceLocation const& getEmptyLocation();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ResourceLocation const&);

    MCAPI void* $ctor(::Core::PathView path);
#endif

    MCAPI void* $ctor(::Core::PathView path, ::ResourceFileSystem fileSystem);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
