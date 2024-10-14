#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

class DedicatedServerGameTestRunner {
public:
    // prevent constructor by default
    DedicatedServerGameTestRunner& operator=(DedicatedServerGameTestRunner const&);
    DedicatedServerGameTestRunner(DedicatedServerGameTestRunner const&);
    DedicatedServerGameTestRunner();

public:
    // NOLINTBEGIN
    MCAPI DedicatedServerGameTestRunner(
        class TestConfig const&  testConfig,
        class MinecraftGameTest& gameTest,
        class ServerInstance&    server,
        class Level&             level
    );

    MCAPI bool isDone() const;

    MCAPI void tick();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Dimension* _ensureDimension(DimensionType dimensionType);

    MCAPI void _runTestGroup(std::vector<std::string> const& tags);

    MCAPI bool _saveReport();

    MCAPI bool _writeFile(std::string const& fileName, std::string const& contents);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
