#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class IIslandCore; }
namespace Bedrock { class IslandRegistrationInfo; }
// clang-format on

namespace Bedrock {

class IIslandManager {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IIslandManager() = default;

    virtual bool registerIsland(::Bedrock::IslandRegistrationInfo&) = 0;

    virtual ::std::shared_ptr<::Bedrock::IIslandCore> getIsland(ushort) const = 0;

    virtual void start() = 0;

    virtual void suspend() = 0;

    virtual void resume() = 0;

    virtual void stop() = 0;

    virtual bool isTransitionComplete() const = 0;

    virtual void update() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
