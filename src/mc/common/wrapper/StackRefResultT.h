#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/Ref.h"

template <typename T0>
class StackRefResultT : public T0::StackResultStorage {
public:
    using StackRef = typename T0::StackRef;
};
