#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptItemType {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTITEMTYPE
public:
    ScriptItemType& operator=(ScriptItemType const&) = delete;
    ScriptItemType(ScriptItemType const&)            = delete;
    ScriptItemType()                                 = delete;
#endif

public:
    /**
     * @symbol ?getItem\@ScriptItemType\@ScriptModuleMinecraft\@\@QEBAAEBVItem\@\@XZ
     */
    MCAPI class Item const& getItem() const;
    /**
     * @symbol
     * ?getName\@ScriptItemType\@ScriptModuleMinecraft\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @symbol ??8ScriptItemType\@ScriptModuleMinecraft\@\@QEBA_NAEBV01\@\@Z
     */
    MCAPI bool operator==(class ScriptModuleMinecraft::ScriptItemType const&) const;
};

}; // namespace ScriptModuleMinecraft
