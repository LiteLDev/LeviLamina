#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/islands/IIslandCore.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ActivationArguments; }
namespace Bedrock { class IIslandCore; }
// clang-format on

namespace Bedrock {

class AppIsland : public ::Bedrock::IIslandCore {
public:
    // prevent constructor by default
    AppIsland& operator=(AppIsland const&);
    AppIsland(AppIsland const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AppIsland();

    // vIndex: 1
    virtual ushort getId();

    // vIndex: 2
    virtual bool start();

    // vIndex: 3
    virtual bool suspend();

    // vIndex: 4
    virtual bool resume();

    // vIndex: 5
    virtual bool stop();

    // vIndex: 6
    virtual void mainUpdate();

    // vIndex: 7
    virtual void processActivationArguments(class Bedrock::ActivationArguments const& args);

    MCAPI AppIsland();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI ushort getId$();

    MCAPI void mainUpdate$();

    MCAPI void processActivationArguments$(class Bedrock::ActivationArguments const& args);

    MCAPI bool resume$();

    MCAPI bool start$();

    MCAPI bool stop$();

    MCAPI bool suspend$();

    // NOLINTEND
};

}; // namespace Bedrock
