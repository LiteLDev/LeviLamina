#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

struct HotbarCollectionSnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk86a972;
    ::ll::UntypedStorage<8, 24> mUnkd21056;
    ::ll::UntypedStorage<8, 48> mUnk94a067;
    ::ll::UntypedStorage<8, 8>  mUnk73487a;
    // NOLINTEND

public:
    // prevent constructor by default
    HotbarCollectionSnapshot& operator=(HotbarCollectionSnapshot const&);
    HotbarCollectionSnapshot(HotbarCollectionSnapshot const&);
    HotbarCollectionSnapshot();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~HotbarCollectionSnapshot();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
