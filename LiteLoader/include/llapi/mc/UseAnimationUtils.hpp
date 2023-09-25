/**
 * @file  UseAnimationUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class UseAnimationUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_USEANIMATIONUTILS
public:
    class UseAnimationUtils& operator=(class UseAnimationUtils const &) = delete;
    UseAnimationUtils(class UseAnimationUtils const &) = delete;
    UseAnimationUtils() = delete;
#endif

public:
    /**
     * @symbol ?bindType\@UseAnimationUtils\@\@SAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?getStringMapping\@UseAnimationUtils\@\@SAAEBV?$initializer_list\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4UseAnimation\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static class std::initializer_list<struct std::pair<std::string, enum class UseAnimation>> const & getStringMapping();

};
