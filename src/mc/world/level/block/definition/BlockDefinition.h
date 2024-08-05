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

    MCAPI static void registerBlockDefinitionTypes(struct cereal::ReflectionCtx&);

    MCAPI static std::pair<bool, class SemVersion>
    upgradeJson(struct cereal::ReflectionCtx const&, std::string&, class Core::Path const&, std::optional<class SemVersion>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class CerealDocumentUpgrader* getCerealDocumentUpgrader(struct cereal::ReflectionCtx const&);

    // NOLINTEND
};
