#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
struct ControllerIDtoClientMap;
// clang-format on

class MinecraftGameShimComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::IMinecraftGame*>> mGame;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftGameShimComponent() = default;

    virtual bool isInGame() const;

    virtual void requestLeaveGame(bool switchScreen, bool sync);

    virtual void quit(::std::string const& src, ::std::string const& reason);

    virtual ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> retrieveCIDToClientMap() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInGame() const;

    MCNAPI void $requestLeaveGame(bool switchScreen, bool sync);

    MCNAPI void $quit(::std::string const& src, ::std::string const& reason);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> $retrieveCIDToClientMap() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
