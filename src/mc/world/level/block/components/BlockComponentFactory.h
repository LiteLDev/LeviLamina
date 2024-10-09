#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockComponentFactory {
public:
    // BlockComponentFactory inner types declare
    // clang-format off
    struct ComponentMetadata;
    // clang-format on

    // BlockComponentFactory inner types define
    struct ComponentMetadata {
    public:
        // prevent constructor by default
        ComponentMetadata();

    public:
        // NOLINTBEGIN
        MCAPI ComponentMetadata(struct BlockComponentFactory::ComponentMetadata const&);

        MCAPI struct BlockComponentFactory::ComponentMetadata&
        operator=(struct BlockComponentFactory::ComponentMetadata&&);

        MCAPI struct BlockComponentFactory::ComponentMetadata&
        operator=(struct BlockComponentFactory::ComponentMetadata const&);

        MCAPI ~ComponentMetadata();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockComponentFactory& operator=(BlockComponentFactory const&);
    BlockComponentFactory(BlockComponentFactory const&);
    BlockComponentFactory();

public:
    // NOLINTBEGIN
    MCAPI explicit BlockComponentFactory(class Experiments const& experiments);

    MCAPI void initializeFactory(class Experiments const& experiments);

    MCAPI static std::unordered_map<std::string, struct BlockComponentFactory::ComponentMetadata>&
    getPropRegisteredCerealComponents(struct cereal::ReflectionCtx const& ctx);

    MCAPI static void registerAllCerealDescriptions(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static entt::meta_type initEnTTMetaType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};
