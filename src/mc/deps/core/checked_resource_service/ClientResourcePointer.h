#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/external/render_dragon/resources/ResourcePointer.h"

namespace mce {

template <typename T>
class ClientResourcePointer : public ResourcePointer<T> {
public:
    ClientResourcePointer() = default;
    explicit ClientResourcePointer(std::shared_ptr<ResourceBlockTemplate<T>> const& block)
    : ResourcePointer<T>(block) {} // [inferred]
};

} // namespace mce
