#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class TripodCameraDescription : public ::ActorComponentDescription {

public:
    // prevent constructor by default
    TripodCameraDescription& operator=(TripodCameraDescription const&) = delete;
    TripodCameraDescription(TripodCameraDescription const&)            = delete;
    TripodCameraDescription()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@TripodCameraDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@Description\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRIPODCAMERADESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TripodCameraDescription();
#endif
    // NOLINTEND
};
