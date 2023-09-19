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
            Failed& operator=(Failed const&);
            Failed(Failed const&);
            Failed();

        public:
            // NOLINTBEGIN
            // symbol: ??1Failed@ValidationResult@PackCapability@@QEAA@XZ
            MCAPI ~Failed();

            // NOLINTEND
        };

        struct Succeeded {
        public:
            // prevent constructor by default
            Succeeded& operator=(Succeeded const&);
            Succeeded(Succeeded const&);
            Succeeded();

        public:
            // NOLINTBEGIN
            // symbol: ??1Succeeded@ValidationResult@PackCapability@@QEAA@XZ
            MCAPI ~Succeeded();

            // NOLINTEND
        };

    public:
        // prevent constructor by default
        ValidationResult& operator=(ValidationResult const&);
        ValidationResult(ValidationResult const&);
        ValidationResult();
    };

public:
    // prevent constructor by default
    PackCapability& operator=(PackCapability const&);
    PackCapability(PackCapability const&);
    PackCapability();

public:
    // NOLINTBEGIN
    // symbol: ??1PackCapability@@QEAA@XZ
    MCAPI ~PackCapability();

    // NOLINTEND
};
