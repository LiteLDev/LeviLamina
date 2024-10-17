#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TestConfig {
public:
    // prevent constructor by default
    TestConfig& operator=(TestConfig const&);
    TestConfig(TestConfig const&);
    TestConfig();

public:
    // NOLINTBEGIN
    MCAPI explicit TestConfig(std::string const& fileName);

    MCAPI bool isLoaded() const;

    MCAPI ~TestConfig();

    MCAPI static void bindType();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::string _readFile(std::string const&) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::string const& fileName);

    MCAPI void dtor$();

    // NOLINTEND
};
