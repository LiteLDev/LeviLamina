#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ScriptStat {
public:
    // ScriptStat inner types define
    enum class Type {};

public:
    // prevent constructor by default
    ScriptStat();

public:
    // NOLINTBEGIN
    MCAPI ScriptStat(struct ScriptStat&&);

    MCAPI ScriptStat(struct ScriptStat const&);

    MCAPI
    ScriptStat(std::string const&, std::string const&, std::optional<std::string>, std::optional<::ScriptStat::Type>, std::optional<std::string>);

    MCAPI struct ScriptStat& operator=(struct ScriptStat&&);

    MCAPI struct ScriptStat& operator=(struct ScriptStat const&);

    MCAPI ~ScriptStat();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
