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

            public:
                // prevent constructor by default
                Bounds& operator=(Bounds const&) = delete;
                Bounds(Bounds const&)            = delete;
                Bounds()                         = delete;

            public:
                /**
                 * @symbol ?bindType\@Bounds\@Components\@Dimension\@DimensionDocument\@\@SAXXZ
                 */
                MCAPI static void bindType(); // NOLINT
            };

            struct Generation {

            public:
                // prevent constructor by default
                Generation& operator=(Generation const&) = delete;
                Generation(Generation const&)            = delete;
                Generation()                             = delete;

            public:
                /**
                 * @symbol ?bindType\@Generation\@Components\@Dimension\@DimensionDocument\@\@SAXXZ
                 */
                MCAPI static void bindType(); // NOLINT
            };

        public:
            // prevent constructor by default
            Components(Components const&) = delete;
            Components()                  = delete;

        public:
            /**
             * @symbol ??4Components\@Dimension\@DimensionDocument\@\@QEAAAEAU012\@AEBU012\@\@Z
             */
            MCAPI struct DimensionDocument::Dimension::Components&
            operator=(struct DimensionDocument::Dimension::Components const&); // NOLINT
            /**
             * @symbol ??1Components\@Dimension\@DimensionDocument\@\@QEAA\@XZ
             */
            MCAPI ~Components(); // NOLINT
            /**
             * @symbol ?bindType\@Components\@Dimension\@DimensionDocument\@\@SAXXZ
             */
            MCAPI static void bindType(); // NOLINT
        };

        struct Description {

        public:
            // prevent constructor by default
            Description& operator=(Description const&) = delete;
            Description(Description const&)            = delete;
            Description()                              = delete;

        public:
            /**
             * @symbol ??1Description\@Dimension\@DimensionDocument\@\@QEAA\@XZ
             */
            MCAPI ~Description(); // NOLINT
            /**
             * @symbol ?bindType\@Description\@Dimension\@DimensionDocument\@\@SAXXZ
             */
            MCAPI static void bindType(); // NOLINT
        };

    public:
        // prevent constructor by default
        Dimension(Dimension const&) = delete;
        Dimension()                 = delete;

    public:
        /**
         * @symbol ??4Dimension\@DimensionDocument\@\@QEAAAEAU01\@AEBU01\@\@Z
         */
        MCAPI struct DimensionDocument::Dimension& operator=(struct DimensionDocument::Dimension const&); // NOLINT
        /**
         * @symbol ??4Dimension\@DimensionDocument\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct DimensionDocument::Dimension& operator=(struct DimensionDocument::Dimension&&); // NOLINT
        /**
         * @symbol ??1Dimension\@DimensionDocument\@\@QEAA\@XZ
         */
        MCAPI ~Dimension(); // NOLINT
        /**
         * @symbol ?bindType\@Dimension\@DimensionDocument\@\@SAXXZ
         */
        MCAPI static void bindType(); // NOLINT
    };

public:
    // prevent constructor by default
    DimensionDocument& operator=(DimensionDocument const&) = delete;
    DimensionDocument(DimensionDocument const&)            = delete;

public:
    /**
     * @symbol ??0DimensionDocument\@\@QEAA\@XZ
     */
    MCAPI DimensionDocument(); // NOLINT
    /**
     * @symbol ??1DimensionDocument\@\@QEAA\@XZ
     */
    MCAPI ~DimensionDocument(); // NOLINT
    /**
     * @symbol ?bindType\@DimensionDocument\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
};
