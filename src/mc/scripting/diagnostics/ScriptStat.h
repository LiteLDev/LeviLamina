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
    ::ll::UntypedStorage<1, 1>  mUnkf48bba;
    ::ll::UntypedStorage<8, 32> mUnkbf1d05;
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
    MCNAPI ScriptStat(::ScriptStat&&);

    MCNAPI ScriptStat(
        ::std::string                                name,
        ::std::variant<int64, ::std::string>         value,
        ::std::optional<::ScriptStat::Type>          type,
        ::std::optional<::std::vector<::ScriptStat>> children
    );

    MCNAPI ScriptStat(
        ::std::string                                                        name,
        ::std::optional<::std::vector<::std::variant<int64, ::std::string>>> values,
        ::std::optional<::ScriptStat::Type>                                  type,
        ::std::optional<::std::vector<::ScriptStat>>                         children
    );

    MCNAPI ::ScriptStat& addChild(::ScriptStat&& child);

    MCNAPI ::ScriptStat& operator=(::ScriptStat&&);

    MCNAPI ::ScriptStat& operator=(::ScriptStat const&);

    MCNAPI void reserveSize(uint64 size);

    MCNAPI void setValues(::std::vector<::std::variant<int64, ::std::string>>&& values);

    MCNAPI ~ScriptStat();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptStat&&);

    MCNAPI void* $ctor(
        ::std::string                                name,
        ::std::variant<int64, ::std::string>         value,
        ::std::optional<::ScriptStat::Type>          type,
        ::std::optional<::std::vector<::ScriptStat>> children
    );

    MCNAPI void* $ctor(
        ::std::string                                                        name,
        ::std::optional<::std::vector<::std::variant<int64, ::std::string>>> values,
        ::std::optional<::ScriptStat::Type>                                  type,
        ::std::optional<::std::vector<::ScriptStat>>                         children
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
