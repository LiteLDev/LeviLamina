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
    struct Constructor;
    // clang-format on

    // BlockTraitFactory inner types define
    struct Constructor {
    public:
        // prevent constructor by default
        Constructor();

    public:
        // NOLINTBEGIN
        // symbol: ??0Constructor@BlockTraitFactory@@QEAA@AEBU01@@Z
        MCAPI Constructor(struct BlockTraitFactory::Constructor const&);

        // symbol: ??4Constructor@BlockTraitFactory@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct BlockTraitFactory::Constructor& operator=(struct BlockTraitFactory::Constructor const&);

        // symbol: ??1Constructor@BlockTraitFactory@@QEAA@XZ
        MCAPI ~Constructor();

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
    // ?getPropRegisteredTraits@BlockTraitFactory@@SAAEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UConstructor@BlockTraitFactory@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UConstructor@BlockTraitFactory@@@std@@@2@@std@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static std::unordered_map<std::string, struct BlockTraitFactory::Constructor>&
    getPropRegisteredTraits(struct cereal::ReflectionCtx&);

    // symbol: ?registerAllTraits@BlockTraitFactory@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void registerAllTraits(struct cereal::ReflectionCtx&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?getEnTTMetaType@BlockTraitFactory@@CA?AVmeta_type@entt@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static entt::meta_type getEnTTMetaType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
