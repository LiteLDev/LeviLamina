/**
 * @file  IConstBlockSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class IConstBlockSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICONSTBLOCKSOURCE
public:
    class IConstBlockSource& operator=(class IConstBlockSource const &) = delete;
    IConstBlockSource(class IConstBlockSource const &) = delete;
    IConstBlockSource() = delete;
#endif

public:
    /**
     * @symbol ?checkMaterial\@IConstBlockSource\@\@QEBA_NAEBVAABB\@\@W4MaterialType\@\@\@Z
     */
    MCAPI bool checkMaterial(class AABB const &, enum class MaterialType) const;

};
