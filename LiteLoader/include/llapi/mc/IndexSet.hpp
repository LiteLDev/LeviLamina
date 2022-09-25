/**
 * @file  IndexSet.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
public:
    /**
     * @hash   202531105
     * @symbol ??0IndexSet@@QEAA@AEBV0@@Z
     */
    MCAPI IndexSet(class IndexSet const &);
    /**
     * @hash   1460620553
     * @symbol ??0IndexSet@@QEAA@$$QEAV0@@Z
     */
    MCAPI IndexSet(class IndexSet &&);
    /**
     * @hash   692673372
     * @symbol ??0IndexSet@@QEAA@XZ
     */
    MCAPI IndexSet();
    /**
     * @hash   590256611
     * @symbol ?clear@IndexSet@@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   2002903758
     * @symbol ?contains@IndexSet@@QEBA_N_K@Z
     */
    MCAPI bool contains(unsigned __int64) const;
    /**
     * @hash   -622393896
     * @symbol ?getPacked@IndexSet@@QEBAAEBV?$vector@_KV?$allocator@_K@std@@@std@@XZ
     */
    MCAPI std::vector<unsigned __int64> const & getPacked() const;
    /**
     * @hash   -1719363449
     * @symbol ?insert@IndexSet@@QEAAX_K@Z
     */
    MCAPI void insert(unsigned __int64);
    /**
     * @hash   -2039619868
     * @symbol ??4IndexSet@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class IndexSet & operator=(class IndexSet const &);
    /**
     * @hash   -814305561
     * @symbol ??8IndexSet@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class IndexSet const &) const;
    /**
     * @hash   -2025748143
     * @symbol ?remove@IndexSet@@QEAAX_K@Z
     */
    MCAPI void remove(unsigned __int64);
    /**
     * @hash   -779101014
     * @symbol ??1IndexSet@@QEAA@XZ
     */
    MCAPI ~IndexSet();

};