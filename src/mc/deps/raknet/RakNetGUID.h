#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakNetGUID {

public:
    // prevent constructor by default
    RakNetGUID& operator=(RakNetGUID const&) = delete;
    RakNetGUID(RakNetGUID const&)            = delete;

public:
    /**
     * @symbol ?FromString\@RakNetGUID\@RakNet\@\@QEAA_NPEBD\@Z
     */
    MCAPI bool FromString(char const*); // NOLINT
    /**
     * @symbol ??0RakNetGUID\@RakNet\@\@QEAA\@XZ
     */
    MCAPI RakNetGUID(); // NOLINT
    /**
     * @symbol ?ToString\@RakNetGUID\@RakNet\@\@QEBAPEBDXZ
     */
    MCAPI char const* ToString() const; // NOLINT
    /**
     * @symbol ??8RakNetGUID\@RakNet\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator==(struct RakNet::RakNetGUID const&) const; // NOLINT
    /**
     * @symbol ?ToUint32\@RakNetGUID\@RakNet\@\@SAKAEBU12\@\@Z
     */
    MCAPI static unsigned long ToUint32(struct RakNet::RakNetGUID const&); // NOLINT
};

}; // namespace RakNet
