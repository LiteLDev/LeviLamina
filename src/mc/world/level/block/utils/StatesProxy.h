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
    // NOLINTBEGIN
    /**
     * @symbol ?bindType\@StatesProxy\@BlockDescriptorSerializer\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol
     * ?fromMap\@StatesProxy\@BlockDescriptorSerializer\@\@QEAAXAEBV?$map\@UStateNameProxy\@BlockDescriptorSerializer\@\@UCompoundProxy\@2\@U?$less\@UStateNameProxy\@BlockDescriptorSerializer\@\@\@std\@\@V?$allocator\@U?$pair\@$$CBUStateNameProxy\@BlockDescriptorSerializer\@\@UCompoundProxy\@2\@\@std\@\@\@5\@\@std\@\@\@Z
     */
    MCAPI void fromMap(std::map<
                       struct BlockDescriptorSerializer::StateNameProxy,
                       struct BlockDescriptorSerializer::CompoundProxy> const&);
    /**
     * @symbol ??4StatesProxy\@BlockDescriptorSerializer\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct BlockDescriptorSerializer::StatesProxy& operator=(struct BlockDescriptorSerializer::StatesProxy&&);
    /**
     * @symbol ??4StatesProxy\@BlockDescriptorSerializer\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct BlockDescriptorSerializer::StatesProxy&
    operator=(struct BlockDescriptorSerializer::StatesProxy const&);
    /**
     * @symbol
     * ?toMap\@StatesProxy\@BlockDescriptorSerializer\@\@SA?AV?$map\@UStateNameProxy\@BlockDescriptorSerializer\@\@UCompoundProxy\@2\@U?$less\@UStateNameProxy\@BlockDescriptorSerializer\@\@\@std\@\@V?$allocator\@U?$pair\@$$CBUStateNameProxy\@BlockDescriptorSerializer\@\@UCompoundProxy\@2\@\@std\@\@\@5\@\@std\@\@AEBU12\@\@Z
     */
    MCAPI static std::
        map<struct BlockDescriptorSerializer::StateNameProxy, struct BlockDescriptorSerializer::CompoundProxy>
        toMap(struct BlockDescriptorSerializer::StatesProxy const&);
    /**
     * @symbol ??1StatesProxy\@BlockDescriptorSerializer\@\@QEAA\@XZ
     */
    MCAPI ~StatesProxy();
    // NOLINTEND
};

}; // namespace BlockDescriptorSerializer
