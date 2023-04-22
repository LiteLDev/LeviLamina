/**
 * @file  ProjectileDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ProjectileDescription.
 *
 */
class ProjectileDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILEDESCRIPTION
public:
    class ProjectileDescription& operator=(class ProjectileDescription const &) = delete;
    ProjectileDescription(class ProjectileDescription const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@ProjectileDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@ProjectileDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PROJECTILEDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ProjectileDescription();
#endif
    /**
     * @symbol ??0ProjectileDescription\@\@QEAA\@XZ
     */
    MCAPI ProjectileDescription();

};
