#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace JigsawStructureUtils { class MetadataCache; }
namespace SharedTypes::v1_21_80 { class JigsawBlockMetadata; }
// clang-format on

namespace JigsawStructureUtils {

struct JigsawBlockMetadataCacheHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_21_80::JigsawBlockMetadata const&> mMetadata;
    ::ll::TypedStorage<8, 8, ::JigsawStructureUtils::MetadataCache&> mCache;
    ::ll::TypedStorage<8, 8, uint64> mIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawBlockMetadataCacheHandle& operator=(JigsawBlockMetadataCacheHandle const&);
    JigsawBlockMetadataCacheHandle(JigsawBlockMetadataCacheHandle const&);
    JigsawBlockMetadataCacheHandle();

};

}
