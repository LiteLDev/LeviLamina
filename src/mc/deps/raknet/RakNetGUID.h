#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakNetGUID {
public:
    uint64 g;
    ushort systemIndex;

public:
    // NOLINTBEGIN
    // symbol: ?FromString@RakNetGUID@RakNet@@QEAA_NPEBD@Z
    MCAPI bool FromString(char const* source);

    // symbol: ??0RakNetGUID@RakNet@@QEAA@XZ
    MCAPI RakNetGUID();

    // symbol: ?ToString@RakNetGUID@RakNet@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ??9RakNetGUID@RakNet@@QEBA_NAEBU01@@Z
    MCAPI bool operator!=(struct RakNet::RakNetGUID const& right) const;

    // symbol: ??8RakNetGUID@RakNet@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct RakNet::RakNetGUID const& right) const;

    // symbol: ?ToUint32@RakNetGUID@RakNet@@SAKAEBU12@@Z
    MCAPI static ulong ToUint32(struct RakNet::RakNetGUID const& g);

    // NOLINTEND
};

}; // namespace RakNet
