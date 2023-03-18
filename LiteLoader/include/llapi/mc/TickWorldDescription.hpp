/**
 * @file  TickWorldDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TickWorldDescription.
 *
 */
class TickWorldDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKWORLDDESCRIPTION
public:
    class TickWorldDescription& operator=(class TickWorldDescription const &) = delete;
    TickWorldDescription(class TickWorldDescription const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@TickWorldDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@TickWorldDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKWORLDDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TickWorldDescription();
#endif
    /**
     * @symbol ??0TickWorldDescription\@\@QEAA\@XZ
     */
    MCAPI TickWorldDescription();

};
