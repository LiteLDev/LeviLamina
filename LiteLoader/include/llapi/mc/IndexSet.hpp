/**
 * @file  IndexSet.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IndexSet.
 *
 */
class IndexSet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INDEXSET
public:
    class IndexSet& operator=(class IndexSet const &) = delete;
#endif

public:
    /**
     * @hash   -836947999
     * @symbol  ??0IndexSet\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI IndexSet(class IndexSet const &);
    /**
     * @hash   1735860137
     * @symbol  ??0IndexSet\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI IndexSet(class IndexSet &&);
    /**
     * @hash   797860588
     * @symbol  ??0IndexSet\@\@QEAA\@XZ
     */
    MCAPI IndexSet();
    /**
     * @hash   963440030
     * @symbol  ?contains\@IndexSet\@\@QEBA_N_K\@Z
     */
    MCAPI bool contains(unsigned __int64) const;
    /**
     * @hash   -525771112
     * @symbol  ?getPacked\@IndexSet\@\@QEBAAEBV?$vector\@_KV?$allocator\@_K\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<unsigned __int64> const & getPacked() const;
    /**
     * @hash   1536140119
     * @symbol  ?insert\@IndexSet\@\@QEAAX_K\@Z
     */
    MCAPI void insert(unsigned __int64);
    /**
     * @hash   -1853784665
     * @symbol  ??8IndexSet\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class IndexSet const &) const;
    /**
     * @hash   1229755425
     * @symbol  ?remove\@IndexSet\@\@QEAAX_K\@Z
     */
    MCAPI void remove(unsigned __int64);
    /**
     * @hash   -636857638
     * @symbol  ??1IndexSet\@\@QEAA\@XZ
     */
    MCAPI ~IndexSet();

};