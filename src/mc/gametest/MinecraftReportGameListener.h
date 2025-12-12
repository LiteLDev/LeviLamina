#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
namespace gametest { class BaseGameTestInstance; }
namespace gametest { struct GameTestError; }
// clang-format on

class MinecraftReportGameListener : public ::gametest::IGameTestListener,
                                    public ::std::enable_shared_from_this<::MinecraftReportGameListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk80c891;
    ::ll::UntypedStorage<8, 8> mUnk479f87;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftReportGameListener& operator=(MinecraftReportGameListener const&);
    MinecraftReportGameListener(MinecraftReportGameListener const&);
    MinecraftReportGameListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftReportGameListener() /*override*/ = default;

    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance& testInstance) /*override*/;

    virtual void onTestPassed(::gametest::BaseGameTestInstance& testInstance) /*override*/;

    virtual void onTestFailed(::gametest::BaseGameTestInstance& testInstance) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string _generateErrorDescription(::gametest::GameTestError const& error) const;

    MCNAPI void _reportFailure(::gametest::GameTestError const& error, ::BlockSource& region);

    MCNAPI void _say(::std::string const& chatColor, ::std::string const& text);

    MCNAPI void _spawnBeacon(::Block const& glassType);

    MCNAPI void _spawnLectern(::std::string const& text);

    MCNAPI void _visualizeFailedTest(::gametest::GameTestError const& error, ::BlockSource&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance& testInstance);

    MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance& testInstance);

    MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance& testInstance);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
