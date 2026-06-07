#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"
#include "mc/options/AppConfigData.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
struct EDUConfigData;
// clang-format on

class EduConfigDataWrapper : public ::AppConfigData<::EduConfigDataWrapper> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk1d4e43;
    ::ll::UntypedStorage<8, 8>  mUnk40d783;
    ::ll::UntypedStorage<1, 1>  mUnke1342c;
    ::ll::UntypedStorage<8, 32> mUnkebb3aa;
    // NOLINTEND

public:
    // prevent constructor by default
    EduConfigDataWrapper& operator=(EduConfigDataWrapper const&);
    EduConfigDataWrapper(EduConfigDataWrapper const&);
    EduConfigDataWrapper();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI EduConfigDataWrapper(
        ::EDUConfigData const& data,
        ::IMinecraftEventing*  eventing,
        ::edu::Role            role,
        ::std::string          oid
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void*
    $ctor(::EDUConfigData const& data, ::IMinecraftEventing* eventing, ::edu::Role role, ::std::string oid);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
