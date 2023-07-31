#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TestConfig {

public:
    // prevent constructor by default
    TestConfig& operator=(TestConfig const&) = delete;
    TestConfig(TestConfig const&)            = delete;
    TestConfig()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0TestConfig\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI TestConfig(std::string const&);
    /**
     * @symbol ?isLoaded\@TestConfig\@\@QEBA_NXZ
     */
    MCAPI bool isLoaded() const;
    /**
     * @symbol ??1TestConfig\@\@QEAA\@XZ
     */
    MCAPI ~TestConfig();
    /**
     * @symbol ?bindType\@TestConfig\@\@SAXXZ
     */
    MCAPI static void bindType();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_readFile\@TestConfig\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string _readFile(std::string const&) const;
    // NOLINTEND
};
