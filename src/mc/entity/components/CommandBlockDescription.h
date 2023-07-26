#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandBlockDescription {

public:
    // prevent constructor by default
    CommandBlockDescription& operator=(CommandBlockDescription const&) = delete;
    CommandBlockDescription(CommandBlockDescription const&)            = delete;
    CommandBlockDescription()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@CommandBlockDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@CommandBlockDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDBLOCKDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CommandBlockDescription(); // NOLINT
#endif
};
