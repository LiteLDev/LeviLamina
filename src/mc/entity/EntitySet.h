#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntitySet {

public:
    // prevent constructor by default
    EntitySet& operator=(EntitySet const&) = delete;

public:
    /**
     * @symbol ??0EntitySet\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI EntitySet(class EntitySet&&); // NOLINT
    /**
     * @symbol ??0EntitySet\@\@QEAA\@XZ
     */
    MCAPI EntitySet(); // NOLINT
    /**
     * @symbol ??0EntitySet\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI EntitySet(class EntitySet const&); // NOLINT
    /**
     * @symbol ?add\@EntitySet\@\@QEAA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool add(class EntityContext const&); // NOLINT
    /**
     * @symbol
     * ?erase\@EntitySet\@\@QEAA?AV?$_List_const_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CB_KVWeakEntityRef\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@V23\@\@Z
     */
    MCAPI class std::_List_const_iterator<class std::_List_val<
        struct std::_List_simple_types<struct std::pair<unsigned __int64 const, class WeakEntityRef>>>>
        erase(class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<
                  struct std::pair<unsigned __int64 const, class WeakEntityRef>>>>); // NOLINT
    /**
     * @symbol ?find\@EntitySet\@\@QEBA?AVWeakEntityRef\@\@AEBVEntityContext\@\@\@Z
     */
    MCAPI class WeakEntityRef find(class EntityContext const&) const; // NOLINT
    /**
     * @symbol ??4EntitySet\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class EntitySet& operator=(class EntitySet&&); // NOLINT
};
