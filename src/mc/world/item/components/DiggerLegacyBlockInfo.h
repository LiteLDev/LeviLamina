#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DiggerLegacyBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80>  mUnkd07f4d;
    ::ll::UntypedStorage<4, 4>   mUnk293625;
    ::ll::UntypedStorage<8, 256> mUnk64e707;
    // NOLINTEND

public:
    // prevent constructor by default
    DiggerLegacyBlockInfo(DiggerLegacyBlockInfo const&);
    DiggerLegacyBlockInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::DiggerLegacyBlockInfo& operator=(::DiggerLegacyBlockInfo const&);

    MCAPI ::DiggerLegacyBlockInfo& operator=(::DiggerLegacyBlockInfo&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
