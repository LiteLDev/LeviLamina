#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockTraitFactory {
public:
    // BlockTraitFactory inner types declare
    // clang-format off
    struct TraitMetadata;
    // clang-format on

    // BlockTraitFactory inner types define
    struct TraitMetadata {
    public:
        // prevent constructor by default
        TraitMetadata();

    public:
        // NOLINTBEGIN
        MCAPI TraitMetadata(struct BlockTraitFactory::TraitMetadata const&);

        MCAPI struct BlockTraitFactory::TraitMetadata& operator=(struct BlockTraitFactory::TraitMetadata&&);

        MCAPI struct BlockTraitFactory::TraitMetadata& operator=(struct BlockTraitFactory::TraitMetadata const&);

        MCAPI ~TraitMetadata();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockTraitFactory& operator=(BlockTraitFactory const&);
    BlockTraitFactory(BlockTraitFactory const&);

public:
    // NOLINTBEGIN
    MCAPI BlockTraitFactory();

    MCAPI ~BlockTraitFactory();

    MCAPI static std::unordered_map<std::string, struct BlockTraitFactory::TraitMetadata>&
    getPropRegisteredTraits(struct cereal::ReflectionCtx const& ctx);

    MCAPI static void registerAllTraits(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static entt::meta_type initEnTTMetaType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};
