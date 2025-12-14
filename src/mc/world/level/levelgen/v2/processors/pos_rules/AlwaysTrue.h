#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/pos_rules/TestType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::PosRules {

struct AlwaysTrue : public ::br::worldgen::processors::PosRules::TestType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool test(::BlockPos, ::BlockPos, ::BlockPos, ::IRandom&) const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    virtual ~AlwaysTrue() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $test(::BlockPos, ::BlockPos, ::BlockPos, ::IRandom&) const;

    MCFOLD void $appendMetadataKey(::Util::XXHash& hash) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::PosRules
