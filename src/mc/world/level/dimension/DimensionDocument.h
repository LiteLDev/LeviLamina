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
            // prevent constructor by default
            Components(Components const&);
            Components();

        public:
            // NOLINTBEGIN
            MCAPI struct DimensionDocument::Dimension::Components&
            operator=(struct DimensionDocument::Dimension::Components const&);

            MCAPI ~Components();

            MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

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
            MCAPI ~Description();

            // NOLINTEND
        };

    public:
        // prevent constructor by default
        Dimension(Dimension const&);
        Dimension();

    public:
        // NOLINTBEGIN
        MCAPI struct DimensionDocument::Dimension& operator=(struct DimensionDocument::Dimension&&);

        MCAPI struct DimensionDocument::Dimension& operator=(struct DimensionDocument::Dimension const&);

        MCAPI ~Dimension();

        MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DimensionDocument& operator=(DimensionDocument const&);
    DimensionDocument(DimensionDocument const&);
    DimensionDocument();

public:
    // NOLINTBEGIN
    MCAPI explicit DimensionDocument(struct cereal::ReflectionCtx& ctx);

    MCAPI ~DimensionDocument();

    // NOLINTEND
};
