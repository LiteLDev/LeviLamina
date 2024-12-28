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
    // prevent constructor by default
    Passthrough& operator=(Passthrough const&);
    Passthrough(Passthrough const&);
    Passthrough();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::CompoundTag> apply(::IRandom&, ::CompoundTag const* existingTag) const /*override*/;

    // vIndex: 2
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 0
    virtual ~Passthrough() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::BlockEntity
