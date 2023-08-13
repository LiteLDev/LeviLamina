#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CommandPropertyBag {

public:
    // prevent constructor by default
    CommandPropertyBag& operator=(CommandPropertyBag const&) = delete;
    CommandPropertyBag(CommandPropertyBag const&)            = delete;
    CommandPropertyBag()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CommandPropertyBag\@\@QEAA\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI CommandPropertyBag(class Json::Value const&);
    /**
     * @symbol
     * ?addToResultList\@CommandPropertyBag\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void addToResultList(std::string const&, std::string const&);
    /**
     * @symbol
     * ?set\@CommandPropertyBag\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VVec3\@\@\@Z
     */
    MCAPI void set(std::string const&, class Vec3);
    /**
     * @symbol
     * ?set\@CommandPropertyBag\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI void set(std::string const&, class Json::Value const&);
    /**
     * @symbol
     * ?set\@CommandPropertyBag\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void set(std::string const&, class BlockPos const&);
    // NOLINTEND
};
