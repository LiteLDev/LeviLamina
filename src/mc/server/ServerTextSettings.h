#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class ServerTextSettings : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::bitset<3>> mEnabledTextEvents;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ServerTextSettings();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI explicit ServerTextSettings(::std::bitset<3> const& settings);
#endif

    MCFOLD ::std::bitset<3> const& getEnabledServerTextEvents() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::std::bitset<3> const& settings);
#endif
    // NOLINTEND
};
