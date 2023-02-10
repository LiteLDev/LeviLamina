/**
 * @file  TestConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -244976815
     * @symbol  ??0TestConfig\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI TestConfig(std::string const &);
    /**
     * @hash   576489988
     * @symbol  ?isLoaded\@TestConfig\@\@QEBA_NXZ
     */
    MCAPI bool isLoaded() const;
    /**
     * @hash   884543470
     * @symbol  ??1TestConfig\@\@QEAA\@XZ
     */
    MCAPI ~TestConfig();
    /**
     * @hash   2100526035
     * @symbol  ?bindType\@TestConfig\@\@SAXXZ
     */
    MCAPI static void bindType();

//private:
    /**
     * @hash   -1598803914
     * @symbol  ?_readFile\@TestConfig\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string _readFile(std::string const &) const;

private:

};