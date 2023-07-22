/**
 * @file  VolumeIdentifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure VolumeIdentifier.
 *
 */
struct VolumeIdentifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEIDENTIFIER
public:
    struct VolumeIdentifier& operator=(struct VolumeIdentifier const &) = delete;
    VolumeIdentifier(struct VolumeIdentifier const &) = delete;
    VolumeIdentifier() = delete;
#endif

public:
    /**
     * @symbol  ??8VolumeIdentifier\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct VolumeIdentifier const &) const;
    /**
     * @symbol  ?bindType\@VolumeIdentifier\@\@SAXXZ
     */
    MCAPI static void bindType();

};