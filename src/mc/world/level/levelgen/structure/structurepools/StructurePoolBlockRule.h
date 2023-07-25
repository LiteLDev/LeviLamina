#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolBlockRule {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKRULE
public:
    StructurePoolBlockRule& operator=(StructurePoolBlockRule const&) = delete;
    StructurePoolBlockRule(StructurePoolBlockRule const&)            = delete;
    StructurePoolBlockRule()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ??0StructurePoolBlockRule\@\@QEAA\@$$QEAV?$unique_ptr\@VIStructurePoolBlockPredicate\@\@U?$default_delete\@VIStructurePoolBlockPredicate\@\@\@std\@\@\@std\@\@0PEBVBlock\@\@\@Z
     */
    MCAPI
    StructurePoolBlockRule(std::unique_ptr<class IStructurePoolBlockPredicate>&&, std::unique_ptr<class IStructurePoolBlockPredicate>&&, class Block const*);
    /**
     * @symbol
     * ??0StructurePoolBlockRule\@\@QEAA\@$$QEAV?$unique_ptr\@VIStructurePoolBlockPredicate\@\@U?$default_delete\@VIStructurePoolBlockPredicate\@\@\@std\@\@\@std\@\@00PEBVBlock\@\@\@Z
     */
    MCAPI
    StructurePoolBlockRule(std::unique_ptr<class IStructurePoolBlockPredicate>&&, std::unique_ptr<class IStructurePoolBlockPredicate>&&, std::unique_ptr<class IStructurePoolBlockPredicate>&&, class Block const*);
    /**
     * @symbol ?finalizeRule\@StructurePoolBlockRule\@\@QEAA_NAEAVBlockSource\@\@AEAVIRandom\@\@\@Z
     */
    MCAPI bool finalizeRule(class BlockSource&, class IRandom&);
    /**
     * @symbol ?processRule\@StructurePoolBlockRule\@\@QEBA_NAEBVBlock\@\@0AEAVRandom\@\@AEAPEBV2\@AEBVBlockPos\@\@3\@Z
     */
    MCAPI bool
    processRule(class Block const&, class Block const&, class Random&, class Block const*&, class BlockPos const&, class BlockPos const&)
        const;
};
