#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::v1_20_50::BlockDescriptorSerializer {

struct BlockDescriptorProxy {
public:
    // prevent constructor by default
    BlockDescriptorProxy& operator=(BlockDescriptorProxy const&);
    BlockDescriptorProxy();

public:
    // NOLINTBEGIN
    MCAPI BlockDescriptorProxy(struct Puv::v1_20_50::BlockDescriptorSerializer::BlockDescriptorProxy const&);

    MCAPI ~BlockDescriptorProxy();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Puv::v1_20_50::BlockDescriptorSerializer
