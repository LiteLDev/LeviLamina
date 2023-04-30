/**
 * @file  StructurePoolBlockPredicateCappedArcheologyBlockReplacement.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BrushableBlockActor.hpp"
#include "StructurePoolBlockPredicateCappedRandomBlockReplacement.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class StructurePoolBlockPredicateCappedArcheologyBlockReplacement : public StructurePoolBlockPredicateCappedRandomBlockReplacement {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATECAPPEDARCHEOLOGYBLOCKREPLACEMENT
public:
    class StructurePoolBlockPredicateCappedArcheologyBlockReplacement& operator=(class StructurePoolBlockPredicateCappedArcheologyBlockReplacement const &) = delete;
    StructurePoolBlockPredicateCappedArcheologyBlockReplacement(class StructurePoolBlockPredicateCappedArcheologyBlockReplacement const &) = delete;
    StructurePoolBlockPredicateCappedArcheologyBlockReplacement() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?finalize\@StructurePoolBlockPredicateCappedArcheologyBlockReplacement\@\@UEAA_NAEAVBlockSource\@\@AEAVIRandom\@\@\@Z
     */
    virtual bool finalize(class BlockSource &, class IRandom &);
    /**
     * @symbol ??0StructurePoolBlockPredicateCappedArcheologyBlockReplacement\@\@QEAA\@AEBV?$map\@VHashedString\@\@V1\@U?$less\@VHashedString\@\@\@std\@\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V1\@\@std\@\@\@3\@\@std\@\@_KW4Placement\@BrushableBlockActor\@\@\@Z
     */
    MCAPI StructurePoolBlockPredicateCappedArcheologyBlockReplacement(class std::map<class HashedString, class HashedString, struct std::less<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString>>> const &, unsigned __int64, enum class BrushableBlockActor::Placement);

};
