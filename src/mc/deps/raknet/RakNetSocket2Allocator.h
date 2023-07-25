#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakNetSocket2; }
// clang-format on

namespace RakNet {

class RakNetSocket2Allocator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_RAKNETSOCKET2ALLOCATOR
public:
    RakNetSocket2Allocator& operator=(RakNetSocket2Allocator const&) = delete;
    RakNetSocket2Allocator(RakNetSocket2Allocator const&)            = delete;
    RakNetSocket2Allocator()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ?CreateSharedRNS2\@RakNetSocket2Allocator\@RakNet\@\@SA?AV?$shared_ptr\@VRakNetSocket2\@RakNet\@\@\@std\@\@XZ
     */
    MCAPI static class std::shared_ptr<class RakNet::RakNetSocket2> CreateSharedRNS2();

    // private:
    /**
     * @symbol ?DeallocRNS2\@RakNetSocket2Allocator\@RakNet\@\@CAXPEAVRakNetSocket2\@2\@\@Z
     */
    MCAPI static void DeallocRNS2(class RakNet::RakNetSocket2*);

private:
};

}; // namespace RakNet
