/**
 * @file  MinecraftGameTestHelperProvider.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftGameTestHelperProvider.
 *
 */
class MinecraftGameTestHelperProvider {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTGAMETESTHELPERPROVIDER
public:
    class MinecraftGameTestHelperProvider& operator=(class MinecraftGameTestHelperProvider const &) = delete;
    MinecraftGameTestHelperProvider(class MinecraftGameTestHelperProvider const &) = delete;
    MinecraftGameTestHelperProvider() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MinecraftGameTestHelperProvider();
    /**
     * @vftbl  1
     * @symbol  ?createGameTestHelper\@MinecraftGameTestHelperProvider\@\@UEAA?AV?$unique_ptr\@VBaseGameTestHelper\@gametest\@\@U?$default_delete\@VBaseGameTestHelper\@gametest\@\@\@std\@\@\@std\@\@AEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual std::unique_ptr<class gametest::BaseGameTestHelper> createGameTestHelper(class gametest::BaseGameTestInstance &);
    /**
     * @vftbl  2
     * @symbol  ?clone\@MinecraftGameTestHelperProvider\@\@UEAA?AV?$unique_ptr\@VIGameTestHelperProvider\@gametest\@\@U?$default_delete\@VIGameTestHelperProvider\@gametest\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class gametest::IGameTestHelperProvider> clone();

};