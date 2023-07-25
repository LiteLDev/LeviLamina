#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ExtendedCertificate {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTENDEDCERTIFICATE
public:
    ExtendedCertificate& operator=(ExtendedCertificate const&) = delete;
    ExtendedCertificate(ExtendedCertificate const&)            = delete;
    ExtendedCertificate()                                      = delete;
#endif

public:
    /**
     * @symbol ?getIdentity\@ExtendedCertificate\@\@SA?AVUUID\@mce\@\@AEBVCertificate\@\@\@Z
     */
    MCAPI static class mce::UUID getIdentity(class Certificate const&);
    /**
     * @symbol
     * ?getIdentityName\@ExtendedCertificate\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCertificate\@\@\@Z
     */
    MCAPI static std::string getIdentityName(class Certificate const&);
    /**
     * @symbol
     * ?getXuid\@ExtendedCertificate\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCertificate\@\@\@Z
     */
    MCAPI static std::string getXuid(class Certificate const&);
};
