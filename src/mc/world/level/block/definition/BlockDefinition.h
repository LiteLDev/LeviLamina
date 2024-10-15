#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockDefinition {
public:
    // prevent constructor by default
    BlockDefinition& operator=(BlockDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI BlockDefinition();

    MCAPI BlockDefinition(struct BlockDefinition&&);

    MCAPI BlockDefinition(struct BlockDefinition const&);

    MCAPI struct BlockDefinition& operator=(struct BlockDefinition&&);

    MCAPI ~BlockDefinition();

    MCAPI static void registerBlockDefinitionTypes(struct cereal::ReflectionCtx& ctx);

    MCAPI static std::pair<bool, class SemVersion> upgradeJson(
        struct cereal::ReflectionCtx const& ctx,
        std::string&                        json,
        class Core::Path const&             resourceName,
        std::optional<class SemVersion>     minVersion
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class CerealDocumentUpgrader* getCerealDocumentUpgrader(struct cereal::ReflectionCtx const& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct BlockDefinition&&);

    MCAPI void* ctor$();

    MCAPI void* ctor$(struct BlockDefinition const&);

    MCAPI void dtor$();

    // NOLINTEND
};
