#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"
#include "mc/world/level/block/block_serialization_utils/NBTState.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace BlockSerializationUtils {

struct NbtToBlockCache {
public:
    // NbtToBlockCache inner types declare
    // clang-format off
    struct Comparator;
    struct Key;
    // clang-format on

    // NbtToBlockCache inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkd89f4c;
        ::ll::UntypedStorage<8, 8> mUnk764ea6;
        ::ll::UntypedStorage<4, 4> mUnk6eb8c8;
        // NOLINTEND

    public:
        // prevent constructor by default
        Key& operator=(Key const&);
        Key(Key const&);
        Key();
    };

    struct Comparator {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<
            ::BlockSerializationUtils::NbtToBlockCache::Key,
            ::std::pair<::BlockSerializationUtils::NBTState, ::Block const*>,
            ::BlockSerializationUtils::NbtToBlockCache::Comparator>>
                                                           mCache;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mMutex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NbtToBlockCache();

    MCAPI ~NbtToBlockCache();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace BlockSerializationUtils
