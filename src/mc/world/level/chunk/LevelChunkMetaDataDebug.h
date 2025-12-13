#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class LevelChunk;
class LevelChunkMetaDataDictionary;
// clang-format on

struct LevelChunkMetaDataDebug : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LevelChunk>>                   mActiveLevelChunk;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LevelChunkMetaDataDictionary>> mLevelChunkMetaDataDictionary;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelChunkMetaDataDebug() /*override*/ = default;
    // NOLINTEND
};
