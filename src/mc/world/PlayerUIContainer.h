#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/SimpleContainer.h"

class PlayerUIContainer : public ::SimpleContainer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERUICONTAINER
public:
    PlayerUIContainer& operator=(PlayerUIContainer const&) = delete;
    PlayerUIContainer(PlayerUIContainer const&)            = delete;
    PlayerUIContainer()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25();
    /**
     * @vftbl 26
     * @symbol __unk_vfn_26
     */
    virtual void __unk_vfn_26();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERUICONTAINER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlayerUIContainer();
#endif
    /**
     * @symbol
     * ??0PlayerUIContainer\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NH\@Z
     */
    MCAPI PlayerUIContainer(std::string const&, bool, int);
    /**
     * @symbol ?load\@PlayerUIContainer\@\@QEAAXAEBVListTag\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void load(class ListTag const&, class SemVersion const&);
    /**
     * @symbol
     * ?save\@PlayerUIContainer\@\@QEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> save() const;
};
