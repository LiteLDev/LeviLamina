#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
namespace gametest { struct GameTestError; }
// clang-format on

class MinecraftReportGameListener {
public:
    // prevent constructor by default
    MinecraftReportGameListener& operator=(MinecraftReportGameListener const&);
    MinecraftReportGameListener(MinecraftReportGameListener const&);
    MinecraftReportGameListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftReportGameListener() = default;

    // vIndex: 1
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance& testInstance);

    // vIndex: 2
    virtual void onTestPassed(class gametest::BaseGameTestInstance& testInstance);

    // vIndex: 3
    virtual void onTestFailed(class gametest::BaseGameTestInstance& testInstance);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::string _generateErrorDescription(struct gametest::GameTestError const& error) const;

    MCAPI void _reportFailure(struct gametest::GameTestError const& error, class BlockSource& region);

    MCAPI void _say(std::string const& chatColor, std::string const& text);

    MCAPI void _spawnBeacon(class Block const& glassType);

    MCAPI void _spawnLectern(std::string const& text);

    MCAPI void _visualizeFailedTest(struct gametest::GameTestError const& error, class BlockSource&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void onTestFailed$(class gametest::BaseGameTestInstance& testInstance);

    MCAPI void onTestPassed$(class gametest::BaseGameTestInstance& testInstance);

    MCAPI void onTestStructureLoaded$(class gametest::BaseGameTestInstance& testInstance);

    // NOLINTEND
};
