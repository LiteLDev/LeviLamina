/**
 * @file  PackCapabilityRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PackCapabilityRegistry {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKCAPABILITYREGISTRY
public:
    class PackCapabilityRegistry& operator=(class PackCapabilityRegistry const &) = delete;
    PackCapabilityRegistry(class PackCapabilityRegistry const &) = delete;
    PackCapabilityRegistry() = delete;
#endif

public:
    /**
     * @symbol ??0PackCapabilityRegistry\@\@QEAA\@AEBV?$initializer_list\@VPackCapability\@\@\@std\@\@\@Z
     */
    MCAPI PackCapabilityRegistry(class std::initializer_list<class PackCapability> const &);
    /**
     * @symbol ?merge\@PackCapabilityRegistry\@\@QEAAXAEAV1\@\@Z
     */
    MCAPI void merge(class PackCapabilityRegistry &);
    /**
     * @symbol ??1PackCapabilityRegistry\@\@QEAA\@XZ
     */
    MCAPI ~PackCapabilityRegistry();

};
