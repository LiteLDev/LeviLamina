#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackCapability {
public:
    // PackCapability inner types declare
    // clang-format off
    class ValidationResult;
    // clang-format on

    // PackCapability inner types define
    class ValidationResult {
    public:
        // ValidationResult inner types declare
        // clang-format off
        struct Failed;
        struct Succeeded;
        // clang-format on

        // ValidationResult inner types define
        struct Failed {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKCAPABILITY_VALIDATIONRESULT_FAILED
        public:
            Failed& operator=(Failed const&) = delete;
            Failed(Failed const&)            = delete;
            Failed()                         = delete;
#endif

        public:
            /**
             * @symbol ??1Failed\@ValidationResult\@PackCapability\@\@QEAA\@XZ
             */
            MCAPI ~Failed();
        };

        struct Succeeded {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKCAPABILITY_VALIDATIONRESULT_SUCCEEDED
        public:
            Succeeded& operator=(Succeeded const&) = delete;
            Succeeded(Succeeded const&)            = delete;
            Succeeded()                            = delete;
#endif

        public:
            /**
             * @symbol ??1Succeeded\@ValidationResult\@PackCapability\@\@QEAA\@XZ
             */
            MCAPI ~Succeeded();
        };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKCAPABILITY_VALIDATIONRESULT
    public:
        ValidationResult& operator=(ValidationResult const&) = delete;
        ValidationResult(ValidationResult const&)            = delete;
        ValidationResult()                                   = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKCAPABILITY
public:
    PackCapability& operator=(PackCapability const&) = delete;
    PackCapability(PackCapability const&)            = delete;
    PackCapability()                                 = delete;
#endif

public:
    /**
     * @symbol ??1PackCapability\@\@QEAA\@XZ
     */
    MCAPI ~PackCapability();
};
