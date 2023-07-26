#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

struct AddressOrGUID {

public:
    // prevent constructor by default
    AddressOrGUID& operator=(AddressOrGUID const&) = delete;
    AddressOrGUID()                                = delete;

public:
    /**
     * @symbol ??0AddressOrGUID\@RakNet\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI AddressOrGUID(struct RakNet::AddressOrGUID const&); // NOLINT
    /**
     * @symbol ??0AddressOrGUID\@RakNet\@\@QEAA\@AEBUSystemAddress\@1\@\@Z
     */
    MCAPI AddressOrGUID(struct RakNet::SystemAddress const&); // NOLINT
    /**
     * @symbol ?IsUndefined\@AddressOrGUID\@RakNet\@\@QEBA_NXZ
     */
    MCAPI bool IsUndefined() const; // NOLINT
};

}; // namespace RakNet
