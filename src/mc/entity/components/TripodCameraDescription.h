#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Description.h"

class TripodCameraDescription : public ::Description {

public:
    // prevent constructor by default
    TripodCameraDescription& operator=(TripodCameraDescription const&) = delete;
    TripodCameraDescription(TripodCameraDescription const&)            = delete;
    TripodCameraDescription()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@TripodCameraDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRIPODCAMERADESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TripodCameraDescription(); // NOLINT
#endif
};
