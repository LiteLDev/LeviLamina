#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockDescriptorSerializer { struct CompoundProxy; }
namespace BlockDescriptorSerializer { struct StateNameProxy; }
// clang-format on

namespace BlockDescriptorSerializer {

struct StatesProxy {

public:
    // prevent constructor by default
    StatesProxy(StatesProxy const&) = delete;
    StatesProxy()                   = delete;

public:
    /**
     * @symbol
     * ?fromMap\@StatesProxy\@BlockDescriptorSerializer\@\@QEAAXAEBV?$map\@UStateNameProxy\@BlockDescriptorSerializer\@\@UCompoundProxy\@2\@U?$less\@UStateNameProxy\@BlockDescriptorSerializer\@\@\@std\@\@V?$allocator\@U?$pair\@$$CBUStateNameProxy\@BlockDescriptorSerializer\@\@UCompoundProxy\@2\@\@std\@\@\@5\@\@std\@\@\@Z
     */
    MCAPI void fromMap(class std::map<
                       struct BlockDescriptorSerializer::StateNameProxy,
                       struct BlockDescriptorSerializer::CompoundProxy,
                       struct std::less<struct BlockDescriptorSerializer::StateNameProxy>,
                       class std::allocator<struct std::pair<
                           struct BlockDescriptorSerializer::StateNameProxy const,
                           struct BlockDescriptorSerializer::CompoundProxy>>> const&); // NOLINT
    /**
     * @symbol ??4StatesProxy\@BlockDescriptorSerializer\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct BlockDescriptorSerializer::StatesProxy&
    operator=(struct BlockDescriptorSerializer::StatesProxy&&); // NOLINT
    /**
     * @symbol ??4StatesProxy\@BlockDescriptorSerializer\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct BlockDescriptorSerializer::StatesProxy&
    operator=(struct BlockDescriptorSerializer::StatesProxy const&); // NOLINT
    /**
     * @symbol ??1StatesProxy\@BlockDescriptorSerializer\@\@QEAA\@XZ
     */
    MCAPI ~StatesProxy(); // NOLINT
    /**
     * @symbol ?bindType\@StatesProxy\@BlockDescriptorSerializer\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol
     * ?toMap\@StatesProxy\@BlockDescriptorSerializer\@\@SA?AV?$map\@UStateNameProxy\@BlockDescriptorSerializer\@\@UCompoundProxy\@2\@U?$less\@UStateNameProxy\@BlockDescriptorSerializer\@\@\@std\@\@V?$allocator\@U?$pair\@$$CBUStateNameProxy\@BlockDescriptorSerializer\@\@UCompoundProxy\@2\@\@std\@\@\@5\@\@std\@\@AEBU12\@\@Z
     */
    MCAPI static class std::map<
        struct BlockDescriptorSerializer::StateNameProxy,
        struct BlockDescriptorSerializer::CompoundProxy,
        struct std::less<struct BlockDescriptorSerializer::StateNameProxy>,
        class std::allocator<struct std::pair<
            struct BlockDescriptorSerializer::StateNameProxy const,
            struct BlockDescriptorSerializer::CompoundProxy>>>
    toMap(struct BlockDescriptorSerializer::StatesProxy const&); // NOLINT
};

}; // namespace BlockDescriptorSerializer
