#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/SharePtrRefTraits.h"

template <typename T0>
class OwnerPtrT : public T0::OwnerStorage {};