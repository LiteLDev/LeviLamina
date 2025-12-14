#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/GameControllerMapper.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class IGameController;
struct GameControllerInputMapping;
struct InputMapping;
// clang-format on

class GamePadMapper : public ::GameControllerMapper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::InputMode getInputMode() const /*override*/;

    virtual ::std::vector<::std::weak_ptr<::IGameController>> _getGameControllers() /*override*/;

    virtual ::GameControllerInputMapping const&
    getGameControllerMapping(::InputMapping const& inputMapping) /*override*/;

    virtual ~GamePadMapper() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::InputMode $getInputMode() const;

    MCAPI ::std::vector<::std::weak_ptr<::IGameController>> $_getGameControllers();

    MCAPI ::GameControllerInputMapping const& $getGameControllerMapping(::InputMapping const& inputMapping);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
