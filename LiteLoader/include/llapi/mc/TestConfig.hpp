/**
 * @file  TestConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1997337699
     * @symbol ?bindType@TestConfig@@SAXXZ
     */
    MCAPI static void bindType();

};