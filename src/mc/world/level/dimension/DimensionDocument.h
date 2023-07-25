#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
            struct Generation;
            // clang-format on

            // Components inner types define
            struct Bounds {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONDOCUMENT_DIMENSION_COMPONENTS_BOUNDS
            public:
                Bounds& operator=(Bounds const&) = delete;
                Bounds(Bounds const&)            = delete;
                Bounds()                         = delete;
#endif

            public:
                /**
                 * @symbol ?bindType\@Bounds\@Components\@Dimension\@DimensionDocument\@\@SAXXZ
                 */
                MCAPI static void bindType();
            };

            struct Generation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONDOCUMENT_DIMENSION_COMPONENTS_GENERATION
            public:
                Generation& operator=(Generation const&) = delete;
                Generation(Generation const&)            = delete;
                Generation()                             = delete;
#endif

            public:
                /**
                 * @symbol ?bindType\@Generation\@Components\@Dimension\@DimensionDocument\@\@SAXXZ
                 */
                MCAPI static void bindType();
            };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONDOCUMENT_DIMENSION_COMPONENTS
        public:
            Components(Components const&) = delete;
            Components()                  = delete;
#endif

        public:
            /**
             * @symbol ??4Components\@Dimension\@DimensionDocument\@\@QEAAAEAU012\@AEBU012\@\@Z
             */
            MCAPI struct DimensionDocument::Dimension::Components&
            operator=(struct DimensionDocument::Dimension::Components const&);
            /**
             * @symbol ??1Components\@Dimension\@DimensionDocument\@\@QEAA\@XZ
             */
            MCAPI ~Components();
            /**
             * @symbol ?bindType\@Components\@Dimension\@DimensionDocument\@\@SAXXZ
             */
            MCAPI static void bindType();
        };

        struct Description {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONDOCUMENT_DIMENSION_DESCRIPTION
        public:
            Description& operator=(Description const&) = delete;
            Description(Description const&)            = delete;
            Description()                              = delete;
#endif

        public:
            /**
             * @symbol ??1Description\@Dimension\@DimensionDocument\@\@QEAA\@XZ
             */
            MCAPI ~Description();
            /**
             * @symbol ?bindType\@Description\@Dimension\@DimensionDocument\@\@SAXXZ
             */
            MCAPI static void bindType();
        };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONDOCUMENT_DIMENSION
    public:
        Dimension(Dimension const&) = delete;
        Dimension()                 = delete;
#endif

    public:
        /**
         * @symbol ??4Dimension\@DimensionDocument\@\@QEAAAEAU01\@AEBU01\@\@Z
         */
        MCAPI struct DimensionDocument::Dimension& operator=(struct DimensionDocument::Dimension const&);
        /**
         * @symbol ??4Dimension\@DimensionDocument\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct DimensionDocument::Dimension& operator=(struct DimensionDocument::Dimension&&);
        /**
         * @symbol ??1Dimension\@DimensionDocument\@\@QEAA\@XZ
         */
        MCAPI ~Dimension();
        /**
         * @symbol ?bindType\@Dimension\@DimensionDocument\@\@SAXXZ
         */
        MCAPI static void bindType();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONDOCUMENT
public:
    DimensionDocument& operator=(DimensionDocument const&) = delete;
    DimensionDocument(DimensionDocument const&)            = delete;
#endif

public:
    /**
     * @symbol ??0DimensionDocument\@\@QEAA\@XZ
     */
    MCAPI DimensionDocument();
    /**
     * @symbol ??1DimensionDocument\@\@QEAA\@XZ
     */
    MCAPI ~DimensionDocument();
    /**
     * @symbol ?bindType\@DimensionDocument\@\@SAXXZ
     */
    MCAPI static void bindType();
};
