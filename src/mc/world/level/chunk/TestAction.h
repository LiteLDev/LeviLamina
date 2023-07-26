#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/IRequestAction.h"

class TestAction : public ::IRequestAction {

public:
    // prevent constructor by default
    TestAction& operator=(TestAction const&) = delete;
    TestAction(TestAction const&)            = delete;
    TestAction()                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@TestAction\@\@UEAAXAEAVServerLevel\@\@AEAVDimension\@\@\@Z
     */
    virtual void execute(class ServerLevel&, class Dimension&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ??8TestAction\@\@UEBA_NAEAVIRequestAction\@\@\@Z
     */
    virtual bool operator==(class IRequestAction&) const; // NOLINT
};
