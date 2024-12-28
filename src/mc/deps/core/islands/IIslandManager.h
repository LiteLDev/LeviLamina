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
    // prevent constructor by default
    IIslandManager& operator=(IIslandManager const&);
    IIslandManager(IIslandManager const&);
    IIslandManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IIslandManager();

    // vIndex: 1
    virtual bool registerIsland(::Bedrock::IslandRegistrationInfo&) = 0;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::IIslandCore> getIsland(ushort) const = 0;

    // vIndex: 3
    virtual void start() = 0;

    // vIndex: 4
    virtual void suspend() = 0;

    // vIndex: 5
    virtual void resume() = 0;

    // vIndex: 6
    virtual void stop() = 0;

    // vIndex: 7
    virtual bool isTransitionComplete() const = 0;

    // vIndex: 8
    virtual void update() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
