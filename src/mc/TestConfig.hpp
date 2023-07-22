/**
 * @file  TestConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TestConfig.
 *
 */
class TestConfig {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TESTCONFIG
public:
    class TestConfig& operator=(class TestConfig const &) = delete;
    TestConfig(class TestConfig const &) = delete;
    TestConfig() = delete;
#endif

public:
    /**
     * @symbol  ??0TestConfig\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI TestConfig(std::string const &);
    /**
     * @symbol  ?isLoaded\@TestConfig\@\@QEBA_NXZ
     */
    MCAPI bool isLoaded() const;
    /**
     * @symbol  ??1TestConfig\@\@QEAA\@XZ
     */
    MCAPI ~TestConfig();
    /**
     * @symbol  ?bindType\@TestConfig\@\@SAXXZ
     */
    MCAPI static void bindType();

//private:
    /**
     * @symbol  ?_readFile\@TestConfig\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string _readFile(std::string const &) const;

private:

};