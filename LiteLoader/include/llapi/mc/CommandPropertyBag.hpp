/**
 * @file  CommandPropertyBag.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

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
     * @hash   -1288744556
     * @symbol  ??0CommandPropertyBag\@\@QEAA\@XZ
     */
    MCAPI CommandPropertyBag();
    /**
     * @hash   -1515123543
     * @symbol  ??0CommandPropertyBag\@\@QEAA\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI CommandPropertyBag(class Json::Value const &);
    /**
     * @hash   2142426330
     * @symbol  ?addToResultList\@CommandPropertyBag\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void addToResultList(std::string const &, std::string const &);
    /**
     * @hash   1103021178
     * @symbol  ?clone\@CommandPropertyBag\@\@QEBA?AV?$unique_ptr\@VCommandPropertyBag\@\@U?$default_delete\@VCommandPropertyBag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CommandPropertyBag> clone() const;
    /**
     * @hash   519370577
     * @symbol  ?set\@CommandPropertyBag\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void set(std::string const &, class BlockPos const &);
    /**
     * @hash   -1902011297
     * @symbol  ?set\@CommandPropertyBag\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI void set(std::string const &, class Json::Value const &);
    /**
     * @hash   820354989
     * @symbol  ?set\@CommandPropertyBag\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VVec3\@\@\@Z
     */
    MCAPI void set(std::string const &, class Vec3);

};