#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ProjectileDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILEDESCRIPTION
public:
    ProjectileDescription& operator=(ProjectileDescription const&) = delete;
    ProjectileDescription(ProjectileDescription const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@ProjectileDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
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
