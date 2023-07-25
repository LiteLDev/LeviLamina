#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/IRequestAction.h"

class TestAction : public ::IRequestAction {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TESTACTION
public:
    TestAction& operator=(TestAction const&) = delete;
    TestAction(TestAction const&)            = delete;
    TestAction()                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@TestAction\@\@UEAAXAEAVServerLevel\@\@AEAVDimension\@\@\@Z
     */
    virtual void execute(class ServerLevel&, class Dimension&);
    /**
     * @vftbl 3
     * @symbol ??8TestAction\@\@UEBA_NAEAVIRequestAction\@\@\@Z
     */
    virtual bool operator==(class IRequestAction&) const;
};
