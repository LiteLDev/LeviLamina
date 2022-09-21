/**
 * @file  MC/TestAction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "IRequestAction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TestAction.
 *
 */
class TestAction : public IRequestAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TESTACTION
public:
    class TestAction& operator=(class TestAction const &) = delete;
    TestAction(class TestAction const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TestAction();
    /**
     * @hash   -262302833
     * @vftbl  1
     * @symbol ?execute@TestAction@@UEAAXAEAVServerLevel@@AEAVDimension@@@Z
     */
    virtual void execute(class ServerLevel &, class Dimension &);
    /**
     * @hash   2127543573
     * @vftbl  3
     * @symbol ??8TestAction@@UEBA_NAEAVIRequestAction@@@Z
     */
    virtual bool operator==(class IRequestAction &) const;
    /**
     * @hash   1375615780
     * @symbol ??0TestAction@@QEAA@XZ
     */
    MCAPI TestAction();

};