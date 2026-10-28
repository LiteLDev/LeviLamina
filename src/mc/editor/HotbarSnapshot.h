#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

struct HotbarSnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk2af0ce;
    ::ll::UntypedStorage<8, 40>  mUnkffd1b6;
    ::ll::UntypedStorage<8, 864> mUnk875cf4;
    // NOLINTEND

public:
    // prevent constructor by default
    HotbarSnapshot& operator=(HotbarSnapshot const&);
    HotbarSnapshot(HotbarSnapshot const&);
    HotbarSnapshot();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool operator==(::Editor::HotbarSnapshot const& other) const;
#endif

    MCNAPI ~HotbarSnapshot();
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
