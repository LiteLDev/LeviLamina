/**
 * @file  IUnknownBlockTypeRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IUnknownBlockTypeRegistry.
 *
 */
class IUnknownBlockTypeRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IUNKNOWNBLOCKTYPEREGISTRY
public:
    class IUnknownBlockTypeRegistry& operator=(class IUnknownBlockTypeRegistry const &) = delete;
    IUnknownBlockTypeRegistry(class IUnknownBlockTypeRegistry const &) = delete;
    IUnknownBlockTypeRegistry() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol ?getUnknownBlock\@UnknownBlockTypeRegistry\@\@UEAAAEBVBlock\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual class Block const & getUnknownBlock(class CompoundTag const &) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IUNKNOWNBLOCKTYPEREGISTRY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IUnknownBlockTypeRegistry();
#endif

};
