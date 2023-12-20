#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class IceControllerInterface {
public:
    // IceControllerInterface inner types declare
    // clang-format off
    struct PingResult;
    struct SwitchResult;
    // clang-format on

    // IceControllerInterface inner types define
    struct PingResult {
    public:
        // prevent constructor by default
        PingResult& operator=(PingResult const&);
        PingResult(PingResult const&);
        PingResult();
    };

    struct SwitchResult {
    public:
        // prevent constructor by default
        SwitchResult& operator=(SwitchResult const&);
        SwitchResult();

    public:
        // NOLINTBEGIN
        // symbol: ??0SwitchResult@IceControllerInterface@cricket@@QEAA@AEBU012@@Z
        MCAPI SwitchResult(struct cricket::IceControllerInterface::SwitchResult const&);

        // symbol: ??1SwitchResult@IceControllerInterface@cricket@@QEAA@XZ
        MCAPI ~SwitchResult();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    IceControllerInterface& operator=(IceControllerInterface const&);
    IceControllerInterface(IceControllerInterface const&);
    IceControllerInterface();
};

}; // namespace cricket
