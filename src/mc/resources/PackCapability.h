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
        struct NotFound;
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
            MCAPI ~Failed();

            // NOLINTEND

            // thunks
        public:
            // NOLINTBEGIN
            MCAPI void dtor$();

            // NOLINTEND
        };

        struct NotFound {
        public:
            // prevent constructor by default
            NotFound& operator=(NotFound const&);
            NotFound(NotFound const&);
            NotFound();
        };

        struct Succeeded {
        public:
            // prevent constructor by default
            Succeeded& operator=(Succeeded const&);
            Succeeded(Succeeded const&);
            Succeeded();

        public:
            // NOLINTBEGIN
            MCAPI ~Succeeded();

            // NOLINTEND

            // thunks
        public:
            // NOLINTBEGIN
            MCAPI void dtor$();

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
    MCAPI ~PackCapability();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
