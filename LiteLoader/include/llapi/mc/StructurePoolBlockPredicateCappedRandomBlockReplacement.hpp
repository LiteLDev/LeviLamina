/**
 * @file  StructurePoolBlockPredicateCappedRandomBlockReplacement.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class StructurePoolBlockPredicateCappedRandomBlockReplacement {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATECAPPEDRANDOMBLOCKREPLACEMENT
public:
    class StructurePoolBlockPredicateCappedRandomBlockReplacement& operator=(class StructurePoolBlockPredicateCappedRandomBlockReplacement const &) = delete;
    StructurePoolBlockPredicateCappedRandomBlockReplacement(class StructurePoolBlockPredicateCappedRandomBlockReplacement const &) = delete;
    StructurePoolBlockPredicateCappedRandomBlockReplacement() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?test\@StructurePoolBlockPredicateCappedRandomBlockReplacement\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    virtual bool test(class Block const &, class Randomize &) const;
    /**
     * @vftbl 2
     * @symbol ?test\@StructurePoolBlockPredicateCappedRandomBlockReplacement\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    virtual bool test(class BlockPos const &, class BlockPos const &, class Randomize &) const;
    /**
     * @vftbl 3
     * @symbol ?finalize\@StructurePoolBlockPredicateCappedRandomBlockReplacement\@\@UEAA_NAEAVBlockSource\@\@AEAVIRandom\@\@\@Z
     */
    virtual bool finalize(class BlockSource &, class IRandom &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREPOOLBLOCKPREDICATECAPPEDRANDOMBLOCKREPLACEMENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StructurePoolBlockPredicateCappedRandomBlockReplacement();
#endif
    /**
     * @symbol ??0StructurePoolBlockPredicateCappedRandomBlockReplacement\@\@QEAA\@AEBV?$map\@VHashedString\@\@V1\@U?$less\@VHashedString\@\@\@std\@\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V1\@\@std\@\@\@3\@\@std\@\@_K\@Z
     */
    MCAPI StructurePoolBlockPredicateCappedRandomBlockReplacement(class std::map<class HashedString, class HashedString, struct std::less<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString>>> const &, unsigned __int64);

//protected:
    /**
     * @symbol ?_finalize\@StructurePoolBlockPredicateCappedRandomBlockReplacement\@\@IEAA_NAEAVBlockSource\@\@AEAVIRandom\@\@V?$function\@$$A6AXAEAVBlockPos\@\@\@Z\@std\@\@\@Z
     */
    MCAPI bool _finalize(class BlockSource &, class IRandom &, class std::function<void (class BlockPos &)>);

protected:

};
