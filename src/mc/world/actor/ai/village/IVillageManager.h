#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Village;
namespace mce { class UUID; }
// clang-format on

class IVillageManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IVillageManager() /*override*/;

    virtual ::std::weak_ptr<::Village> fetchClosestVillage(::BlockPos const&, int, uint) const = 0;

    virtual ::std::weak_ptr<::Village> getVillageByID(::mce::UUID const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
