#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackCapabilityRegistry {

public:
    // prevent constructor by default
    PackCapabilityRegistry& operator=(PackCapabilityRegistry const&) = delete;
    PackCapabilityRegistry(PackCapabilityRegistry const&)            = delete;
    PackCapabilityRegistry()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0PackCapabilityRegistry\@\@QEAA\@AEBV?$initializer_list\@VPackCapability\@\@\@std\@\@\@Z
     */
    MCAPI PackCapabilityRegistry(std::initializer_list<class PackCapability> const&);
    /**
     * @symbol ?merge\@PackCapabilityRegistry\@\@QEAAXAEAV1\@\@Z
     */
    MCAPI void merge(class PackCapabilityRegistry&);
    /**
     * @symbol ??1PackCapabilityRegistry\@\@QEAA\@XZ
     */
    MCAPI ~PackCapabilityRegistry();
    // NOLINTEND
};
