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
    virtual ~TestType() = default;

    virtual bool
    test(::BlockPos inTemplatePos, ::BlockPos worldPos, ::BlockPos worldReference, ::IRandom& random) const = 0;

    virtual void appendMetadataKey(::Util::XXHash& hash) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace br::worldgen::processors::PosRules
