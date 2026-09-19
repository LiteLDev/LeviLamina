#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/external/render_dragon/resources/ResourcePointer.h"

namespace mce {

template <typename T>
class ServerResourcePointer : public ::mce::ResourcePointer<T> {
public:
    ServerResourcePointer() = default;

    ServerResourcePointer(ResourcePointer<T> const& resourcePointer) {
        if (resourcePointer.mResourcePointerBlock
            && resourcePointer.mResourcePointerBlock->mTrackingBlock.mCheckCount == 0) {
            // assert: server resource pointer must be checked in  [inferred]
        }
        this->mResourcePointerBlock = resourcePointer.mResourcePointerBlock;
    }

    ServerResourcePointer(ServerResourcePointer const&) = default;
    ServerResourcePointer(ServerResourcePointer&&)      = default;

    ServerResourcePointer& operator=(ServerResourcePointer const& other) {
        this->mResourcePointerBlock = other.mResourcePointerBlock;
        return *this;
    }
    ServerResourcePointer& operator=(ResourcePointer<T>&& resourcePointer) {
        this->mResourcePointerBlock = std::move(resourcePointer.mResourcePointerBlock);
        return *this;
    }
};

} // namespace mce
