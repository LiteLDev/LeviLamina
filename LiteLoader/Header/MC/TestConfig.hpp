// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TESTCONFIG
public:
#endif
    MCAPI static void bindType();



};