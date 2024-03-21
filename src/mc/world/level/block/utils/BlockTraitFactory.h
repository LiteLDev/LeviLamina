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
        // symbol: ??0TraitMetadata@BlockTraitFactory@@QEAA@AEBU01@@Z
        MCAPI TraitMetadata(struct BlockTraitFactory::TraitMetadata const&);

        // symbol: ??4TraitMetadata@BlockTraitFactory@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct BlockTraitFactory::TraitMetadata& operator=(struct BlockTraitFactory::TraitMetadata&&);

        // symbol: ??4TraitMetadata@BlockTraitFactory@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct BlockTraitFactory::TraitMetadata& operator=(struct BlockTraitFactory::TraitMetadata const&);

        // symbol: ??1TraitMetadata@BlockTraitFactory@@QEAA@XZ
        MCAPI ~TraitMetadata();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockTraitFactory& operator=(BlockTraitFactory const&);
    BlockTraitFactory(BlockTraitFactory const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BlockTraitFactory@@QEAA@XZ
    MCAPI BlockTraitFactory();

    // symbol: ??1BlockTraitFactory@@QEAA@XZ
    MCAPI ~BlockTraitFactory();

    // symbol:
    // ?getPropRegisteredTraits@BlockTraitFactory@@SAAEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTraitMetadata@BlockTraitFactory@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTraitMetadata@BlockTraitFactory@@@std@@@2@@std@@AEBUReflectionCtx@cereal@@@Z
    MCAPI static std::unordered_map<std::string, struct BlockTraitFactory::TraitMetadata>&
    getPropRegisteredTraits(struct cereal::ReflectionCtx const&);

    // symbol: ?registerAllTraits@BlockTraitFactory@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void registerAllTraits(struct cereal::ReflectionCtx&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?initEnTTMetaType@BlockTraitFactory@@CA?AVmeta_type@entt@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static entt::meta_type initEnTTMetaType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
