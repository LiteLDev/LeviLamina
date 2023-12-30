#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class PortInterface {
public:
    // PortInterface inner types define
    enum class CandidateOrigin {};

public:
    // prevent constructor by default
    PortInterface& operator=(PortInterface const&);
    PortInterface(PortInterface const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PortInterface@cricket@@UEAA@XZ
    virtual ~PortInterface();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0PortInterface@cricket@@IEAA@XZ
    MCAPI PortInterface();

    // NOLINTEND
};

}; // namespace cricket
