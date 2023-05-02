/**
 * @file  IStructurePoolBlockPredicate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class IStructurePoolBlockPredicate {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISTRUCTUREPOOLBLOCKPREDICATE
public:
    class IStructurePoolBlockPredicate& operator=(class IStructurePoolBlockPredicate const &) = delete;
    IStructurePoolBlockPredicate(class IStructurePoolBlockPredicate const &) = delete;
    IStructurePoolBlockPredicate() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISTRUCTUREPOOLBLOCKPREDICATE
    /**
     * @symbol ?finalize\@IStructurePoolBlockPredicate\@\@UEAA_NAEAVBlockSource\@\@AEAVIRandom\@\@\@Z
     */
    MCVAPI bool finalize(class BlockSource &, class IRandom &);
#endif

};
