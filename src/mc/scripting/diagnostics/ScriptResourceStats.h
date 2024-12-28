#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ScriptResourceStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk18b369;
    ::ll::UntypedStorage<8, 208> mUnkf189dc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptResourceStats& operator=(ScriptResourceStats const&);
    ScriptResourceStats(ScriptResourceStats const&);
    ScriptResourceStats();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string serialize(::cereal::ReflectionCtx const& ctx) const;

    MCAPI ~ScriptResourceStats();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
