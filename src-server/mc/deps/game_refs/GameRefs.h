#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <class T>
struct GameRefs {
    using OwnerStorage       = std::shared_ptr<T>;
    using StackResultStorage = std::shared_ptr<T>;
    using WeakStorage        = std::weak_ptr<T>;
    using StackRef           = T;
};
