#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackCapabilityRegistry {

public:
    // prevent constructor by default
    PackCapabilityRegistry& operator=(PackCapabilityRegistry const&) = delete;
    PackCapabilityRegistry(PackCapabilityRegistry const&)            = delete;
    PackCapabilityRegistry()                                         = delete;

public:
    /**
     * @symbol ??0PackCapabilityRegistry\@\@QEAA\@AEBV?$initializer_list\@VPackCapability\@\@\@std\@\@\@Z
     */
    MCAPI PackCapabilityRegistry(class std::initializer_list<class PackCapability> const&); // NOLINT
    /**
     * @symbol ?merge\@PackCapabilityRegistry\@\@QEAAXAEAV1\@\@Z
     */
    MCAPI void merge(class PackCapabilityRegistry&); // NOLINT
    /**
     * @symbol ??1PackCapabilityRegistry\@\@QEAA\@XZ
     */
    MCAPI ~PackCapabilityRegistry(); // NOLINT
};
