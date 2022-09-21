/**
 * @file  MC/MockUnknownBlockTypeRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MockUnknownBlockTypeRegistry.
 *
 */
class MockUnknownBlockTypeRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOCKUNKNOWNBLOCKTYPEREGISTRY
public:
    class MockUnknownBlockTypeRegistry& operator=(class MockUnknownBlockTypeRegistry const &) = delete;
    MockUnknownBlockTypeRegistry(class MockUnknownBlockTypeRegistry const &) = delete;
    MockUnknownBlockTypeRegistry() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MockUnknownBlockTypeRegistry();
    /**
     * @hash   -262839268
     * @vftbl  1
     * @symbol ?getUnknownBlock@MockUnknownBlockTypeRegistry@@UEAAAEBVBlock@@AEBVCompoundTag@@@Z
     */
    virtual class Block const & getUnknownBlock(class CompoundTag const &);

};