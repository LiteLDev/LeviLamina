#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VolumeIdentifier {
public:
    // VolumeIdentifier inner types declare
    // clang-format off
    struct ConstrainedString;
    // clang-format on

    // VolumeIdentifier inner types define
    struct ConstrainedString {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEIDENTIFIER_CONSTRAINEDSTRING
    public:
        ConstrainedString& operator=(ConstrainedString const&) = delete;
        ConstrainedString(ConstrainedString const&)            = delete;
        ConstrainedString()                                    = delete;
#endif

    public:
        /**
         * @symbol ?bindType\@ConstrainedString\@VolumeIdentifier\@\@SAXXZ
         */
        MCAPI static void bindType();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEIDENTIFIER
public:
    VolumeIdentifier& operator=(VolumeIdentifier const&) = delete;
    VolumeIdentifier(VolumeIdentifier const&)            = delete;
    VolumeIdentifier()                                   = delete;
#endif

public:
    /**
     * @symbol ??8VolumeIdentifier\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct VolumeIdentifier const&) const;
    /**
     * @symbol ?bindType\@VolumeIdentifier\@\@SAXXZ
     */
    MCAPI static void bindType();
};
