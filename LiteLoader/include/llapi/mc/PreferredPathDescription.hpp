/**
 * @file  PreferredPathDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure PreferredPathDescription.
 *
 */
struct PreferredPathDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREFERREDPATHDESCRIPTION
public:
    struct PreferredPathDescription& operator=(struct PreferredPathDescription const &) = delete;
    PreferredPathDescription(struct PreferredPathDescription const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@PreferredPathDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@PreferredPathDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PREFERREDPATHDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PreferredPathDescription();
#endif
    /**
     * @symbol ??0PreferredPathDescription\@\@QEAA\@XZ
     */
    MCAPI PreferredPathDescription();

};