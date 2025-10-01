#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/block_entity/AppendLoot.h"
#include "mc/world/level/levelgen/v2/processors/block_entity/ModifierType.h"
#include "mc/world/level/levelgen/v2/processors/block_entity/Passthrough.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::BlockEntity {

struct Modifier : public ::br::worldgen::processors::BlockEntity::ModifierType {
public:
    // Modifier inner types define
    using Type = ::std::variant<
        ::br::worldgen::processors::BlockEntity::Passthrough,
        ::br::worldgen::processors::BlockEntity::AppendLoot>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::std::variant<
            ::br::worldgen::processors::BlockEntity::Passthrough,
            ::br::worldgen::processors::BlockEntity::AppendLoot>>
        mData;
    // NOLINTEND

public:
    // prevent constructor by default
    Modifier& operator=(Modifier const&);
    Modifier();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::CompoundTag> apply(::IRandom& random, ::CompoundTag const* existingTag) const
        /*override*/;

    // vIndex: 2
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 0
    virtual ~Modifier() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Modifier(::br::worldgen::processors::BlockEntity::Modifier const&);

    MCAPI Modifier(::br::worldgen::processors::BlockEntity::Modifier&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::br::worldgen::processors::BlockEntity::Modifier const&);

    MCAPI void* $ctor(::br::worldgen::processors::BlockEntity::Modifier&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::CompoundTag> $apply(::IRandom& random, ::CompoundTag const* existingTag) const;

    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::BlockEntity
