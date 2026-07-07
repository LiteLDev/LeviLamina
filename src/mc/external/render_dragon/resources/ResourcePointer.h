#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/external/render_dragon/resources/ResourceBlockTemplate.h"

namespace mce {

template <typename T0>
class ResourcePointer {
public:
    ::std::shared_ptr<::mce::ResourceBlockTemplate<T0>> mResourcePointerBlock;

    virtual ~ResourcePointer() = default;
};

} // namespace mce
