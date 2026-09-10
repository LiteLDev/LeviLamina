#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IPackLoadScoped.h"
#include "mc/util/EventResponseFactory.h"

// auto generated forward declare list
// clang-format off
struct PackLoadInfo;
// clang-format on

class BlockEventResponseFactory : public ::EventResponseFactory, public ::IPackLoadScoped {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~BlockEventResponseFactory() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~BlockEventResponseFactory() /*override*/;
#endif

    virtual void initializeFactory(::PackLoadInfo const& packLoadInfo) /*override*/;

    virtual void initSchema() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFactory(::PackLoadInfo const& packLoadInfo);

    MCAPI void $initSchema();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIPackLoadScoped();

    MCNAPI static void** $vftableForEventResponseFactory();
    // NOLINTEND
};
