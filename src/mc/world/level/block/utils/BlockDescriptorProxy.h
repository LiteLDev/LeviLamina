#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct BlockDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockDescriptorSerializer {

struct BlockDescriptorProxy {
public:
    // prevent constructor by default
    BlockDescriptorProxy& operator=(BlockDescriptorProxy const&);
    BlockDescriptorProxy(BlockDescriptorProxy const&);
    BlockDescriptorProxy();

public:
    // NOLINTBEGIN
    // symbol: ??0BlockDescriptorProxy@BlockDescriptorSerializer@@QEAA@UBlockDescriptor@v1_20_50@Puv@@@Z
    MCAPI explicit BlockDescriptorProxy(struct Puv::v1_20_50::BlockDescriptor);

    // symbol:
    // ??0BlockDescriptorProxy@BlockDescriptorSerializer@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@UState@BlockDescriptor@@V?$allocator@UState@BlockDescriptor@@@std@@@3@0@Z
    MCAPI BlockDescriptorProxy(std::string, std::vector<struct BlockDescriptor::State>, std::string);

    // symbol: ??1BlockDescriptorProxy@BlockDescriptorSerializer@@QEAA@XZ
    MCAPI ~BlockDescriptorProxy();

    // symbol: ?bindType@BlockDescriptorProxy@BlockDescriptorSerializer@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace BlockDescriptorSerializer
