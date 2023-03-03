/**
 * @file  PlayerUIContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "SimpleContainer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerUIContainer.
 *
 */
class PlayerUIContainer : public SimpleContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERUICONTAINER
public:
    class PlayerUIContainer& operator=(class PlayerUIContainer const &) = delete;
    PlayerUIContainer(class PlayerUIContainer const &) = delete;
    PlayerUIContainer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlayerUIContainer();
    /**
     * @vftbl  22
     * @symbol  __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @symbol  __unk_vfn_23
     */
    virtual void __unk_vfn_23();
    /**
     * @symbol  ??0PlayerUIContainer\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NH\@Z
     */
    MCAPI PlayerUIContainer(std::string const &, bool, int);
    /**
     * @symbol  ?load\@PlayerUIContainer\@\@QEAAXAEBVListTag\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void load(class ListTag const &, class SemVersion const &);
    /**
     * @symbol  ?save\@PlayerUIContainer\@\@QEBA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class ListTag> save() const;

};