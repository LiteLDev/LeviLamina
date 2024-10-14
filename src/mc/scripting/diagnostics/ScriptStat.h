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

    MCAPI ScriptStat(
        std::string const&                id,
        std::string const&                label,
        std::optional<std::string>        parentId,
        std::optional<::ScriptStat::Type> type,
        std::optional<std::string>        value
    );

    MCAPI struct ScriptStat& operator=(struct ScriptStat&&);

    MCAPI struct ScriptStat& operator=(struct ScriptStat const&);

    MCAPI ~ScriptStat();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
