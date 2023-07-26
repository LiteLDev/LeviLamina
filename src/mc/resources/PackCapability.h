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

        public:
            // prevent constructor by default
            Failed& operator=(Failed const&) = delete;
            Failed(Failed const&)            = delete;
            Failed()                         = delete;

        public:
            /**
             * @symbol ??1Failed\@ValidationResult\@PackCapability\@\@QEAA\@XZ
             */
            MCAPI ~Failed(); // NOLINT
        };

        struct Succeeded {

        public:
            // prevent constructor by default
            Succeeded& operator=(Succeeded const&) = delete;
            Succeeded(Succeeded const&)            = delete;
            Succeeded()                            = delete;

        public:
            /**
             * @symbol ??1Succeeded\@ValidationResult\@PackCapability\@\@QEAA\@XZ
             */
            MCAPI ~Succeeded(); // NOLINT
        };

    public:
        // prevent constructor by default
        ValidationResult& operator=(ValidationResult const&) = delete;
        ValidationResult(ValidationResult const&)            = delete;
        ValidationResult()                                   = delete;
    };

public:
    // prevent constructor by default
    PackCapability& operator=(PackCapability const&) = delete;
    PackCapability(PackCapability const&)            = delete;
    PackCapability()                                 = delete;

public:
    /**
     * @symbol ??1PackCapability\@\@QEAA\@XZ
     */
    MCAPI ~PackCapability(); // NOLINT
};
