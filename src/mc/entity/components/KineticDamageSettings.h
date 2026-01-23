#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct KineticDamageSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk99fc48;
    ::ll::UntypedStorage<4, 16> mUnk18b739;
    ::ll::UntypedStorage<4, 16> mUnk3b0935;
    ::ll::UntypedStorage<4, 8>  mUnkcfdebd;
    ::ll::UntypedStorage<4, 12> mUnkc2522a;
    ::ll::UntypedStorage<4, 4>  mUnkab3188;
    ::ll::UntypedStorage<4, 4>  mUnk7d7e6f;
    ::ll::UntypedStorage<4, 4>  mUnk98b7f2;
    ::ll::UntypedStorage<2, 2>  mUnk6951cb;
    // NOLINTEND

public:
    // prevent constructor by default
    KineticDamageSettings& operator=(KineticDamageSettings const&);
    KineticDamageSettings(KineticDamageSettings const&);
    KineticDamageSettings();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
