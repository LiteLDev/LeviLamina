#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/block_rules/TestType.h"

// auto generated forward declare list
// clang-format off
class Block;
class HashedString;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::BlockRules {

struct TagMatch : public ::br::worldgen::processors::BlockRules::TestType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mTag;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool test(::Block const& block, ::IRandom&) const /*override*/;

    // vIndex: 2
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 0
    virtual ~TagMatch() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::processors::BlockRules::TagMatch from(::std::string_view tag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $test(::Block const& block, ::IRandom&) const;

    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::BlockRules
