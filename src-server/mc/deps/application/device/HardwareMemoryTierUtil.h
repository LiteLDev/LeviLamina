#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/HardwareMemoryTier.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct ImplCtor; }
// clang-format on

class HardwareMemoryTierUtil
: public ::Bedrock::
      ImplBase<::HardwareMemoryTierUtil, ::Bedrock::ImplCtor(::brstd::move_only_function<uint64() const>)> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::HardwareMemoryTier getHardwareMemoryTier() const = 0;

    // vIndex: 0
    virtual ~HardwareMemoryTierUtil() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
