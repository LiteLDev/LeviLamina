#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class LevelStorage;
namespace gametest { class BaseGameTestInstance; }
// clang-format on

class GameTestInstanceLedger : public ::gametest::IGameTestListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke7bb35;
    ::ll::UntypedStorage<8, 8>  mUnk275e5b;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestInstanceLedger& operator=(GameTestInstanceLedger const&);
    GameTestInstanceLedger(GameTestInstanceLedger const&);
    GameTestInstanceLedger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance& testInstance) /*override*/;

    // vIndex: 0
    virtual ~GameTestInstanceLedger() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GameTestInstanceLedger(::LevelStorage& storage);

    MCNAPI void clear(::DimensionType dimension);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& GAME_TEST_INSTANCE_PREFIX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelStorage& storage);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance& testInstance);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
