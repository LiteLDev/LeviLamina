#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class StructurePoolElement;
// clang-format on

namespace JigsawStructureUtils {

class MetadataCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7f8f75;
    ::ll::UntypedStorage<8, 24> mUnkfe7328;
    ::ll::UntypedStorage<8, 24> mUnkd8ad64;
    // NOLINTEND

public:
    // prevent constructor by default
    MetadataCache& operator=(MetadataCache const&);
    MetadataCache(MetadataCache const&);
    MetadataCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MetadataCache(::StructurePoolElement const& element);

    MCNAPI ::Block const* getOrCreateBlockCache(uint64 index);

    MCNAPI ~MetadataCache();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StructurePoolElement const& element);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JigsawStructureUtils
