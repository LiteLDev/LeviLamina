/**
 * @file  PackCapabilityRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "PackCapability.hpp"

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
     * @symbol  ??0PackCapabilityRegistry\@\@QEAA\@AEBV?$initializer_list\@VPackCapability\@\@\@std\@\@\@Z
     */
    MCAPI PackCapabilityRegistry(class std::initializer_list<class PackCapability> const &);
    /**
     * @symbol  ?lookup\@PackCapabilityRegistry\@\@QEBA?AV?$variant\@USucceeded\@ValidationResult\@PackCapability\@\@UFailed\@23\@UNotFound\@23\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
     */
    MCAPI class std::variant<struct PackCapability::ValidationResult::Succeeded, struct PackCapability::ValidationResult::Failed, struct PackCapability::ValidationResult::NotFound> lookup(class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @symbol  ?merge\@PackCapabilityRegistry\@\@QEAAXAEAV1\@\@Z
     */
    MCAPI void merge(class PackCapabilityRegistry &);
    /**
     * @symbol  ??1PackCapabilityRegistry\@\@QEAA\@XZ
     */
    MCAPI ~PackCapabilityRegistry();

};