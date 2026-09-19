#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DebuggerStat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke35874;
    ::ll::UntypedStorage<1, 1>  mUnk4366da;
    ::ll::UntypedStorage<8, 32> mUnke7fc71;
    ::ll::UntypedStorage<8, 32> mUnkfbb3a5;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggerStat& operator=(DebuggerStat const&);
    DebuggerStat();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DebuggerStat(::DebuggerStat const&);

    MCNAPI DebuggerStat(
        ::std::string                                  name,
        ::std::variant<double, ::std::string>          value,
        ::std::optional<::std::vector<::DebuggerStat>> children
    );

    MCNAPI DebuggerStat(
        ::std::string                                                         name,
        ::std::optional<::std::vector<::std::variant<double, ::std::string>>> values,
        ::std::optional<::std::vector<::DebuggerStat>>                        children
    );

    MCNAPI ::DebuggerStat& addChild(::DebuggerStat&& child);

    MCNAPI ~DebuggerStat();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DebuggerStat const&);

    MCNAPI void* $ctor(
        ::std::string                                  name,
        ::std::variant<double, ::std::string>          value,
        ::std::optional<::std::vector<::DebuggerStat>> children
    );

    MCNAPI void* $ctor(
        ::std::string                                                         name,
        ::std::optional<::std::vector<::std::variant<double, ::std::string>>> values,
        ::std::optional<::std::vector<::DebuggerStat>>                        children
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
