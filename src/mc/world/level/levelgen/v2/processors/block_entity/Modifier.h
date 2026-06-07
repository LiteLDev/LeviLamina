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
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::CompoundTag> apply(::IRandom& random, ::CompoundTag const* existingTag) const
        /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Modifier();

    MCAPI explicit Modifier(::br::worldgen::processors::BlockEntity::Passthrough);

    MCAPI explicit Modifier(::br::worldgen::processors::BlockEntity::AppendLoot match);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::br::worldgen::processors::BlockEntity::Passthrough);

    MCAPI void* $ctor(::br::worldgen::processors::BlockEntity::AppendLoot match);
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
