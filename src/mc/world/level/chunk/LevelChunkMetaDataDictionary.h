#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IDataInput;
class LevelChunkMetaData;
// clang-format on

class LevelChunkMetaDataDictionary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk56a38a;
    ::ll::UntypedStorage<1, 1>  mUnk2dd3cb;
    ::ll::UntypedStorage<8, 8>  mUnkfd998b;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkMetaDataDictionary& operator=(LevelChunkMetaDataDictionary const&);
    LevelChunkMetaDataDictionary(LevelChunkMetaDataDictionary const&);
    LevelChunkMetaDataDictionary();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::LevelChunkMetaData> _registerMetaData(::LevelChunkMetaData const& candidateMetaData);

    MCAPI void checkAndSerialize(::std::function<void(::std::string const&)> postSerializeWriteCallback) const;

    MCAPI void deserialize(::IDataInput& stream);

    MCAPI ::std::shared_ptr<::LevelChunkMetaData> registerMetaData(::LevelChunkMetaData const& candidateMetaData);
    // NOLINTEND
};
