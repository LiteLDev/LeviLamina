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
    // ResourceLocation inner types declare
    // clang-format off
    struct TextureSetHelpers;
    // clang-format on

    // ResourceLocation inner types define
    struct TextureSetHelpers {
    public:
        // TextureSetHelpers inner types declare
        // clang-format off
        class ResourceHelper;
        // clang-format on

        // TextureSetHelpers inner types define
        enum class ColorPipeline : uint {};

        enum class LoadMode : uint {};

        class ResourceHelper {};
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ResourceFileSystem>               mFileSystem;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mPath;
    ::ll::TypedStorage<8, 8, uint64>                             mPathHash;
    ::ll::TypedStorage<8, 8, uint64>                             mFullHash;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ResourceLocation& operator=(ResourceLocation const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourceLocation();

    MCAPI explicit ResourceLocation(::Core::PathView path);

#ifdef LL_PLAT_C
    MCAPI ResourceLocation(::ResourceLocation const& rhs);
#endif

    MCAPI ResourceLocation(::Core::PathView path, ::ResourceFileSystem fileSystem);

    MCAPI ::Core::PathBuffer<::std::string> getFullPath() const;

#ifdef LL_PLAT_C
    MCAPI ::HashedString getHashedPath() const;
#endif

    MCFOLD ::Core::PathBuffer<::std::string> const& getRelativePath() const;

#ifdef LL_PLAT_C
    MCAPI bool operator==(::ResourceLocation const& rhs) const;
#endif

    MCAPI void setRelativePath(::Core::PathBuffer<::std::string> const& path);

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
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Core::PathView path);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ResourceLocation const& rhs);
#endif

    MCAPI void* $ctor(::Core::PathView path, ::ResourceFileSystem fileSystem);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
