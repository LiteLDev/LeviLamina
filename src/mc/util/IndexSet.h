#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IndexSet {

public:
    // prevent constructor by default
    IndexSet& operator=(IndexSet const&) = delete;

public:
    /**
     * @symbol ??0IndexSet\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI IndexSet(class IndexSet&&); // NOLINT
    /**
     * @symbol ??0IndexSet\@\@QEAA\@XZ
     */
    MCAPI IndexSet(); // NOLINT
    /**
     * @symbol ??0IndexSet\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI IndexSet(class IndexSet const&); // NOLINT
    /**
     * @symbol ?contains\@IndexSet\@\@QEBA_N_K\@Z
     */
    MCAPI bool contains(unsigned __int64) const; // NOLINT
    /**
     * @symbol ?getPacked\@IndexSet\@\@QEBAAEBV?$vector\@_KV?$allocator\@_K\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<unsigned __int64> const& getPacked() const; // NOLINT
    /**
     * @symbol ?insert\@IndexSet\@\@QEAAX_K\@Z
     */
    MCAPI void insert(unsigned __int64); // NOLINT
    /**
     * @symbol ??8IndexSet\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class IndexSet const&) const; // NOLINT
    /**
     * @symbol ?remove\@IndexSet\@\@QEAAX_K\@Z
     */
    MCAPI void remove(unsigned __int64); // NOLINT
    /**
     * @symbol ??1IndexSet\@\@QEAA\@XZ
     */
    MCAPI ~IndexSet(); // NOLINT
};
