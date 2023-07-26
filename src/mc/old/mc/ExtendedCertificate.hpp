/**
 * @file  ExtendedCertificate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ExtendedCertificate.
 *
 */
class ExtendedCertificate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTENDEDCERTIFICATE
public:
    class ExtendedCertificate& operator=(class ExtendedCertificate const &) = delete;
    ExtendedCertificate(class ExtendedCertificate const &) = delete;
    ExtendedCertificate() = delete;
#endif

public:
    /**
     * @symbol  ?getIdentity\@ExtendedCertificate\@\@SA?AVUUID\@mce\@\@AEBVCertificate\@\@\@Z
     */
    MCAPI static class mce::UUID getIdentity(class Certificate const &);
    /**
     * @symbol  ?getIdentityName\@ExtendedCertificate\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCertificate\@\@\@Z
     */
    MCAPI static std::string getIdentityName(class Certificate const &);
    /**
     * @symbol  ?getXuid\@ExtendedCertificate\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCertificate\@\@\@Z
     */
    MCAPI static std::string getXuid(class Certificate const &);
    /**
     * @symbol  ?getXuid\@ExtendedCertificate\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBVCertificate\@\@\@Z
     */
    MCAPI static std::string getXuid(class Certificate const *);

};