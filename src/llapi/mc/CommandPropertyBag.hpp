/**
 * @file  CommandPropertyBag.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandPropertyBag.
 *
 */
class CommandPropertyBag {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDPROPERTYBAG
public:
    class CommandPropertyBag& operator=(class CommandPropertyBag const &) = delete;
    CommandPropertyBag(class CommandPropertyBag const &) = delete;
#endif

public:
    /**
     * @symbol  ??0CommandPropertyBag\@\@QEAA\@XZ
     */
    MCAPI CommandPropertyBag();
    /**
     * @symbol  ??0CommandPropertyBag\@\@QEAA\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI CommandPropertyBag(class Json::Value const &);
    /**
     * @symbol  ?addToResultList\@CommandPropertyBag\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void addToResultList(std::string const &, std::string const &);
    /**
     * @symbol  ?clone\@CommandPropertyBag\@\@QEBA?AV?$unique_ptr\@VCommandPropertyBag\@\@U?$default_delete\@VCommandPropertyBag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CommandPropertyBag> clone() const;
    /**
     * @symbol  ?set\@CommandPropertyBag\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void set(std::string const &, class BlockPos const &);
    /**
     * @symbol  ?set\@CommandPropertyBag\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI void set(std::string const &, class Json::Value const &);
    /**
     * @symbol  ?set\@CommandPropertyBag\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VVec3\@\@\@Z
     */
    MCAPI void set(std::string const &, class Vec3);

};