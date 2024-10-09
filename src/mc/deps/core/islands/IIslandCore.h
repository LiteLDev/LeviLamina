#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ActivationArguments; }
// clang-format on

namespace Bedrock {

class IIslandCore {
public:
    // prevent constructor by default
    IIslandCore& operator=(IIslandCore const&);
    IIslandCore(IIslandCore const&);
    IIslandCore();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IIslandCore();

    // vIndex: 1
    virtual ushort getId() = 0;

    // vIndex: 2
    virtual bool start() = 0;

    // vIndex: 3
    virtual bool suspend() = 0;

    // vIndex: 4
    virtual bool resume() = 0;

    // vIndex: 5
    virtual bool stop() = 0;

    // vIndex: 6
    virtual void mainUpdate() = 0;

    // vIndex: 7
    virtual void processActivationArguments(class Bedrock::ActivationArguments const& args) = 0;

    // NOLINTEND
};

}; // namespace Bedrock
