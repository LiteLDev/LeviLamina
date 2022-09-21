/**
 * @file  MC/BlockEventResponseFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockEventResponseFactory.
 *
 */
class BlockEventResponseFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTRESPONSEFACTORY
public:
    class BlockEventResponseFactory& operator=(class BlockEventResponseFactory const &) = delete;
    BlockEventResponseFactory(class BlockEventResponseFactory const &) = delete;
    BlockEventResponseFactory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockEventResponseFactory();
    /**
     * @hash   824103694
     * @vftbl  1
     * @symbol ?initializeFactory@BlockEventResponseFactory@@UEAAXAEBVExperiments@@@Z
     */
    virtual void initializeFactory(class Experiments const &);
    /**
     * @hash   -1449401252
     * @vftbl  2
     * @symbol ?initSchema@BlockEventResponseFactory@@UEAAXXZ
     */
    virtual void initSchema();

};