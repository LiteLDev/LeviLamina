/**
 * @file  CompoundBlockVolumeItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CompoundBlockVolumeItem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDBLOCKVOLUMEITEM
public:
    class CompoundBlockVolumeItem& operator=(class CompoundBlockVolumeItem const &) = delete;
    CompoundBlockVolumeItem(class CompoundBlockVolumeItem const &) = delete;
    CompoundBlockVolumeItem() = delete;
#endif

public:
    /**
     * @symbol ??8CompoundBlockVolumeItem\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class CompoundBlockVolumeItem const &) const;
    /**
     * @symbol ?bindType\@CompoundBlockVolumeItem\@\@SAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

};
