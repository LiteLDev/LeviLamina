#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DimensionDocument {
public:
    // DimensionDocument inner types declare
    // clang-format off
    struct Dimension;
    // clang-format on

    // DimensionDocument inner types define
    struct Dimension {
    public:
        // Dimension inner types declare
        // clang-format off
        struct Components;
        struct Description;
        // clang-format on

        // Dimension inner types define
        struct Components {
        public:
            // Components inner types declare
            // clang-format off
            struct Bounds;
            // clang-format on

            // Components inner types define
            struct Bounds {
            public:
                // prevent constructor by default
                Bounds& operator=(Bounds const&);
                Bounds(Bounds const&);
                Bounds();

            public:
                // NOLINTBEGIN
                // symbol: ?bindType@Bounds@Components@Dimension@DimensionDocument@@SAXAEAUReflectionCtx@cereal@@@Z
                MCAPI static void bindType(struct cereal::ReflectionCtx&);

                // NOLINTEND
            };

        public:
            // prevent constructor by default
            Components(Components const&);
            Components();

        public:
            // NOLINTBEGIN
            // symbol: ??4Components@Dimension@DimensionDocument@@QEAAAEAU012@AEBU012@@Z
            MCAPI struct DimensionDocument::Dimension::Components&
            operator=(struct DimensionDocument::Dimension::Components const&);

            // symbol: ??1Components@Dimension@DimensionDocument@@QEAA@XZ
            MCAPI ~Components();

            // symbol: ?bindType@Components@Dimension@DimensionDocument@@SAXAEAUReflectionCtx@cereal@@@Z
            MCAPI static void bindType(struct cereal::ReflectionCtx&);

            // NOLINTEND
        };

        struct Description {
        public:
            // prevent constructor by default
            Description& operator=(Description const&);
            Description(Description const&);
            Description();

        public:
            // NOLINTBEGIN
            // symbol: ??1Description@Dimension@DimensionDocument@@QEAA@XZ
            MCAPI ~Description();

            // NOLINTEND
        };

    public:
        // prevent constructor by default
        Dimension(Dimension const&);
        Dimension();

    public:
        // NOLINTBEGIN
        // symbol: ??4Dimension@DimensionDocument@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct DimensionDocument::Dimension& operator=(struct DimensionDocument::Dimension&&);

        // symbol: ??4Dimension@DimensionDocument@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct DimensionDocument::Dimension& operator=(struct DimensionDocument::Dimension const&);

        // symbol: ??1Dimension@DimensionDocument@@QEAA@XZ
        MCAPI ~Dimension();

        // symbol: ?bindType@Dimension@DimensionDocument@@SAXAEAUReflectionCtx@cereal@@@Z
        MCAPI static void bindType(struct cereal::ReflectionCtx&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DimensionDocument& operator=(DimensionDocument const&);
    DimensionDocument(DimensionDocument const&);
    DimensionDocument();

public:
    // NOLINTBEGIN
    // symbol: ??0DimensionDocument@@QEAA@AEAUReflectionCtx@cereal@@@Z
    MCAPI explicit DimensionDocument(struct cereal::ReflectionCtx&);

    // symbol: ??1DimensionDocument@@QEAA@XZ
    MCAPI ~DimensionDocument();

    // NOLINTEND
};
