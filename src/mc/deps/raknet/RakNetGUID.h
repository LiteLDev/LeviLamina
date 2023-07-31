#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakNetGUID {

public:
    // prevent constructor by default
    RakNetGUID& operator=(RakNetGUID const&) = delete;
    RakNetGUID(RakNetGUID const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?FromString\@RakNetGUID\@RakNet\@\@QEAA_NPEBD\@Z
     */
    MCAPI bool FromString(char const*);
    /**
     * @symbol ??0RakNetGUID\@RakNet\@\@QEAA\@XZ
     */
    MCAPI RakNetGUID();
    /**
     * @symbol ?ToString\@RakNetGUID\@RakNet\@\@QEBAPEBDXZ
     */
    MCAPI char const* ToString() const;
    /**
     * @symbol ??8RakNetGUID\@RakNet\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator==(struct RakNet::RakNetGUID const&) const;
    /**
     * @symbol ?ToUint32\@RakNetGUID\@RakNet\@\@SAKAEBU12\@\@Z
     */
    MCAPI static unsigned long ToUint32(struct RakNet::RakNetGUID const&);
    // NOLINTEND
};

}; // namespace RakNet
