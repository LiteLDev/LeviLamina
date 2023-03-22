/**
 * @file  PersistentDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PersistentDescription.
 *
 */
class PersistentDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERSISTENTDESCRIPTION
public:
    class PersistentDescription& operator=(class PersistentDescription const &) = delete;
    PersistentDescription(class PersistentDescription const &) = delete;
    PersistentDescription() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@PersistentDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PERSISTENTDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PersistentDescription();
#endif

};
