/**
 * @file  Crypto.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace Crypto.
 *
 */
namespace Crypto {

#define AFTER_EXTRA
// Add Member There
namespace Hash {
class md5 {
public:
    md5() = delete;
    md5(md5 const&) = delete;
    md5(md5 const&&) = delete;
};
} // namespace Hash

#undef AFTER_EXTRA
    /**
     * @symbol  ?init\@Crypto\@\@YAXXZ
     */
    MCAPI void init();

};