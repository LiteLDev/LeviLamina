#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackCapabilityRegistry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKCAPABILITYREGISTRY
public:
    PackCapabilityRegistry& operator=(PackCapabilityRegistry const&) = delete;
    PackCapabilityRegistry(PackCapabilityRegistry const&)            = delete;
    PackCapabilityRegistry()                                         = delete;
#endif

public:
    /**
     * @symbol ??0PackCapabilityRegistry\@\@QEAA\@AEBV?$initializer_list\@VPackCapability\@\@\@std\@\@\@Z
     */
    MCAPI PackCapabilityRegistry(class std::initializer_list<class PackCapability> const&);
    /**
     * @symbol ?merge\@PackCapabilityRegistry\@\@QEAAXAEAV1\@\@Z
     */
    MCAPI void merge(class PackCapabilityRegistry&);
    /**
     * @symbol ??1PackCapabilityRegistry\@\@QEAA\@XZ
     */
    MCAPI ~PackCapabilityRegistry();
};
