#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

struct AddressOrGUID {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_ADDRESSORGUID
public:
    AddressOrGUID& operator=(AddressOrGUID const&) = delete;
    AddressOrGUID()                                = delete;
#endif

public:
    /**
     * @symbol ??0AddressOrGUID\@RakNet\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI AddressOrGUID(struct RakNet::AddressOrGUID const&);
    /**
     * @symbol ??0AddressOrGUID\@RakNet\@\@QEAA\@AEBUSystemAddress\@1\@\@Z
     */
    MCAPI AddressOrGUID(struct RakNet::SystemAddress const&);
    /**
     * @symbol ?IsUndefined\@AddressOrGUID\@RakNet\@\@QEBA_NXZ
     */
    MCAPI bool IsUndefined() const;
};

}; // namespace RakNet
