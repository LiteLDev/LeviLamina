#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/SimpleContainer.h"

class PlayerUIContainer : public ::SimpleContainer {

public:
    // prevent constructor by default
    PlayerUIContainer& operator=(PlayerUIContainer const&) = delete;
    PlayerUIContainer(PlayerUIContainer const&)            = delete;
    PlayerUIContainer()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25(); // NOLINT
    /**
     * @vftbl 26
     * @symbol __unk_vfn_26
     */
    virtual void __unk_vfn_26(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERUICONTAINER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerUIContainer(); // NOLINT
#endif
    /**
     * @symbol
     * ??0PlayerUIContainer\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NH\@Z
     */
    MCAPI PlayerUIContainer(std::string const&, bool, int); // NOLINT
    /**
     * @symbol ?load\@PlayerUIContainer\@\@QEAAXAEBVListTag\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void load(class ListTag const&, class SemVersion const&); // NOLINT
    /**
     * @symbol
     * ?save\@PlayerUIContainer\@\@QEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> save() const; // NOLINT
};
