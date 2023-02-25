/**
 * @file  TestAction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~TestAction();
    /**
     * @vftbl  1
     * @symbol  ?execute\@TestAction\@\@UEAAXAEAVServerLevel\@\@AEAVDimension\@\@\@Z
     */
    virtual void execute(class ServerLevel &, class Dimension &);
    /**
     * @vftbl  3
     * @symbol  ??8TestAction\@\@UEBA_NAEAVIRequestAction\@\@\@Z
     */
    virtual bool operator==(class IRequestAction &) const;
    /**
     * @symbol  ??0TestAction\@\@QEAA\@XZ
     */
    MCAPI TestAction();

};