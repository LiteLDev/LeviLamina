/**
 * @file  UnknownBlockTypeRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class UnknownBlockTypeRegistry.
 *
 */
class UnknownBlockTypeRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNKNOWNBLOCKTYPEREGISTRY
public:
    class UnknownBlockTypeRegistry& operator=(class UnknownBlockTypeRegistry const &) = delete;
    UnknownBlockTypeRegistry(class UnknownBlockTypeRegistry const &) = delete;
    UnknownBlockTypeRegistry() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~UnknownBlockTypeRegistry();
    /**
     * @vftbl  1
     * @symbol  ?getUnknownBlock\@UnknownBlockTypeRegistry\@\@UEAAAEBVBlock\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual class Block const & getUnknownBlock(class CompoundTag const &);

//private:
    /**
     * @symbol  ?_registerBlock\@UnknownBlockTypeRegistry\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_K\@Z
     */
    MCAPI void _registerBlock(std::string const &, unsigned __int64);

private:

};