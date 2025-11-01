#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::PosRules {

struct TestType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TestType() = default;

    // vIndex: 1
    virtual bool test(::BlockPos, ::BlockPos, ::BlockPos, ::IRandom&) const = 0;

    // vIndex: 2
    virtual void appendMetadataKey(::Util::XXHash&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
