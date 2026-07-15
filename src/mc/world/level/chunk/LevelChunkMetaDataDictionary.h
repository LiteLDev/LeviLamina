#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IDataInput;
class LevelChunkMetaData;
// clang-format on

class LevelChunkMetaDataDictionary {
public:
    // LevelChunkMetaDataDictionary inner types define
    using PostSerializeWriteCallback = ::std::function<void(::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<uint64, ::std::shared_ptr<::LevelChunkMetaData>>> mDictionary;
    ::ll::TypedStorage<1, 1, bool>                                                         mDictionaryDirty;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                          mSharedMutex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::LevelChunkMetaData> _registerMetaData(::LevelChunkMetaData const& candidateMetaData);

    MCAPI void checkAndSerialize(::std::function<void(::std::string const&)> postSerializeWriteCallback) const;

    MCAPI void deserialize(::IDataInput& stream);
    // NOLINTEND
};
