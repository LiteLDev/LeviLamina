/**
 * @file  TeleportDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TeleportDescription.
 *
 */
class TeleportDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTDESCRIPTION
public:
    class TeleportDescription& operator=(class TeleportDescription const &) = delete;
    TeleportDescription(class TeleportDescription const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@TeleportDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@TeleportDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TELEPORTDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TeleportDescription();
#endif
    /**
     * @symbol ??0TeleportDescription\@\@QEAA\@XZ
     */
    MCAPI TeleportDescription();

};
