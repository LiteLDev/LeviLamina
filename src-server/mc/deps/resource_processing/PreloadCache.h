#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/resource_processing/PreloadState.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Bedrock::Resources::Archive { class Reader; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock::Resources {

class PreloadCache : public ::std::enable_shared_from_this<::Bedrock::Resources::PreloadCache> {
public:
    // PreloadCache inner types declare
    // clang-format off
    struct PreloadedContentMaps;
    struct SharedOnlyConstructionTag;
    // clang-format on
    
    // PreloadCache inner types define
    struct SharedOnlyConstructionTag {
    };
    
    struct PreloadedContentMaps {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkea2f7b;
        ::ll::UntypedStorage<8, 64> mUnk31b19a;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        PreloadedContentMaps& operator=(PreloadedContentMaps const&);
        PreloadedContentMaps(PreloadedContentMaps const&);
        PreloadedContentMaps();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 136> mUnk3091c8;
    // NOLINTEND

public:
    // prevent constructor by default
    PreloadCache& operator=(PreloadCache const&);
    PreloadCache(PreloadCache const&);
    PreloadCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PreloadCache(::Bedrock::Resources::PreloadCache::SharedOnlyConstructionTag);

    MCNAPI ::Bedrock::Resources::PreloadedPathHandle _findPreloadedPath(::Bedrock::Resources::PreloadCache::PreloadedContentMaps const& contentMaps, ::Core::Path const& cleanPath) const;

    MCNAPI ::Bedrock::Resources::PreloadState _getAsset(::Bedrock::Resources::PreloadCache::PreloadedContentMaps const& contentMaps, ::Core::Path const& path, ::std::string* assetData) const;

    MCNAPI ::Bedrock::Resources::PreloadedPathHandle addPreloadedPath(::Core::Path const& path, ::std::unique_ptr<::Bedrock::Resources::Archive::Reader> archiveReader);

    MCNAPI ::Bedrock::Resources::PreloadedPathHandle findPreloadedPath(::Core::Path const& path) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _preloadedPathDeleter(::std::weak_ptr<::Bedrock::Resources::PreloadCache> weakThis, ::Core::Path const& path, ::Bedrock::Resources::Archive::Reader* reader);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::Resources::PreloadCache::SharedOnlyConstructionTag);
    // NOLINTEND

};

}
