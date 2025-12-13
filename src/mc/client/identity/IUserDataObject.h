#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Social {

class IUserDataObject {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~IUserDataObject() = default;
#else // LL_PLAT_C
    virtual ~IUserDataObject();
#endif

    virtual ::std::string const& getObjectName() const = 0;

    virtual bool fillFromJSON(::Json::Value const&) = 0;

    virtual ::Json::Value toJSONObject() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
