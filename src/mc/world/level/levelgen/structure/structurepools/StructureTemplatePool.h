#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Projection.h"

class StructureTemplatePool {
public:
    // prevent constructor by default
    StructureTemplatePool& operator=(StructureTemplatePool const&);
    StructureTemplatePool(StructureTemplatePool const&);
    StructureTemplatePool();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0StructureTemplatePool@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBV?$vector@U?$pair@PEBVStructurePoolElement@@H@std@@V?$allocator@U?$pair@PEBVStructurePoolElement@@H@std@@@2@@2@@Z
    MCAPI StructureTemplatePool(
        std::string                                                           name,
        std::string                                                           fallback,
        std::vector<std::pair<class StructurePoolElement const*, int>> const& templates
    );

    // symbol:
    // ??0StructureTemplatePool@@QEAA@UStructureTemplateRegistrationContext@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@1W4Projection@@V?$initializer_list@UWeightedStructureTemplateRegistration@@@3@@Z
    MCAPI
    StructureTemplatePool(struct StructureTemplateRegistrationContext, std::string_view, std::string_view, ::Projection, std::initializer_list<struct WeightedStructureTemplateRegistration>);

    // symbol:
    // ?getFallback@StructureTemplatePool@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getFallback() const;

    // symbol: ?getMaxHeight@StructureTemplatePool@@QEBAHXZ
    MCAPI int getMaxHeight() const;

    // symbol: ?getName@StructureTemplatePool@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getName() const;

    // symbol: ?getRandomTemplate@StructureTemplatePool@@QEBAPEBVStructurePoolElement@@AEAVRandom@@@Z
    MCAPI class StructurePoolElement const* getRandomTemplate(class Random& random) const;

    // symbol:
    // ?getShuffledTemplateIndexes@StructureTemplatePool@@QEBA?AV?$vector@_KV?$allocator@_K@std@@@std@@AEAVRandom@@@Z
    MCAPI std::vector<uint64> getShuffledTemplateIndexes(class Random& random) const;

    // symbol: ?getTemplate@StructureTemplatePool@@QEBAPEBVStructurePoolElement@@_K@Z
    MCAPI class StructurePoolElement const* getTemplate(uint64 index) const;

    // symbol:
    // ?getTemplates@StructureTemplatePool@@QEBAAEBV?$vector@PEBVStructurePoolElement@@V?$allocator@PEBVStructurePoolElement@@@std@@@std@@XZ
    MCAPI std::vector<class StructurePoolElement const*> const& getTemplates() const;

    // symbol: ?isValid@StructureTemplatePool@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?size@StructureTemplatePool@@QEBA_KXZ
    MCAPI uint64 size() const;

    // symbol:
    // ?create@StructureTemplatePool@@SA?AV?$unique_ptr@VStructureTemplatePool@@U?$default_delete@VStructureTemplatePool@@@std@@@std@@UStructureTemplateRegistrationContext@@V?$basic_string_view@DU?$char_traits@D@std@@@3@1V?$initializer_list@UWeightedStructureTemplateRegistration@@@3@W4Projection@@@Z
    MCAPI static std::unique_ptr<class StructureTemplatePool> create(
        struct StructureTemplateRegistrationContext,
        std::string_view,
        std::string_view,
        std::initializer_list<struct WeightedStructureTemplateRegistration>,
        ::Projection
    );

    // NOLINTEND
};
