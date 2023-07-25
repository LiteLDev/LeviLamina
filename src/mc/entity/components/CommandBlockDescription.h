#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandBlockDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKDESCRIPTION
public:
    CommandBlockDescription& operator=(CommandBlockDescription const&) = delete;
    CommandBlockDescription(CommandBlockDescription const&)            = delete;
    CommandBlockDescription()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@CommandBlockDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@CommandBlockDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDBLOCKDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CommandBlockDescription();
#endif
};
