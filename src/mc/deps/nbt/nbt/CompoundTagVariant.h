#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/nbt/ByteArrayTag.h"
#include "mc/deps/nbt/nbt/ByteTag.h"
#include "mc/deps/nbt/nbt/CompoundTag.h"
#include "mc/deps/nbt/nbt/DoubleTag.h"
#include "mc/deps/nbt/nbt/EndTag.h"
#include "mc/deps/nbt/nbt/FloatTag.h"
#include "mc/deps/nbt/nbt/Int64Tag.h"
#include "mc/deps/nbt/nbt/IntArrayTag.h"
#include "mc/deps/nbt/nbt/IntTag.h"
#include "mc/deps/nbt/nbt/ListTag.h"
#include "mc/deps/nbt/nbt/ShortTag.h"
#include "mc/deps/nbt/nbt/StringTag.h"

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

    MCAPI_C ::Tag* get();

    MCAPI ~CompoundTagVariant();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
