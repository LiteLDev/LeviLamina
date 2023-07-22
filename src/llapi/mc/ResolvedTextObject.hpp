/**
 * @file  ResolvedTextObject.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResolvedTextObject.
 *
 */
class ResolvedTextObject {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOLVEDTEXTOBJECT
public:
    class ResolvedTextObject& operator=(class ResolvedTextObject const &) = delete;
    ResolvedTextObject(class ResolvedTextObject const &) = delete;
    ResolvedTextObject() = delete;
#endif

public:
    /**
     * @symbol  ?getAsJsonString\@ResolvedTextObject\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getAsJsonString() const;
    /**
     * @symbol  ??1ResolvedTextObject\@\@QEAA\@XZ
     */
    MCAPI ~ResolvedTextObject();

};