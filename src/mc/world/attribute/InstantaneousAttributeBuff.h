#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeBuff.h"

class InstantaneousAttributeBuff : public ::AttributeBuff {

public:
    // prevent constructor by default
    InstantaneousAttributeBuff& operator=(InstantaneousAttributeBuff const&) = delete;
    InstantaneousAttributeBuff(InstantaneousAttributeBuff const&)            = delete;
    InstantaneousAttributeBuff()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isInstantaneous\@InstantaneousAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isInstantaneous() const;
    /**
     * @vftbl 2
     * @symbol ?isSerializable\@InstantaneousAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isSerializable() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INSTANTANEOUSATTRIBUTEBUFF
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~InstantaneousAttributeBuff();
#endif
    /**
     * @symbol ??0InstantaneousAttributeBuff\@\@QEAA\@MW4AttributeBuffType\@\@\@Z
     */
    MCAPI InstantaneousAttributeBuff(float, enum class AttributeBuffType);
    /**
     * @symbol ??0InstantaneousAttributeBuff\@\@QEAA\@MAEBVActorDamageSource\@\@\@Z
     */
    MCAPI InstantaneousAttributeBuff(float, class ActorDamageSource const&);
    // NOLINTEND
};
