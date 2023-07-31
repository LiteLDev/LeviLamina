#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PreferredPathDescription {

public:
    // prevent constructor by default
    PreferredPathDescription& operator=(PreferredPathDescription const&) = delete;
    PreferredPathDescription(PreferredPathDescription const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@PreferredPathDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
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
    // NOLINTEND
};
