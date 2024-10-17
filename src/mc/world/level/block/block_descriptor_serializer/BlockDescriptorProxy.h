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
    MCAPI explicit BlockDescriptorProxy(struct Puv::v1_20_50::BlockDescriptor desc);

    MCAPI BlockDescriptorProxy(std::string, std::vector<struct BlockDescriptor::State>, std::string);

    MCAPI ~BlockDescriptorProxy();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct Puv::v1_20_50::BlockDescriptor desc);

    MCAPI void* ctor$(std::string, std::vector<struct BlockDescriptor::State>, std::string);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace BlockDescriptorSerializer
