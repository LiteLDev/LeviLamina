#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadata; }
// clang-format on

namespace JigsawStructureUtils {

class MetadataCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk70ffba;
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
    MCAPI explicit MetadataCache(::SharedTypes::v1_21_80::JigsawStructureMetadata const& metadata);

    MCAPI ::Block const* getOrCreateBlockCache(uint64 index);

    MCAPI ~MetadataCache();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_80::JigsawStructureMetadata const& metadata);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace JigsawStructureUtils
