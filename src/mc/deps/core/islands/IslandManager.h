#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/islands/IIslandManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class IIslandCore; }
namespace Bedrock { class IslandRegistrationInfo; }
// clang-format on

namespace Bedrock {

class IslandManager : public ::Bedrock::IIslandManager,
                      public ::std::enable_shared_from_this<::Bedrock::IslandManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4be2b1;
    ::ll::UntypedStorage<8, 80> mUnk6ed9b3;
    ::ll::UntypedStorage<1, 1>  mUnk42cc4a;
    ::ll::UntypedStorage<4, 4>  mUnk277a64;
    ::ll::UntypedStorage<8, 80> mUnkc574d9;
    ::ll::UntypedStorage<8, 24> mUnk1bb8f4;
    // NOLINTEND

public:
    // prevent constructor by default
    IslandManager& operator=(IslandManager const&);
    IslandManager(IslandManager const&);
    IslandManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IslandManager() /*override*/ = default;

    virtual bool registerIsland(::Bedrock::IslandRegistrationInfo&) /*override*/;

    virtual ::std::shared_ptr<::Bedrock::IIslandCore> getIsland(ushort) const /*override*/;

    virtual void start() /*override*/;

    virtual void suspend() /*override*/;

    virtual void resume() /*override*/;

    virtual void stop() /*override*/;

    virtual bool isTransitionComplete() const /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
