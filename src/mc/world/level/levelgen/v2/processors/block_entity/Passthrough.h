#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/block_entity/ModifierType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::BlockEntity {

struct Passthrough : public ::br::worldgen::processors::BlockEntity::ModifierType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::CompoundTag> apply(::IRandom&, ::CompoundTag const* existingTag) const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    virtual ~Passthrough() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::CompoundTag> $apply(::IRandom&, ::CompoundTag const* existingTag) const;

    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::BlockEntity
