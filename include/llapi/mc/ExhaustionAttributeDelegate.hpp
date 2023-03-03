/**
 * @file  ExhaustionAttributeDelegate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "AttributeInstanceDelegate.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ExhaustionAttributeDelegate.
 *
 */
class ExhaustionAttributeDelegate : public AttributeInstanceDelegate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXHAUSTIONATTRIBUTEDELEGATE
public:
    class ExhaustionAttributeDelegate& operator=(class ExhaustionAttributeDelegate const &) = delete;
    ExhaustionAttributeDelegate(class ExhaustionAttributeDelegate const &) = delete;
    ExhaustionAttributeDelegate() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ExhaustionAttributeDelegate();
    /**
     * @vftbl  1
     * @symbol  ?tick\@ExhaustionAttributeDelegate\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @symbol  ??0ExhaustionAttributeDelegate\@\@QEAA\@AEBVAttributeInstance\@\@\@Z
     */
    MCAPI ExhaustionAttributeDelegate(class AttributeInstance const &);

};