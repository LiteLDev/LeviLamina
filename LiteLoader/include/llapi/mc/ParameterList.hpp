/**
 * @file  ParameterList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../RTree.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ParameterList.
 *
 */
class ParameterList {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARAMETERLIST
public:
    class ParameterList& operator=(class ParameterList const &) = delete;
    ParameterList(class ParameterList const &) = delete;
    ParameterList() = delete;
#endif

public:
    /**
     * @hash   388710668
     * @symbol  ??0ParameterList\@\@QEAA\@AEBV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI ParameterList(std::vector<struct BiomeNoiseTarget> const &);
    /**
     * @hash   723408519
     * @symbol  ??0ParameterList\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ParameterList(class ParameterList &&);
    /**
     * @hash   -1388888478
     * @symbol  ?findTarget\@ParameterList\@\@QEBAPEAVBiome\@\@AEBUTargetPoint\@\@PEAUHint\@RTree\@\@\@Z
     */
    MCAPI class Biome * findTarget(struct TargetPoint const &, struct RTree::Hint *) const;
    /**
     * @hash   1502936819
     * @symbol  ??1ParameterList\@\@QEAA\@XZ
     */
    MCAPI ~ParameterList();

};