#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AtomicClientEntity { class ComponentInitializer; }
// clang-format on

namespace AtomicClientEntity {

class ComponentRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8fef4c;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ComponentRegistry& operator=(ComponentRegistry const&);
    ComponentRegistry(ComponentRegistry const&);
    ComponentRegistry();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ComponentRegistry& operator=(ComponentRegistry const&);
    ComponentRegistry(ComponentRegistry const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ComponentRegistry();

    MCNAPI void registerInitializer(::std::unique_ptr<::AtomicClientEntity::ComponentInitializer> initializer);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND
};

} // namespace AtomicClientEntity
