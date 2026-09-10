#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptStat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2712c2;
    ::ll::UntypedStorage<1, 1>  mUnkf48bba;
    ::ll::UntypedStorage<8, 32> mUnk87f837;
    ::ll::UntypedStorage<8, 32> mUnkca689c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStat();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptStat(::ScriptStat const&);

    MCNAPI ScriptStat(
        ::std::string                                name,
        ::std::variant<double, ::std::string>        value,
        ::std::optional<::std::vector<::ScriptStat>> children
    );

    MCNAPI ScriptStat(
        ::std::string                                                         name,
        ::std::optional<::std::vector<::std::variant<double, ::std::string>>> values,
        ::std::optional<::std::vector<::ScriptStat>>                          children
    );

    MCNAPI ::ScriptStat& addChild(::ScriptStat&& child);

    MCNAPI ::ScriptStat& operator=(::ScriptStat const&);

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
    MCNAPI void* $ctor(::ScriptStat const&);

    MCNAPI void* $ctor(
        ::std::string                                name,
        ::std::variant<double, ::std::string>        value,
        ::std::optional<::std::vector<::ScriptStat>> children
    );

    MCNAPI void* $ctor(
        ::std::string                                                         name,
        ::std::optional<::std::vector<::std::variant<double, ::std::string>>> values,
        ::std::optional<::std::vector<::ScriptStat>>                          children
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

// free functions
// NOLINTBEGIN
MCNAPI bool operator==(::ScriptStat const&, ::ScriptStat const&);
// NOLINTEND
