#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/v1_20_50/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockDescriptorSerializer {

struct StatesProxy {
public:
    // prevent constructor by default
    StatesProxy(StatesProxy const&);
    StatesProxy();

public:
    // NOLINTBEGIN
    MCAPI void fromMap(std::map<std::string, struct Puv::v1_20_50::BlockDescriptor::Compound> const& proxyMap);

    MCAPI struct BlockDescriptorSerializer::StatesProxy& operator=(struct BlockDescriptorSerializer::StatesProxy&&);

    MCAPI struct BlockDescriptorSerializer::StatesProxy&
    operator=(struct BlockDescriptorSerializer::StatesProxy const&);

    MCAPI ~StatesProxy();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static std::map<std::string, struct Puv::v1_20_50::BlockDescriptor::Compound>
    toMap(struct BlockDescriptorSerializer::StatesProxy const& instance);

    // NOLINTEND
};

}; // namespace BlockDescriptorSerializer
