#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Util::CodeBuilder { struct Event; }
// clang-format on

namespace CodeBuilder {

struct EventMessage {
public:
    // prevent constructor by default
    EventMessage& operator=(EventMessage const&);
    EventMessage(EventMessage const&);
    EventMessage();

public:
    // NOLINTBEGIN
    // symbol: ??0EventMessage@CodeBuilder@@QEAA@AEBUEvent@1Util@@@Z
    MCAPI explicit EventMessage(struct Util::CodeBuilder::Event const& event);

    // symbol: ??1EventMessage@CodeBuilder@@QEAA@XZ
    MCAPI ~EventMessage();

    // NOLINTEND
};

}; // namespace CodeBuilder
