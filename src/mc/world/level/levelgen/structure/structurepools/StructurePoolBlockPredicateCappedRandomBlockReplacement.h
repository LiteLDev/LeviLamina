#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolBlockPredicateCappedRandomBlockReplacement {

public:
    // prevent constructor by default
    StructurePoolBlockPredicateCappedRandomBlockReplacement&
    operator=(StructurePoolBlockPredicateCappedRandomBlockReplacement const&) = delete;
    StructurePoolBlockPredicateCappedRandomBlockReplacement(StructurePoolBlockPredicateCappedRandomBlockReplacement const&) =
        delete;
    StructurePoolBlockPredicateCappedRandomBlockReplacement() = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?test\@StructurePoolBlockPredicateCappedRandomBlockReplacement\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    virtual bool test(class Block const&, class Randomize&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?test\@StructurePoolBlockPredicateCappedRandomBlockReplacement\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;
    /**
     * @vftbl 3
     * @symbol
     * ?finalize\@StructurePoolBlockPredicateCappedRandomBlockReplacement\@\@UEAA_NAEAVBlockSource\@\@AEAVIRandom\@\@\@Z
     */
    virtual bool finalize(class BlockSource&, class IRandom&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREPOOLBLOCKPREDICATECAPPEDRANDOMBLOCKREPLACEMENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StructurePoolBlockPredicateCappedRandomBlockReplacement();
#endif
    /**
     * @symbol
     * ??0StructurePoolBlockPredicateCappedRandomBlockReplacement\@\@QEAA\@AEBV?$map\@VHashedString\@\@V1\@U?$less\@VHashedString\@\@\@std\@\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V1\@\@std\@\@\@3\@\@std\@\@_K\@Z
     */
    MCAPI StructurePoolBlockPredicateCappedRandomBlockReplacement(
        std::map<class HashedString, class HashedString> const&,
        uint64_t
    );
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_finalize\@StructurePoolBlockPredicateCappedRandomBlockReplacement\@\@IEAA_NAEAVBlockSource\@\@AEAVIRandom\@\@V?$function\@$$A6AXAEAVBlockPos\@\@\@Z\@std\@\@\@Z
     */
    MCAPI bool _finalize(class BlockSource&, class IRandom&, std::function<void(class BlockPos&)>);
    // NOLINTEND
};
