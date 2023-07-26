/**
 * @file  BastionStart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BastionStart.
 *
 */
class BastionStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASTIONSTART
public:
    class BastionStart& operator=(class BastionStart const &) = delete;
    BastionStart(class BastionStart const &) = delete;
    BastionStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BastionStart();
    /**
     * @vftbl  2
     * @symbol  ?isValid\@BastionStart\@\@UEBA_NXZ
     */
    virtual bool isValid() const;

};