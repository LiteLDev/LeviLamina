#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace KnockbackRules {

struct KnockbackAttackOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6b8d7d;
    ::ll::UntypedStorage<8, 8>  mUnk8d81f1;
    ::ll::UntypedStorage<4, 12> mUnk2bea8c;
    ::ll::UntypedStorage<4, 4>  mUnk58ec19;
    ::ll::UntypedStorage<4, 4>  mUnk9547d9;
    ::ll::UntypedStorage<1, 1>  mUnka09e5f;
    // NOLINTEND

public:
    // prevent constructor by default
    KnockbackAttackOptions& operator=(KnockbackAttackOptions const&);
    KnockbackAttackOptions(KnockbackAttackOptions const&);
    KnockbackAttackOptions();
};

} // namespace KnockbackRules
