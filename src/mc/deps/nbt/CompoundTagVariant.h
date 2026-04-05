#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/ByteArrayTag.h"
#include "mc/deps/nbt/ByteTag.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/deps/nbt/DoubleTag.h"
#include "mc/deps/nbt/EndTag.h"
#include "mc/deps/nbt/FloatTag.h"
#include "mc/deps/nbt/Int64Tag.h"
#include "mc/deps/nbt/IntArrayTag.h"
#include "mc/deps/nbt/IntTag.h"
#include "mc/deps/nbt/ListTag.h"
#include "mc/deps/nbt/ShortTag.h"
#include "mc/deps/nbt/StringTag.h"

// auto generated forward declare list
// clang-format off
class Tag;
// clang-format on

class CompoundTagVariant {
public:
    // CompoundTagVariant inner types define
    using Variant = ::std::variant<
        ::EndTag,
        ::ByteTag,
        ::ShortTag,
        ::IntTag,
        ::Int64Tag,
        ::FloatTag,
        ::DoubleTag,
        ::ByteArrayTag,
        ::StringTag,
        ::ListTag,
        ::CompoundTag,
        ::IntArrayTag>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::std::variant<
            ::EndTag,
            ::ByteTag,
            ::ShortTag,
            ::IntTag,
            ::Int64Tag,
            ::FloatTag,
            ::DoubleTag,
            ::ByteArrayTag,
            ::StringTag,
            ::ListTag,
            ::CompoundTag,
            ::IntArrayTag>>
        mTagStorage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Tag& emplace(::Tag&& tag);

#ifdef LL_PLAT_C
    MCAPI ::Tag* get();
#endif

    MCAPI ~CompoundTagVariant();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
