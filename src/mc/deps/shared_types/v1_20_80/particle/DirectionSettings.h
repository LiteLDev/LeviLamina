#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct DirectionSettings {
public:
    // DirectionSettings inner types define
    enum class Mode : int {
        UseVelocity = 0,
        Custom      = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk5e6964;
    ::ll::UntypedStorage<8, 144> mUnk55469a;
    ::ll::UntypedStorage<4, 4>   mUnk2e4e4e;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectionSettings& operator=(DirectionSettings const&);
    DirectionSettings(DirectionSettings const&);
    DirectionSettings();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
