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
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_21_80::JigsawStructureMetadata const&> mMetadata;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>> mBlockCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>> mFinalBlockCache;
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

}
