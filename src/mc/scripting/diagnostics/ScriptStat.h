#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptStat {
public:
    // ScriptStat inner types define
    enum class Type : uint {
        Bytes         = 0,
        Milliseconds  = 1,
        Microseconds  = 2,
        BiasedPercent = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6ffd26;
    ::ll::UntypedStorage<8, 32> mUnk70a80a;
    ::ll::UntypedStorage<4, 8>  mUnk54fb0f;
    ::ll::UntypedStorage<8, 32> mUnkbf9cb9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStat(ScriptStat const&);
    ScriptStat();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptStat(
        ::std::string                                name,
        int64                                        value,
        ::std::optional<::ScriptStat::Type>          type,
        ::std::optional<::std::vector<::ScriptStat>> children
    );

    MCAPI ScriptStat(
        ::std::string                                name,
        ::std::optional<::std::vector<int64>>        values,
        ::std::optional<::ScriptStat::Type>          type,
        ::std::optional<::std::vector<::ScriptStat>> children
    );

    MCAPI ::ScriptStat& addChild(::ScriptStat&& child);

    MCAPI ::ScriptStat& operator=(::ScriptStat const&);

    MCAPI ::ScriptStat& operator=(::ScriptStat&&);

    MCAPI ~ScriptStat();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string                                name,
        int64                                        value,
        ::std::optional<::ScriptStat::Type>          type,
        ::std::optional<::std::vector<::ScriptStat>> children
    );

    MCAPI void* $ctor(
        ::std::string                                name,
        ::std::optional<::std::vector<int64>>        values,
        ::std::optional<::ScriptStat::Type>          type,
        ::std::optional<::std::vector<::ScriptStat>> children
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
